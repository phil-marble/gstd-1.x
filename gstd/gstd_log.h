/*
 * GStreamer Daemon - Gst Launch under steroids
 * Copyright (c) 2015-2017 Ridgerun, LLC (http://www.ridgerun.com)
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __GSTD_LOG_H__
#define __GSTD_LOG_H__

#include <gst/gst.h>

void gstd_log_init ();
void gstd_log_deinit ();

const gchar *gstd_log_get_gstd ();
const gchar *gstd_log_get_gst ();

/* A default category for every object not defining its own */
GST_DEBUG_CATEGORY_EXTERN (gstd_debug);
#define GST_CAT_DEFAULT gstd_debug

#endif // __GSTD_LOG_H__
