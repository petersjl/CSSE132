/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * data.c - Source file with your solutions to the lab.  The 
 *          main functionality for this lab should be implemented
 *          here.  This file is used for running the lab's program
 *          and also for running the unit tests.
 *
 *          This is a file you need to hand in!
 *
 * This file contains code used by labs in the CSSE 132 class.
 * When you edit this file for class, be sure to put your name(s) here!
 *
 * Edited by
 * NAMES: Joe Peters, Stephen Payne
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "data.h"

// This is the size of our "database" array: it has this many slots and can't
// grow any larger.
const unsigned int DB_MAX_SIZE = 128;

/** 
 * This formats and prints out a db_entry nicely.
 * We're providing this for you so the output is uniform.
 *
 * @param fd: the file descriptor where the output goes (can be stdout)
 * @param entry: the db_entry struct to print
 */
void
dbe_print(struct db_entry* entry, FILE* fd)
{
  //TODO: Modify this function to have an additional FILE* parameter.
  // This way you can print an entry to the screen with:
  //   
  //   dbe_print(entry, stdout)
  //
  // or you can print an entry to a file with:
  //
  //   FILE* fd = fopen("myfile.txt");
  //   dbe_print(entry, fd);
  //   fclose(fd);

  fprintf(fd, "%s => %s\n", entry->name, entry->value);
}

/**
 * Allocates space for a db_entry's members and copies the strings into the
 * newly allocated memory.  If you need space for a string, this is where you
 * allocate it.  This function "constructs" the structure and fills it up.
 *
 * dbe_alloc("me", "val") must allocate contiguous space for two string
 * pointers.  Once that's allocated, it needs to create the space for each
 * string and point the structure's values to the strings.  This example
 * creates a structure in memory that looks like this:
 *
 * db_entry* -> {
 *                char* name: -------> ['m', 'e', '\0']
 *                char* value: ------> ['v', 'a', 'l', '\0']
 *              }
 * The structure itself only needs space for the two pointers, but to figure
 * out how to initialize the pointers, you need to make space for the strings
 * first.
 *
 * @return: a pointer to where the allocated
 */
struct db_entry*
dbe_alloc(const char* name, const char* value)
{
  struct db_entry* r = malloc(sizeof(struct db_entry));

  r->name = malloc(sizeof(char) * strlen(name));
  memcpy(r->name, name, strlen(name));
  r->name[strlen(name)] = '\0';

  r->value = malloc(sizeof(char) * strlen(value));
  memcpy(r->value, value, strlen(value));
  r->value[strlen(value)] = '\0';

  return r;
}


/**
 * Releases the memory held by the a db_entry struct.
 * Anything that needed to be malloc()'ed when the structure was created must
 * be free()'ed here.
 *
 * @param entry: a pointer to the structure to free.
 */
void
dbe_free(struct db_entry* entry)
{
  free(entry->name);
  free(entry->value);
  free(entry);
}

/**
 * Returns the number of non-null entries in the database.
 * For example, given this database:
 *   db = [("A" => "aval"), ("C" => "cval"), 0, 0]
 * db_count_entries(db) returns 2.
 *
 * @param database: a pointer to the database structure
 * @return: the entry count
 */
int
db_count_entries(struct db_entry** database)
{
  int i = 0;
  while (i < DB_MAX_SIZE && database[i] != 0) {
    i++;
  }
  return i;
}

/**
 * Removes the entry at index "index" and shifts the trailing items down.
 * For example, if a database looks like this:
 *   db = [("A" => "aval"), ("B" => "bval"), ("C" => "cval"), 0]
 * when db_remove(db, 1) completes, db will look like this:
 *   db = [("A" => "aval"), ("C" => "cval"), 0, 0]
 *
 * @param database: a pointer to the database structure
 * @param index: the index of the item to remove.
 */
void
db_remove(struct db_entry** database, int index)
{
  int i;

  if(database[index] == NULL) { return; }

  // wipe it
  dbe_free(database[index]);
  database[index] = NULL;
  // shift trailing items left
  for(i=index; database[i+1] != NULL; i++) {
    database[i] = database[i+1];
  }
  database[i] = NULL;
}

/**
 * This looks for "target" in the database and returns the index if found.
 *
 * For example, db_find_one(db, "bob", 0) will search db for any entries with
 * the name starting with "bob", beginning with the first (0th) index.
 *
 * @param database: a pointer to the database structure
 * @param target: a string to look for in the database's names
 * @param initialIndex: a starting index in case you want to search part 
 *           of the database
 * @returns the index of the first matching entry or -1 if it wasn't found.
 */
int
db_find_one(struct db_entry** database,
            const char* target,
            int initialIndex)
{
  int i;
  for(i=initialIndex; database[i] != 0; i++) {
    if(strncmp(target, database[i]->name, strlen(target)) == 0) {
      return i;
    }
  }
  return -1;
}

