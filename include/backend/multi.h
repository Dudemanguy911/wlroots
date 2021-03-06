#ifndef BACKEND_MULTI_H
#define BACKEND_MULTI_H

#include <wlr/backend/interface.h>
#include <wlr/backend/multi.h>
#include <wlr/backend/session.h>
#include <wayland-util.h>

struct wlr_multi_backend {
	struct wlr_backend backend;

	struct wl_list backends;

	struct wl_listener display_destroy;

	struct {
		struct wl_signal backend_add;
		struct wl_signal backend_remove;
	} events;
};

#endif
