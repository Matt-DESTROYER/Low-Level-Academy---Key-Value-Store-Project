#include "kv.h"

#include <stddef.h>
#include <stdlib.h>

size_t hash(char* val, int capacity) {
	size_t hash = 0x13371337deadbeef;
	while (*val) {
		hash ^= *val;
		hash <<= 8;
		hash += *val;

		val++;
	}

	return hash % capacity;
}

kv_t* kv_init(size_t capacity) {
	kv_t* db = (kv_t*)malloc(sizeof(kv_t));
	if (db == NULL)
		return NULL;

	db->entries = NULL;
	db->capacity = capacity;
	db->count = 0;

	db->entries = (kv_entry_t*)calloc(capacity, sizeof(kv_entry_t));
	if (db->entries == NULL) {
		free(db);
		return NULL;
	}

	return db;
}

int kv_put(kv_t* db, const char* key, const char* value) {
	if (db == NULL || key == NULL || value == NULL)
		return -1;

	size_t index = hash(key, db->capacity);
	
	// scan from here till capacity for key match and update
	// or empty/tombstone value and inserty + increment count

	return 0;
}

char* kv_get(kv_t* db, const char* key) {
	return NULL;
}

int kv_delete(kv_t* db, const char* key) {
	return 0;
}

void kv_free(kv_t* db) {
	free(db->entries);
	free(db);
}