/**
 * This allocates some memory for a new entry and adds a pointer to it to the
 * end of the database.  
 *
 * @param db: a pointer to the database structure
 * @param name: a string for the name of the entry
 * @param value: a string for the entry's contents
 */
void
do_add_entry(struct db_entry** db, const char* name, const char* value)
{
  unsigned int size = 0;
  // find the first null slot and place a new db_entry 
  while(size < DB_MAX_SIZE && db[size] != 0) {
    size++;
  }
  db[size] = dbe_alloc(name, value);
}

/**
 * Prints out all the entries in the database.
 *
 * @param db: a pointer to the database structure
 */
void
do_list_database(struct db_entry** db)
{
  int i;
  for(i=0; i < DB_MAX_SIZE && db[i] != NULL; i++) {
    dbe_print(db[i], stdout);
  }
}

/**
 * Complete this function:
 * When do_remove_first_match is called, remove the first entry in the database
 * with a name that starts with the value of target.  If no entries start with
 * the string contained in the target parameter, nothing is removed.
 *
 * @param db: a pointer to the database structure
 * @param target: a name of an entry to remove
 * @return: 1 if something was removed, 0 if not. 
 */
int
do_remove_first_match(struct db_entry** db, const char* target)
{
  int i = -1;

  i = db_find_one(db, target, 0);
  if (i < 0) {
    return 0;
  }

  db_remove(db, i);
  return 1; 
}

/**
 * Finds and prints all the database entries that start with the given target. 
 *
 * This uses dbe_print() to display the matches.
 *
 * For example, output when looking for 'name1' may look like:
 *   name1 => value1
 *   name1 => value2
 *   name1longer => valuelonger
 *
 * @param db: a pointer to the database structure
 * @param target: a string to match in names of entries to find
 */
void
do_find_all_matches(struct db_entry** db, const char* target)
{
  //TODO: implement this function.
  // You may want to use db_find_one to reduce code duplication.
}

/**
 * Exports the database to specified file.  Will create the file if it doesn't
 * exist and replace any contents of the file.
 *
 * @param db: a pointer to the database structure
 * @param filename: a string path to the file
 */
void
do_export_db(struct db_entry** db, const char* filename)
{
  //TODO: implement this function.
  // * open the file
  // * write each db entry into it (you can use dbe_print here) 
  // * close the file.
  FILE* fd = fopen(filename, "w");
  if(fd == NULL){
    printf("ERROR: file not found");
    return;
  }
  for(int i=0; i < DB_MAX_SIZE && db[i] != NULL; i++) {
         dbe_print(db[i], fd);
  }
  fclose(fd);
}

/**
 * Reads the database from specified file.  Appends each entry in the file to
 * the database (may cause duplicates).
 *
 * @param db: a pointer to the database structure
 * @param filename: a string path to the file
 * @return the number of entries imported
 */
int
do_import_db(struct db_entry** db, const char* filename)
{
  //TODO: implement this function.
  // You will probably want a couple of string buffers
  // to store the name and value read.
  //
  // Hint: you can use fscanf to read from a file, much like fprintf writes to
  // a file.
  // A good format string for fscanf is:
  //     "%128[^=]=>%128[^\n]\n"
  // This format string reads up to 128 characters before a '=' into one buffer
  // and then up to 128 characters after => and before the newline into
  // another.
  //
  // Example use (you need to figure out what "file", "buf", and "buf2" are:
  //    fscanf(file, "%128[^=]=>%128[^\n]\n", buf, buf2);
  //
  // Watch out for extra spaces in the strings you extract from the file!
  //
  // Hint 2: EOF is a constant value that is returned by fscanf when there's no
  // more data to read.  You can also use feof() to check if you are at the end
  // of a file (see the man page).
  //
  // Don't forget to close the file that you open!
  FILE* fd = fopen(filename, "r");
  if(fd == NULL){
    printf("ERROR: file not found");
    return 0;
  }
  char buf[512];
  char buf2[512];
  while(fscanf(fd, "%512[^=]=> %512[^\n]\n", buf, buf2) != EOF){
    buf[strlen(buf)-1] = '\0';
    buf2[strlen(buf2)] = '\0';
    do_add_entry(db, buf, buf2);
  }
}

/**
 * Helper function for reading a line of input into dest.
 *
 * @param dest: the character buffer (array) where the line should be stored.
 * @param maxlen: the maximum capacity of the buffer.
 * @param fd: the file to read (or stdin)
 * @returns the length of the line read in (minus the newline character).
 */
int
getALine(char* dest, int maxlen, FILE* fd)
{
  //TODO: implement this. 
  // Use fgets to read some data into dest from fd.
  // Before returning, you should replace newline character with a
  // null character
  fgets(dest, maxlen, fd);
  dest[strlen(dest)-1] = '\0';
  return strlen(dest);
}

