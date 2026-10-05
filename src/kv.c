#include "kv_store.h"

#include <stddef.h>
#include <stdlib.h>

kv_t *kv_init(size_t capacity) {
	kv_t kv = (kv_t){
		.entries = NULL,
		.capacity = capacity,
		.count = 0
	};

	kv.entries = (kv_entry_t*)malloc(sizeof(kv_entry_t) * capacity);
	if (kv.entries == NULL)
		return NULL;

	return kv;
}

int kv_put(kv_t *db, const char *key, const char *value) {}

char *kv_get(kv_t *db, const char *key) {}

int kv_delete(kv_t *db, const char *key) {}

void kv_free(kv_t *db) {}
