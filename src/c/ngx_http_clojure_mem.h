/*
 *  Copyright (C) Zhang,Yuexiang (xfeep)
 */

#ifndef NGX_HTTP_CLOJURE_MEM_H_
#define NGX_HTTP_CLOJURE_MEM_H_

#include <ngx_http.h>

#define NGX_HTTP_CLOJURE_MEM_IDX_START 0

/*index for size of ngx_uint_t */
#define NGX_HTTP_CLOJURE_UINT_SIZE_IDX 0
#define NGX_HTTP_CLOJURE_UINT_SIZE sizeof(ngx_uint_t)

#define NGX_HTTP_CLOJURE_PTR_SIZE_IDX 1
#define NGX_HTTP_CLOJURE_PTR_SIZE sizeof(void *)

#define NGX_HTTP_CLOJURE_SIZET_SIZE_IDX 2
#define NGX_HTTP_CLOJURE_SIZET_SIZE sizeof(size_t)

#define NGX_HTTP_CLOJURE_OFFT_SIZE_IDX 3
#define NGX_HTTP_CLOJURE_OFFT_SIZE sizeof(off_t)

/*index for size of ngx_str_t */
#define NGX_HTTP_CLOJURE_STR_SIZE_IDX 8
#define NGX_HTTP_CLOJURE_STR_SIZE sizeof(ngx_str_t)
/*field offset index for ngx_str_t*/
#define NGX_HTTP_CLOJURE_STR_LEN_IDX 9
#define NGX_HTTP_CLOJURE_STR_LEN_OFFSET offsetof(ngx_str_t,len)
#define NGX_HTTP_CLOJURE_STR_DATA_IDX 10
#define NGX_HTTP_CLOJURE_STR_DATA_OFFSET offsetof(ngx_str_t,data)


/*index for size of ngx_table_elt_t */
#define NGX_HTTP_CLOJURE_TELT_SIZE_IDX 11
#define NGX_HTTP_CLOJURE_TELT_SIZE sizeof(ngx_table_elt_t)
/*field offset index for ngx_table_elt_t*/
#define NGX_HTTP_CLOJURE_TELT_HASH_IDX 12
#define NGX_HTTP_CLOJURE_TELT_HASH_OFFSET offsetof(ngx_table_elt_t,hash)
#define NGX_HTTP_CLOJURE_TELT_KEY_IDX 13
#define NGX_HTTP_CLOJURE_TELT_KEY_OFFSET offsetof(ngx_table_elt_t,key)
#define NGX_HTTP_CLOJURE_TELT_VALUE_IDX 14
#define NGX_HTTP_CLOJURE_TELT_VALUE_OFFSET offsetof(ngx_table_elt_t,value)
#define NGX_HTTP_CLOJURE_TELT_LOWCASE_KEY_IDX 15
#define NGX_HTTP_CLOJURE_TELT_LOWCASE_KEY_OFFSET offsetof(ngx_table_elt_t,lowcase_key)

#define NGX_HTTP_CLOJURE_CHAIN_SIZE_IDX 16
#define NGX_HTTP_CLOJURE_CHAIN_SIZE sizeof(ngx_chain_t)
#define NGX_HTTP_CLOJURE_CHAIN_BUF_IDX  17
#define NGX_HTTP_CLOJURE_CHAIN_BUF_OFFSET  offsetof(ngx_chain_t, buf)
#define NGX_HTTP_CLOJURE_CHAIN_NEXT_IDX  18
#define NGX_HTTP_CLOJURE_CHAIN_NEXT_OFFSET  offsetof(ngx_chain_t, next)


extern ngx_conf_t *ngx_http_clojure_global_ngx_conf;

#define NGX_HTTP_CLOJURE_VARIABLE_SIZE_IDX 19
#define NGX_HTTP_CLOJURE_VARIABLE_SIZE sizeof(ngx_http_variable_t)
#define NGX_HTTP_CLOJURE_CORE_VARIABLES_ADDR_IDX 20
#define NGX_HTTP_CLOJURE_CORE_VARIABLES_ADDR (ngx_uint_t)ngx_http_clojure_core_variables_names
#define NGX_HTTP_CLOJURE_CORE_VARIABLES_LEN_IDX 21
#define NGX_HTTP_CLOJURE_CORE_VARIABLES_LEN (sizeof(ngx_http_clojure_core_variables_names)/ sizeof (ngx_str_t))

