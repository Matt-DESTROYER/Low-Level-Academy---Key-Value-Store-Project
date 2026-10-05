#include "kv.h"

#include <stddef.h>
#include <stdlib.h>

kv_t* kv_init(size_t capacity) {
	kv_t* db = (kv_t*)malloc(sizeof(kv_t));
	if (db == NULL)
		return NULL;
	db->entries = NULL;
	db->capacity = capacity;
	db->count = 0;

	db->entries = (kv_entry_t*)malloc(sizeof(kv_entry_t) * capacity);
	if (db->entries == NULL)
		return NULL;

	return db;
}

int kv_put(kv_t* db, const char* key, const char* value) {
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
}
