#include <stdio.h>
#include <stdlib.h>
#include "hash_table.h"
#include "prime.h"

int main() {
    // Create a new hash table
    ht_hash_table *ht = ht_new();

    // Insert key-value pairs
    ht_insert(ht, "name", "Alice");
    ht_insert(ht, "age", "25");
    ht_insert(ht, "city", "New York");

    // Search for values using keys
    printf("Name: %s\n", ht_search(ht, "name"));  // Output: Alice
    printf("Age: %s\n", ht_search(ht, "age"));    // Output: 25
    printf("City: %s\n", ht_search(ht, "city"));  // Output: New York

    // Delete a key-value pair
    ht_delete(ht, "city");

    // Attempt to search for the deleted key
    if (ht_search(ht, "city") == NULL) {
        printf("City entry has been deleted.\n");
    }

    // Delete the entire hash table
    ht_del_hash_table(ht);

    return 0;
}