/*index for size of ngx_http_request_t */
#define NGX_HTTP_CLOJURE_REQ_SIZE_IDX 32
#define NGX_HTTP_CLOJURE_REQ_SIZE sizeof(ngx_http_request_t)
/*field offset index for ngx_http_request_t*/
#define NGX_HTTP_CLOJURE_REQ_METHOD_IDX  33
#define NGX_HTTP_CLOJURE_REQ_METHOD_OFFSET offsetof(ngx_http_request_t, method)
#define NGX_HTTP_CLOJURE_REQ_URI_IDX  34
#define NGX_HTTP_CLOJURE_REQ_URI_OFFSET offsetof(ngx_http_request_t, uri)
#define NGX_HTTP_CLOJURE_REQ_ARGS_IDX  35
#define NGX_HTTP_CLOJURE_REQ_ARGS_OFFSET offsetof(ngx_http_request_t, args)
#define NGX_HTTP_CLOJURE_REQ_HEADERS_IN_IDX  36
#define NGX_HTTP_CLOJURE_REQ_HEADERS_IN_OFFSET offsetof(ngx_http_request_t, headers_in)
#define NGX_HTTP_CLOJURE_REQ_POOL_IDX 37
#define NGX_HTTP_CLOJURE_REQ_POOL_OFFSET offsetof(ngx_http_request_t, pool)
#define NGX_HTTP_CLOJURE_REQ_HEADERS_OUT_IDX  38
#define NGX_HTTP_CLOJURE_REQ_HEADERS_OUT_OFFSET offsetof(ngx_http_request_t, headers_out)

/*index for size of ngx_http_headers_in_t */
#define NGX_HTTP_CLOJURE_HEADERSI_SIZE_IDX 64
#define NGX_HTTP_CLOJURE_HEADERSI_SIZE sizeof(ngx_http_headers_in_t)
/*field offset index for ngx_http_headers_in_t*/
#define NGX_HTTP_CLOJURE_HEADERSI_HOST_IDX  65
#define NGX_HTTP_CLOJURE_HEADERSI_HOST_OFFSET offsetof(ngx_http_headers_in_t, host)
#define NGX_HTTP_CLOJURE_HEADERSI_CONNECTION_IDX  66
#define NGX_HTTP_CLOJURE_HEADERSI_CONNECTION_OFFSET offsetof(ngx_http_headers_in_t, connection)
#define NGX_HTTP_CLOJURE_HEADERSI_IF_MODIFIED_SINCE_IDX  67
#define NGX_HTTP_CLOJURE_HEADERSI_IF_MODIFIED_SINCE_OFFSET offsetof(ngx_http_headers_in_t, if_modified_since)
#define NGX_HTTP_CLOJURE_HEADERSI_IF_UNMODIFIED_SINCE_IDX  68
#define NGX_HTTP_CLOJURE_HEADERSI_IF_UNMODIFIED_SINCE_OFFSET offsetof(ngx_http_headers_in_t, if_unmodified_since)
#define NGX_HTTP_CLOJURE_HEADERSI_USER_AGENT_IDX  69
#define NGX_HTTP_CLOJURE_HEADERSI_USER_AGENT_OFFSET offsetof(ngx_http_headers_in_t, user_agent)
#define NGX_HTTP_CLOJURE_HEADERSI_REFERER_IDX  70
#define NGX_HTTP_CLOJURE_HEADERSI_REFERER_OFFSET offsetof(ngx_http_headers_in_t, referer)
#define NGX_HTTP_CLOJURE_HEADERSI_CONTENT_LENGTH_IDX  71
#define NGX_HTTP_CLOJURE_HEADERSI_CONTENT_LENGTH_OFFSET offsetof(ngx_http_headers_in_t, content_length)
#define NGX_HTTP_CLOJURE_HEADERSI_CONTENT_TYPE_IDX  72
#define NGX_HTTP_CLOJURE_HEADERSI_CONTENT_TYPE_OFFSET offsetof(ngx_http_headers_in_t, content_type)
#define NGX_HTTP_CLOJURE_HEADERSI_RANGE_IDX  73
#define NGX_HTTP_CLOJURE_HEADERSI_RANGE_OFFSET offsetof(ngx_http_headers_in_t, range)
#define NGX_HTTP_CLOJURE_HEADERSI_IF_RANGE_IDX  74
#define NGX_HTTP_CLOJURE_HEADERSI_IF_RANGE_OFFSET offsetof(ngx_http_headers_in_t, if_range)
#define NGX_HTTP_CLOJURE_HEADERSI_TRANSFER_ENCODING_IDX  75
#define NGX_HTTP_CLOJURE_HEADERSI_TRANSFER_ENCODING_OFFSET offsetof(ngx_http_headers_in_t, transfer_encoding)
#define NGX_HTTP_CLOJURE_HEADERSI_EXPECT_IDX  76
#define NGX_HTTP_CLOJURE_HEADERSI_EXPECT_OFFSET offsetof(ngx_http_headers_in_t, expect)

#if (NGX_HTTP_GZIP)
#define NGX_HTTP_CLOJURE_HEADERSI_ACCEPT_ENCODING_IDX  77
#define NGX_HTTP_CLOJURE_HEADERSI_ACCEPT_ENCODING_OFFSET offsetof(ngx_http_headers_in_t, accept_encoding)
#define NGX_HTTP_CLOJURE_HEADERSI_VIA_IDX  78
#define NGX_HTTP_CLOJURE_HEADERSI_VIA_OFFSET offsetof(ngx_http_headers_in_t, via)
#endif

#define NGX_HTTP_CLOJURE_HEADERSI_AUTHORIZATION_IDX  79
#define NGX_HTTP_CLOJURE_HEADERSI_AUTHORIZATION_OFFSET offsetof(ngx_http_headers_in_t, authorization)
#define NGX_HTTP_CLOJURE_HEADERSI_KEEP_ALIVE_IDX  80
#define NGX_HTTP_CLOJURE_HEADERSI_KEEP_ALIVE_OFFSET offsetof(ngx_http_headers_in_t, keep_alive)

#if (NGX_HTTP_PROXY || NGX_HTTP_REALIP || NGX_HTTP_GEO)
#define NGX_HTTP_CLOJURE_HEADERSI_X_FORWARDED_FOR_IDX  81
#define NGX_HTTP_CLOJURE_HEADERSI_X_FORWARDED_FOR_OFFSET offsetof(ngx_http_headers_in_t, x_forwarded_for)
#endif

#if (NGX_HTTP_REALIP)
#define NGX_HTTP_CLOJURE_HEADERSI_X_REAL_IP_IDX  82
#define NGX_HTTP_CLOJURE_HEADERSI_X_REAL_IP_OFFSET offsetof(ngx_http_headers_in_t, x_real_ip)
#endif

#if (NGX_HTTP_HEADERS)
#define NGX_HTTP_CLOJURE_HEADERSI_ACCEPT_IDX  83
#define NGX_HTTP_CLOJURE_HEADERSI_ACCEPT_OFFSET offsetof(ngx_http_headers_in_t, accept)
#define NGX_HTTP_CLOJURE_HEADERSI_ACCEPT_LANGUAGE_IDX  84
#define NGX_HTTP_CLOJURE_HEADERSI_ACCEPT_LANGUAGE_OFFSET offsetof(ngx_http_headers_in_t, accept_language)
#endif

#if (NGX_HTTP_DAV)
#define NGX_HTTP_CLOJURE_HEADERSI_DEPTH_IDX  85
#define NGX_HTTP_CLOJURE_HEADERSI_DEPTH_OFFSET offsetof(ngx_http_headers_in_t, depth)
#define NGX_HTTP_CLOJURE_HEADERSI_DESTINATION_IDX  86
#define NGX_HTTP_CLOJURE_HEADERSI_DESTINATION_OFFSET offsetof(ngx_http_headers_in_t, destination)
#define NGX_HTTP_CLOJURE_HEADERSI_OVERWRITE_IDX  87
#define NGX_HTTP_CLOJURE_HEADERSI_OVERWRITE_OFFSET offsetof(ngx_http_headers_in_t, overwrite)
#define NGX_HTTP_CLOJURE_HEADERSI_DATE_IDX  88
#define NGX_HTTP_CLOJURE_HEADERSI_DATE_OFFSET offsetof(ngx_http_headers_in_t, date)
#endif

#define NGX_HTTP_CLOJURE_HEADERSI_USER_IDX  89
#define NGX_HTTP_CLOJURE_HEADERSI_USER_OFFSET offsetof(ngx_http_headers_in_t, user)
#define NGX_HTTP_CLOJURE_HEADERSI_PASSWD_IDX  90
#define NGX_HTTP_CLOJURE_HEADERSI_PASSWD_OFFSET offsetof(ngx_http_headers_in_t, passwd)
#define NGX_HTTP_CLOJURE_HEADERSI_COOKIE_IDX  91
#define NGX_HTTP_CLOJURE_HEADERSI_COOKIE_OFFSET offsetof(ngx_http_headers_in_t, cookies)
#define NGX_HTTP_CLOJURE_HEADERSI_SERVER_IDX  92
#define NGX_HTTP_CLOJURE_HEADERSI_SERVER_OFFSET offsetof(ngx_http_headers_in_t, server)
#define NGX_HTTP_CLOJURE_HEADERSI_CONTENT_LENGTH_N_IDX  93
#define NGX_HTTP_CLOJURE_HEADERSI_CONTENT_LENGTH_N_OFFSET offsetof(ngx_http_headers_in_t, content_length_n)
#define NGX_HTTP_CLOJURE_HEADERSI_KEEP_ALIVE_N_IDX  94
#define NGX_HTTP_CLOJURE_HEADERSI_KEEP_ALIVE_N_OFFSET offsetof(ngx_http_headers_in_t, keep_alive_n)
#define NGX_HTTP_CLOJURE_HEADERSI_HEADERS_IDX  95
#define NGX_HTTP_CLOJURE_HEADERSI_HEADERS_OFFSET offsetof(ngx_http_headers_in_t, headers)


/*index for size of ngx_http_headers_out_t */
#define NGX_HTTP_CLOJURE_HEADERSO_SIZE_IDX 128
#define NGX_HTTP_CLOJURE_HEADERSO_SIZE sizeof(ngx_http_headers_out_t)
/*field offset index for ngx_http_headers_out_t*/
#define NGX_HTTP_CLOJURE_HEADERSO_STATUS_IDX  129
#define NGX_HTTP_CLOJURE_HEADERSO_STATUS_OFFSET offsetof(ngx_http_headers_out_t, status)
#define NGX_HTTP_CLOJURE_HEADERSO_STATUS_LINE_IDX  130
#define NGX_HTTP_CLOJURE_HEADERSO_STATUS_LINE_OFFSET offsetof(ngx_http_headers_out_t, status_line)
#define NGX_HTTP_CLOJURE_HEADERSO_SERVER_IDX  131
#define NGX_HTTP_CLOJURE_HEADERSO_SERVER_OFFSET offsetof(ngx_http_headers_out_t, server)
#define NGX_HTTP_CLOJURE_HEADERSO_DATE_IDX  132
#define NGX_HTTP_CLOJURE_HEADERSO_DATE_OFFSET offsetof(ngx_http_headers_out_t, date)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_LENGTH_IDX  133
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_LENGTH_OFFSET offsetof(ngx_http_headers_out_t, content_length)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_ENCODING_IDX  134
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_ENCODING_OFFSET offsetof(ngx_http_headers_out_t, content_encoding)
#define NGX_HTTP_CLOJURE_HEADERSO_LOCATION_IDX  135
#define NGX_HTTP_CLOJURE_HEADERSO_LOCATION_OFFSET offsetof(ngx_http_headers_out_t, location)
#define NGX_HTTP_CLOJURE_HEADERSO_REFRESH_IDX  136
#define NGX_HTTP_CLOJURE_HEADERSO_REFRESH_OFFSET offsetof(ngx_http_headers_out_t, refresh)
#define NGX_HTTP_CLOJURE_HEADERSO_LAST_MODIFIED_IDX  137
#define NGX_HTTP_CLOJURE_HEADERSO_LAST_MODIFIED_OFFSET offsetof(ngx_http_headers_out_t, last_modified)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_RANGE_IDX  138
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_RANGE_OFFSET offsetof(ngx_http_headers_out_t, content_range)
#define NGX_HTTP_CLOJURE_HEADERSO_ACCEPT_RANGES_IDX  139
#define NGX_HTTP_CLOJURE_HEADERSO_ACCEPT_RANGES_OFFSET offsetof(ngx_http_headers_out_t, accept_ranges)
#define NGX_HTTP_CLOJURE_HEADERSO_WWW_AUTHENTICATE_IDX  140
#define NGX_HTTP_CLOJURE_HEADERSO_WWW_AUTHENTICATE_OFFSET offsetof(ngx_http_headers_out_t, www_authenticate)
#define NGX_HTTP_CLOJURE_HEADERSO_EXPIRES_IDX  141
#define NGX_HTTP_CLOJURE_HEADERSO_EXPIRES_OFFSET offsetof(ngx_http_headers_out_t, expires)
#define NGX_HTTP_CLOJURE_HEADERSO_ETAG_IDX  142
#define NGX_HTTP_CLOJURE_HEADERSO_ETAG_OFFSET offsetof(ngx_http_headers_out_t, etag)
#define NGX_HTTP_CLOJURE_HEADERSO_OVERRIDE_CHARSET_IDX  143
#define NGX_HTTP_CLOJURE_HEADERSO_OVERRIDE_CHARSET_OFFSET offsetof(ngx_http_headers_out_t, override_charset)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_LEN_IDX  144
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_LEN_OFFSET offsetof(ngx_http_headers_out_t, content_type_len)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_IDX  145
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_OFFSET offsetof(ngx_http_headers_out_t, content_type)
#define NGX_HTTP_CLOJURE_HEADERSO_CHARSET_IDX  146
#define NGX_HTTP_CLOJURE_HEADERSO_CHARSET_OFFSET offsetof(ngx_http_headers_out_t, charset)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_LOWCASE_IDX  147
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_LOWCASE_OFFSET offsetof(ngx_http_headers_out_t, content_type_lowcase)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_HASH_IDX  148
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_TYPE_HASH_OFFSET offsetof(ngx_http_headers_out_t, content_type_hash)
#define NGX_HTTP_CLOJURE_HEADERSO_CACHE_CONTROL_IDX  149
#define NGX_HTTP_CLOJURE_HEADERSO_CACHE_CONTROL_OFFSET offsetof(ngx_http_headers_out_t, cache_control)
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_LENGTH_N_IDX  150
#define NGX_HTTP_CLOJURE_HEADERSO_CONTENT_LENGTH_N_OFFSET offsetof(ngx_http_headers_out_t, content_length_n)
#define NGX_HTTP_CLOJURE_HEADERSO_DATE_TIME_IDX  151
#define NGX_HTTP_CLOJURE_HEADERSO_DATE_TIME_OFFSET offsetof(ngx_http_headers_out_t, cache_control)
#define NGX_HTTP_CLOJURE_HEADERSO_LAST_MODIFIED_TIME_IDX  152
#define NGX_HTTP_CLOJURE_HEADERSO_LAST_MODIFIED_TIME_OFFSET offsetof(ngx_http_headers_out_t, cache_control)
#define NGX_HTTP_CLOJURE_HEADERSO_HEADERS_IDX  153
#define NGX_HTTP_CLOJURE_HEADERSO_HEADERS_OFFSET offsetof(ngx_http_headers_out_t, headers)



#define NGX_HTTP_CLOJURE_MEM_IDX_END 255


int ngx_http_clojure_check_memory_util();

/*
 *
 */
int ngx_http_clojure_init_memory_util();

int ngx_http_clojure_register_script(u_char **script, size_t len, ngx_int_t *cid);

int ngx_http_clojure_eval(int handle, void *r);

#endif /* NGX_HTTP_CLOJURE_MEM_H_ */