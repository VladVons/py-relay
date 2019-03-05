/* Generated code for Python module 'MySQLdb.connections'
 * created by Nuitka version 0.6.2
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_MySQLdb$connections" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_MySQLdb$connections;
PyDictObject *moduledict_MySQLdb$connections;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_Cursor;
static PyObject *const_str_plain_charset;
static PyObject *const_tuple_str_plain_CLIENT_str_plain_FIELD_TYPE_tuple;
static PyObject *const_str_plain_cursorclass;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_warning_count;
static PyObject *const_tuple_str_plain_self_str_plain_on_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_t_tuple;
static PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain__mysql;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_tuple_type_list_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_r_str_plain_warnings_tuple;
static PyObject *const_str_plain_default_cursor;
static PyObject *const_str_digest_855697e5a9c181770e960226dfe94f0a;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_digest_6e1b9039a1198642c91d743e9550d006;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_BEGIN;
extern PyObject *const_str_plain_IntegrityError;
static PyObject *const_str_digest_90be6369e129dbd04b3a853674afd0e2;
static PyObject *const_tuple_str_plain_password_tuple;
extern PyObject *const_str_plain_encode;
static PyObject *const_tuple_str_plain_conversions_str_plain__bytes_or_str_tuple;
static PyObject *const_tuple_str_plain_unicode_str_plain_PY2_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_bs_str_plain_x_tuple;
static PyObject *const_str_plain_encoders;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_1027c9cda199276403fc3ac0035b1bd5;
static PyObject *const_str_plain_get_autocommit;
static PyObject *const_str_plain_begin;
extern PyObject *const_str_digest_e16b0126d837ce7ad3b9f1fbd3704965;
static PyObject *const_str_plain_ascii;
static PyObject *const_tuple_str_plain_BEGIN_tuple;
extern PyObject *const_str_plain_CLIENT;
static PyObject *const_str_digest_f9a1d0cf9855080f511a5f552cc351c4;
extern PyObject *const_str_plain_VAR_STRING;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_ea8f0dbd1013a2247a6866ea93cbed10;
static PyObject *const_str_plain_numeric_part;
extern PyObject *const_str_plain_TRANSACTIONS;
extern PyObject *const_str_plain_re;
static PyObject *const_str_digest_b128e84012a0ed9724b86ba88b6e5906;
extern PyObject *const_str_plain_STRING;
static PyObject *const_tuple_str_plain_sql_mode_str_empty_tuple;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_conv;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_str_plain_self_str_plain_cursorclass_tuple;
extern PyObject *const_str_digest_05cd2a7a408dc6619e97d739b1ced7db;
static PyObject *const_tuple_str_plain_self_str_plain_charset_str_plain_py_charset_tuple;
extern PyObject *const_str_plain_ProgrammingError;
static PyObject *const_str_digest_659fcadd0cd0fd4c0fd90be3bd70d89c;
extern PyObject *const_str_plain_int;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_str_digest_51cafa63df0dba009586a31c534cfea1;
static PyObject *const_str_plain__tuple_literal;
static PyObject *const_str_plain_client_flag;
static PyObject *const_tuple_str_digest_582b09a86dd9d12e29ae74f6d5dcab13_tuple;
extern PyObject *const_str_plain_map;
static PyObject *const_str_plain_re_numeric_part;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_DataError;
extern PyObject *const_str_plain_OperationalError;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_TINY_BLOB;
static PyObject *const_tuple_str_plain_self_str_plain_query_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_LONG_BLOB;
extern PyObject *const_str_plain_encoding;
static PyObject *const_tuple_str_plain_database_tuple;
static PyObject *const_str_plain_unicode_literal;
static PyObject *const_str_digest_5b127335f99076ae6aca5fe46563ba08;
extern PyObject *const_str_dot;
static PyObject *const_str_digest_f8f69981ab93cb841c815b9efeb4f201;
static PyObject *const_str_plain_set_sql_mode;
extern PyObject *const_str_plain_db;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_get_server_info;
static PyObject *const_str_plain__bytes_literal;
static PyObject *const_str_plain_autocommit;
extern PyObject *const_str_plain_InterfaceError;
static PyObject *const_str_plain_binary_prefix;
extern PyObject *const_str_plain_group;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_MULTI_RESULTS;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_ae17179d9e968790c4b9d960e4d06239;
static PyObject *const_str_plain_utf8;
static PyObject *const_str_plain_password;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_InternalError;
extern PyObject *const_str_digest_2c46ee64b2d1a9ee629fb8b94f2a09ca;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain__bytes_or_str;
static PyObject *const_tuple_c34144d06a51d55063ddd5300a8e83c2_tuple;
extern PyObject *const_str_plain_MEDIUM_BLOB;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_bytearray;
static PyObject *const_tuple_str_plain_s_str_plain_m_tuple;
static PyObject *const_str_plain_character_set_name;
extern PyObject *const_str_plain_VARCHAR;
extern PyObject *const_str_plain_string_literal;
extern PyObject *const_str_plain_messages;
static PyObject *const_tuple_str_plain_self_str_plain_info_tuple;
static PyObject *const_tuple_str_plain_client_flag_int_0_tuple;
static PyObject *const_str_plain_cursors;
static PyObject *const_str_plain_weakref;
static PyObject *const_tuple_str_plain_binary_prefix_false_tuple;
static PyObject *const_tuple_str_plain_cursors_str_plain__mysql_tuple;
static PyObject *const_str_plain__binary_prefix;
static PyObject *const_tuple_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4_tuple;
extern PyObject *const_str_plain_JSON;
static PyObject *const_tuple_str_plain_charset_str_empty_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_use_unicode;
extern PyObject *const_str_plain_cursor;
extern PyObject *const_str_plain_literal;
static PyObject *const_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4;
extern PyObject *const_tuple_type_str_type_bytearray_tuple;
extern PyObject *const_str_plain_MULTI_STATEMENTS;
extern PyObject *const_str_plain_NotSupportedError;
static PyObject *const_tuple_str_digest_c34c1ea87f58a2801f710f4a0355fd91_tuple;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_BLOB;
extern PyObject *const_str_plain_o;
static PyObject *const_str_plain_server_capabilities;
extern PyObject *const_str_plain_conversions;
static PyObject *const_str_digest_55ab9cb309d3461eaa47644fe092db73;
static PyObject *const_str_plain__binary;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_set_character_set;
static PyObject *const_tuple_str_plain_autocommit_false_tuple;
extern PyObject *const_str_plain_t;
static PyObject *const_str_plain_u;
static PyObject *const_str_plain__transactional;
static PyObject *const_str_plain__server_version;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_match;
static PyObject *const_str_plain_bs;
static PyObject *const_str_plain_utf8mb4;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_database;
extern PyObject *const_str_plain_escape;
static PyObject *const_str_digest_d91a8522b823a6f8ef38dbb8626da564;
static PyObject *const_str_digest_910b47dc8dd817b6e36365f889ff93ac;
static PyObject *const_str_plain_converter;
extern PyObject *const_str_plain_Error;
static PyObject *const_tuple_int_pos_4_int_pos_1_tuple;
static PyObject *const_str_plain_get_client_info;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_fetch_row;
static PyObject *const_str_plain_on;
static PyObject *const_str_digest_f8030a9889ab33c1d1b872cff5b8a620;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_utf8mb3;
static PyObject *const_str_digest_8f04d2c1e11f0c07c93c40e1736aa360;
static PyObject *const_str_plain_passwd;
static PyObject *const_tuple_str_plain_self_str_plain_o_str_plain_s_tuple;
static PyObject *const_str_plain_dummy;
static PyObject *const_str_digest_fdf226b08f724ba31038a39ab6fa7ffb;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
static PyObject *const_str_digest_d2dd7bf1dd924b08df033b44dccc9c07;
static PyObject *const_str_digest_c34c1ea87f58a2801f710f4a0355fd91;
static PyObject *const_str_plain_sql_mode;
static PyObject *const_str_digest_582b09a86dd9d12e29ae74f6d5dcab13;
static PyObject *const_tuple_str_plain_self_str_plain_sql_mode_tuple;
static PyObject *const_tuple_str_digest_855697e5a9c181770e960226dfe94f0a_tuple;
static PyObject *const_tuple_str_plain_u_str_plain_dummy_str_plain_db_tuple;
extern PyObject *const_str_plain_Connection;
static PyObject *const_tuple_str_plain_utf8mb4_str_plain_utf8mb3_tuple;
static PyObject *const_str_plain_py_charset;
extern PyObject *const_str_plain_MySQLdb;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_store_result;
extern PyObject *const_str_plain_PY2;
extern PyObject *const_str_plain_DatabaseError;
static PyObject *const_tuple_int_pos_5_int_0_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain_show_warnings;
extern PyObject *const_str_plain_FIELD_TYPE;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_plain_proxy_tuple;
extern PyObject *const_tuple_cf8d71264ab2fa0bf4b6fd51a92c19f8_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_copy = UNSTREAM_STRING( &constant_bin[ 25636 ], 4, 1 );
    const_str_plain_charset = UNSTREAM_STRING( &constant_bin[ 25640 ], 7, 1 );
    const_tuple_str_plain_CLIENT_str_plain_FIELD_TYPE_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CLIENT_str_plain_FIELD_TYPE_tuple, 0, const_str_plain_CLIENT ); Py_INCREF( const_str_plain_CLIENT );
    PyTuple_SET_ITEM( const_tuple_str_plain_CLIENT_str_plain_FIELD_TYPE_tuple, 1, const_str_plain_FIELD_TYPE ); Py_INCREF( const_str_plain_FIELD_TYPE );
    const_str_plain_cursorclass = UNSTREAM_STRING( &constant_bin[ 25647 ], 11, 1 );
    const_str_plain_warning_count = UNSTREAM_STRING( &constant_bin[ 25658 ], 13, 1 );
    const_tuple_str_plain_self_str_plain_on_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_on_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_on = UNSTREAM_STRING( &constant_bin[ 150 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_on_tuple, 1, const_str_plain_on ); Py_INCREF( const_str_plain_on );
    const_tuple_str_plain_self_str_plain_t_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_proxy = UNSTREAM_STRING( &constant_bin[ 25671 ], 5, 1 );
    const_tuple_str_plain_self_str_plain_r_str_plain_warnings_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_warnings_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_warnings_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_warnings = UNSTREAM_STRING( &constant_bin[ 23995 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_warnings_tuple, 2, const_str_plain_warnings ); Py_INCREF( const_str_plain_warnings );
    const_str_plain_default_cursor = UNSTREAM_STRING( &constant_bin[ 25676 ], 14, 1 );
    const_str_digest_855697e5a9c181770e960226dfe94f0a = UNSTREAM_STRING( &constant_bin[ 25690 ], 13, 0 );
    const_str_plain_BEGIN = UNSTREAM_STRING( &constant_bin[ 25703 ], 5, 1 );
    const_str_digest_90be6369e129dbd04b3a853674afd0e2 = UNSTREAM_STRING( &constant_bin[ 25708 ], 4, 0 );
    const_tuple_str_plain_password_tuple = PyTuple_New( 1 );
    const_str_plain_password = UNSTREAM_STRING( &constant_bin[ 25712 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_password_tuple, 0, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_tuple_str_plain_conversions_str_plain__bytes_or_str_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_conversions_str_plain__bytes_or_str_tuple, 0, const_str_plain_conversions ); Py_INCREF( const_str_plain_conversions );
    PyTuple_SET_ITEM( const_tuple_str_plain_conversions_str_plain__bytes_or_str_tuple, 1, const_str_plain__bytes_or_str ); Py_INCREF( const_str_plain__bytes_or_str );
    const_tuple_str_plain_unicode_str_plain_PY2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unicode_str_plain_PY2_tuple, 0, const_str_plain_unicode ); Py_INCREF( const_str_plain_unicode );
    PyTuple_SET_ITEM( const_tuple_str_plain_unicode_str_plain_PY2_tuple, 1, const_str_plain_PY2 ); Py_INCREF( const_str_plain_PY2 );
    const_tuple_str_plain_self_str_plain_bs_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bs_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_bs = UNSTREAM_STRING( &constant_bin[ 11069 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bs_str_plain_x_tuple, 1, const_str_plain_bs ); Py_INCREF( const_str_plain_bs );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bs_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_encoders = UNSTREAM_STRING( &constant_bin[ 25720 ], 8, 1 );
    const_str_digest_1027c9cda199276403fc3ac0035b1bd5 = UNSTREAM_STRING( &constant_bin[ 25728 ], 272, 0 );
    const_str_plain_get_autocommit = UNSTREAM_STRING( &constant_bin[ 26000 ], 14, 1 );
    const_str_plain_begin = UNSTREAM_STRING( &constant_bin[ 26014 ], 5, 1 );
    const_str_plain_ascii = UNSTREAM_STRING( &constant_bin[ 26019 ], 5, 1 );
    const_tuple_str_plain_BEGIN_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BEGIN_tuple, 0, const_str_plain_BEGIN ); Py_INCREF( const_str_plain_BEGIN );
    const_str_digest_f9a1d0cf9855080f511a5f552cc351c4 = UNSTREAM_STRING( &constant_bin[ 26024 ], 12, 0 );
    const_str_digest_ea8f0dbd1013a2247a6866ea93cbed10 = UNSTREAM_STRING( &constant_bin[ 26036 ], 154, 0 );
    const_str_plain_numeric_part = UNSTREAM_STRING( &constant_bin[ 26091 ], 12, 1 );
    const_str_digest_b128e84012a0ed9724b86ba88b6e5906 = UNSTREAM_STRING( &constant_bin[ 26190 ], 32, 0 );
    const_tuple_str_plain_sql_mode_str_empty_tuple = PyTuple_New( 2 );
    const_str_plain_sql_mode = UNSTREAM_STRING( &constant_bin[ 26222 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sql_mode_str_empty_tuple, 0, const_str_plain_sql_mode ); Py_INCREF( const_str_plain_sql_mode );
    PyTuple_SET_ITEM( const_tuple_str_plain_sql_mode_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_plain_conv = UNSTREAM_STRING( &constant_bin[ 3378 ], 4, 1 );
    const_tuple_str_plain_self_str_plain_cursorclass_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cursorclass_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cursorclass_tuple, 1, const_str_plain_cursorclass ); Py_INCREF( const_str_plain_cursorclass );
    const_tuple_str_plain_self_str_plain_charset_str_plain_py_charset_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_charset_str_plain_py_charset_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_charset_str_plain_py_charset_tuple, 1, const_str_plain_charset ); Py_INCREF( const_str_plain_charset );
    const_str_plain_py_charset = UNSTREAM_STRING( &constant_bin[ 26230 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_charset_str_plain_py_charset_tuple, 2, const_str_plain_py_charset ); Py_INCREF( const_str_plain_py_charset );
    const_str_digest_659fcadd0cd0fd4c0fd90be3bd70d89c = UNSTREAM_STRING( &constant_bin[ 26240 ], 82, 0 );
    const_str_plain__tuple_literal = UNSTREAM_STRING( &constant_bin[ 26322 ], 14, 1 );
    const_str_plain_client_flag = UNSTREAM_STRING( &constant_bin[ 26336 ], 11, 1 );
    const_tuple_str_digest_582b09a86dd9d12e29ae74f6d5dcab13_tuple = PyTuple_New( 1 );
    const_str_digest_582b09a86dd9d12e29ae74f6d5dcab13 = UNSTREAM_STRING( &constant_bin[ 26347 ], 33, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_582b09a86dd9d12e29ae74f6d5dcab13_tuple, 0, const_str_digest_582b09a86dd9d12e29ae74f6d5dcab13 ); Py_INCREF( const_str_digest_582b09a86dd9d12e29ae74f6d5dcab13 );
    const_str_plain_re_numeric_part = UNSTREAM_STRING( &constant_bin[ 26380 ], 15, 1 );
    const_tuple_str_plain_self_str_plain_query_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_query_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_query_tuple, 1, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    const_tuple_str_plain_database_tuple = PyTuple_New( 1 );
    const_str_plain_database = UNSTREAM_STRING( &constant_bin[ 16147 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_database_tuple, 0, const_str_plain_database ); Py_INCREF( const_str_plain_database );
    const_str_plain_unicode_literal = UNSTREAM_STRING( &constant_bin[ 26395 ], 15, 1 );
    const_str_digest_5b127335f99076ae6aca5fe46563ba08 = UNSTREAM_STRING( &constant_bin[ 26410 ], 112, 0 );
    const_str_digest_f8f69981ab93cb841c815b9efeb4f201 = UNSTREAM_STRING( &constant_bin[ 26522 ], 247, 0 );
    const_str_plain_set_sql_mode = UNSTREAM_STRING( &constant_bin[ 26769 ], 12, 1 );
    const_str_plain_get_server_info = UNSTREAM_STRING( &constant_bin[ 26781 ], 15, 1 );
    const_str_plain__bytes_literal = UNSTREAM_STRING( &constant_bin[ 26796 ], 14, 1 );
    const_str_plain_autocommit = UNSTREAM_STRING( &constant_bin[ 26004 ], 10, 1 );
    const_str_plain_binary_prefix = UNSTREAM_STRING( &constant_bin[ 26810 ], 13, 1 );
    const_str_digest_ae17179d9e968790c4b9d960e4d06239 = UNSTREAM_STRING( &constant_bin[ 26823 ], 28, 0 );
    const_str_plain_utf8 = UNSTREAM_STRING( &constant_bin[ 20617 ], 4, 1 );
    const_tuple_c34144d06a51d55063ddd5300a8e83c2_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 26851 ], 293 );
    const_tuple_str_plain_s_str_plain_m_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_m_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_m_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_character_set_name = UNSTREAM_STRING( &constant_bin[ 27144 ], 18, 1 );
    const_tuple_str_plain_self_str_plain_info_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_info_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_info_tuple, 1, const_str_plain_info ); Py_INCREF( const_str_plain_info );
    const_tuple_str_plain_client_flag_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_client_flag_int_0_tuple, 0, const_str_plain_client_flag ); Py_INCREF( const_str_plain_client_flag );
    PyTuple_SET_ITEM( const_tuple_str_plain_client_flag_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_cursors = UNSTREAM_STRING( &constant_bin[ 23117 ], 7, 1 );
    const_str_plain_weakref = UNSTREAM_STRING( &constant_bin[ 27162 ], 7, 1 );
    const_tuple_str_plain_binary_prefix_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_binary_prefix_false_tuple, 0, const_str_plain_binary_prefix ); Py_INCREF( const_str_plain_binary_prefix );
    PyTuple_SET_ITEM( const_tuple_str_plain_binary_prefix_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_tuple_str_plain_cursors_str_plain__mysql_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cursors_str_plain__mysql_tuple, 0, const_str_plain_cursors ); Py_INCREF( const_str_plain_cursors );
    PyTuple_SET_ITEM( const_tuple_str_plain_cursors_str_plain__mysql_tuple, 1, const_str_plain__mysql ); Py_INCREF( const_str_plain__mysql );
    const_str_plain__binary_prefix = UNSTREAM_STRING( &constant_bin[ 27169 ], 14, 1 );
    const_tuple_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4_tuple = PyTuple_New( 1 );
    const_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4 = UNSTREAM_STRING( &constant_bin[ 27183 ], 32, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4_tuple, 0, const_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4 ); Py_INCREF( const_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4 );
    const_tuple_str_plain_charset_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_charset_str_empty_tuple, 0, const_str_plain_charset ); Py_INCREF( const_str_plain_charset );
    PyTuple_SET_ITEM( const_tuple_str_plain_charset_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_plain_use_unicode = UNSTREAM_STRING( &constant_bin[ 27067 ], 11, 1 );
    const_tuple_str_digest_c34c1ea87f58a2801f710f4a0355fd91_tuple = PyTuple_New( 1 );
    const_str_digest_c34c1ea87f58a2801f710f4a0355fd91 = UNSTREAM_STRING( &constant_bin[ 27215 ], 6, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c34c1ea87f58a2801f710f4a0355fd91_tuple, 0, const_str_digest_c34c1ea87f58a2801f710f4a0355fd91 ); Py_INCREF( const_str_digest_c34c1ea87f58a2801f710f4a0355fd91 );
    const_str_plain_server_capabilities = UNSTREAM_STRING( &constant_bin[ 27221 ], 19, 1 );
    const_str_digest_55ab9cb309d3461eaa47644fe092db73 = UNSTREAM_STRING( &constant_bin[ 27240 ], 3274, 0 );
    const_str_plain__binary = UNSTREAM_STRING( &constant_bin[ 27169 ], 7, 1 );
    const_str_plain_set_character_set = UNSTREAM_STRING( &constant_bin[ 30514 ], 17, 1 );
    const_tuple_str_plain_autocommit_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_autocommit_false_tuple, 0, const_str_plain_autocommit ); Py_INCREF( const_str_plain_autocommit );
    PyTuple_SET_ITEM( const_tuple_str_plain_autocommit_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_plain_u = UNSTREAM_CHAR( 117, 1 );
    const_str_plain__transactional = UNSTREAM_STRING( &constant_bin[ 30531 ], 14, 1 );
    const_str_plain__server_version = UNSTREAM_STRING( &constant_bin[ 30545 ], 15, 1 );
    const_str_plain_utf8mb4 = UNSTREAM_STRING( &constant_bin[ 30560 ], 7, 1 );
    const_str_digest_d91a8522b823a6f8ef38dbb8626da564 = UNSTREAM_STRING( &constant_bin[ 30567 ], 25, 0 );
    const_str_digest_910b47dc8dd817b6e36365f889ff93ac = UNSTREAM_STRING( &constant_bin[ 30592 ], 210, 0 );
    const_str_plain_converter = UNSTREAM_STRING( &constant_bin[ 23102 ], 9, 1 );
    const_tuple_int_pos_4_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4_int_pos_1_tuple, 0, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain_get_client_info = UNSTREAM_STRING( &constant_bin[ 23168 ], 15, 1 );
    const_str_digest_f8030a9889ab33c1d1b872cff5b8a620 = UNSTREAM_STRING( &constant_bin[ 30802 ], 271, 0 );
    const_str_plain_utf8mb3 = UNSTREAM_STRING( &constant_bin[ 31073 ], 7, 1 );
    const_str_digest_8f04d2c1e11f0c07c93c40e1736aa360 = UNSTREAM_STRING( &constant_bin[ 31080 ], 78, 0 );
    const_str_plain_passwd = UNSTREAM_STRING( &constant_bin[ 27594 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_o_str_plain_s_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_o_str_plain_s_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_o_str_plain_s_tuple, 1, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_o_str_plain_s_tuple, 2, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_str_plain_dummy = UNSTREAM_STRING( &constant_bin[ 31158 ], 5, 1 );
    const_str_digest_fdf226b08f724ba31038a39ab6fa7ffb = UNSTREAM_STRING( &constant_bin[ 31163 ], 105, 0 );
    const_str_digest_d2dd7bf1dd924b08df033b44dccc9c07 = UNSTREAM_STRING( &constant_bin[ 31268 ], 230, 0 );
    const_tuple_str_plain_self_str_plain_sql_mode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sql_mode_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sql_mode_tuple, 1, const_str_plain_sql_mode ); Py_INCREF( const_str_plain_sql_mode );
    const_tuple_str_digest_855697e5a9c181770e960226dfe94f0a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_855697e5a9c181770e960226dfe94f0a_tuple, 0, const_str_digest_855697e5a9c181770e960226dfe94f0a ); Py_INCREF( const_str_digest_855697e5a9c181770e960226dfe94f0a );
    const_tuple_str_plain_u_str_plain_dummy_str_plain_db_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_u_str_plain_dummy_str_plain_db_tuple, 0, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_str_plain_u_str_plain_dummy_str_plain_db_tuple, 1, const_str_plain_dummy ); Py_INCREF( const_str_plain_dummy );
    PyTuple_SET_ITEM( const_tuple_str_plain_u_str_plain_dummy_str_plain_db_tuple, 2, const_str_plain_db ); Py_INCREF( const_str_plain_db );
    const_tuple_str_plain_utf8mb4_str_plain_utf8mb3_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_utf8mb4_str_plain_utf8mb3_tuple, 0, const_str_plain_utf8mb4 ); Py_INCREF( const_str_plain_utf8mb4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_utf8mb4_str_plain_utf8mb3_tuple, 1, const_str_plain_utf8mb3 ); Py_INCREF( const_str_plain_utf8mb3 );
    const_tuple_int_pos_5_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_5_int_0_tuple, 0, const_int_pos_5 ); Py_INCREF( const_int_pos_5 );
    PyTuple_SET_ITEM( const_tuple_int_pos_5_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_show_warnings = UNSTREAM_STRING( &constant_bin[ 31498 ], 13, 1 );
    const_tuple_str_plain_proxy_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_proxy_tuple, 0, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_MySQLdb$connections( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0f8a6e49aa2a22a21a86d849190aee87;
static PyCodeObject *codeobj_2dbb335d5d477ca0fb8af5edd93abbb6;
static PyCodeObject *codeobj_6021f74c4ea5b36899a2a6ea16a82561;
static PyCodeObject *codeobj_5e9591353d61ef65525420bcf0900a06;
static PyCodeObject *codeobj_29892fd061372c94db48c95de9adcffc;
static PyCodeObject *codeobj_dfdabc4a27c752cffd329c46596169ef;
static PyCodeObject *codeobj_ee14171492189be4cf0e8b3d48d7997b;
static PyCodeObject *codeobj_facc0644887467695d64dafaf4ad3753;
static PyCodeObject *codeobj_3823bb3c0108d70fad5fb88a3d15c77e;
static PyCodeObject *codeobj_f96cfb4864316eb9db380ff4ece5ae66;
static PyCodeObject *codeobj_c772908974b73fc697cccec4dce56b6b;
static PyCodeObject *codeobj_389009da04c5beaf735ddf5261764c80;
static PyCodeObject *codeobj_ed9552e2ee006f2aeb74f226dd16a4f1;
static PyCodeObject *codeobj_a3ff6dd2dcf7f21e785e6ed8a28b3d54;
static PyCodeObject *codeobj_dfa1bb2f1b72b835bca2ebfc3868a2d7;
static PyCodeObject *codeobj_123df1777f2fd3f4845ba36bb3d5f69d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_659fcadd0cd0fd4c0fd90be3bd70d89c;
    codeobj_0f8a6e49aa2a22a21a86d849190aee87 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ae17179d9e968790c4b9d960e4d06239, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_2dbb335d5d477ca0fb8af5edd93abbb6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Connection, 37, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_6021f74c4ea5b36899a2a6ea16a82561 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 42, const_tuple_c34144d06a51d55063ddd5300a8e83c2_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_5e9591353d61ef65525420bcf0900a06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__bytes_literal, 226, const_tuple_str_plain_self_str_plain_bs_str_plain_x_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_29892fd061372c94db48c95de9adcffc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__tuple_literal, 233, const_tuple_str_plain_self_str_plain_t_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dfdabc4a27c752cffd329c46596169ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_autocommit, 206, const_tuple_str_plain_self_str_plain_on_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ee14171492189be4cf0e8b3d48d7997b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_begin, 262, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_facc0644887467695d64dafaf4ad3753 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cursor, 211, const_tuple_str_plain_self_str_plain_cursorclass_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3823bb3c0108d70fad5fb88a3d15c77e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_literal, 236, const_tuple_str_plain_self_str_plain_o_str_plain_s_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f96cfb4864316eb9db380ff4ece5ae66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_numeric_part, 21, const_tuple_str_plain_s_str_plain_m_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c772908974b73fc697cccec4dce56b6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_query, 220, const_tuple_str_plain_self_str_plain_query_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_389009da04c5beaf735ddf5261764c80 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_character_set, 280, const_tuple_str_plain_self_str_plain_charset_str_plain_py_charset_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ed9552e2ee006f2aeb74f226dd16a4f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_sql_mode, 299, const_tuple_str_plain_self_str_plain_sql_mode_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a3ff6dd2dcf7f21e785e6ed8a28b3d54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_show_warnings, 307, const_tuple_str_plain_self_str_plain_r_str_plain_warnings_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dfa1bb2f1b72b835bca2ebfc3868a2d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_unicode_literal, 181, const_tuple_str_plain_u_str_plain_dummy_str_plain_db_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_123df1777f2fd3f4845ba36bb3d5f69d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_warning_count, 271, const_tuple_str_plain_self_str_plain_info_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_10_warning_count(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_11_set_character_set(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_12_set_sql_mode(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_13_show_warnings(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_1_numeric_part(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_2___init__$$$function_1_unicode_literal( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_3_autocommit(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_4_cursor( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_5_query(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_6__bytes_literal(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_7__tuple_literal(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_8_literal(  );


static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_9_begin(  );


// The module function definitions.
static PyObject *impl_MySQLdb$connections$$$function_1_numeric_part( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_f96cfb4864316eb9db380ff4ece5ae66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f96cfb4864316eb9db380ff4ece5ae66 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f96cfb4864316eb9db380ff4ece5ae66, codeobj_f96cfb4864316eb9db380ff4ece5ae66, module_MySQLdb$connections, sizeof(void *)+sizeof(void *) );
    frame_f96cfb4864316eb9db380ff4ece5ae66 = cache_frame_f96cfb4864316eb9db380ff4ece5ae66;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f96cfb4864316eb9db380ff4ece5ae66 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f96cfb4864316eb9db380ff4ece5ae66 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_re_numeric_part );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re_numeric_part );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "re_numeric_part" );
            exception_tb = NULL;

            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_s );
        tmp_args_element_name_1 = par_s;
        frame_f96cfb4864316eb9db380ff4ece5ae66->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_m );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_int_arg_1;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var_m );
            tmp_called_instance_2 = var_m;
            frame_f96cfb4864316eb9db380ff4ece5ae66->m_frame.f_lineno = 33;
            tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f96cfb4864316eb9db380ff4ece5ae66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f96cfb4864316eb9db380ff4ece5ae66 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f96cfb4864316eb9db380ff4ece5ae66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f96cfb4864316eb9db380ff4ece5ae66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f96cfb4864316eb9db380ff4ece5ae66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f96cfb4864316eb9db380ff4ece5ae66, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f96cfb4864316eb9db380ff4ece5ae66,
        type_description_1,
        par_s,
        var_m
    );


    // Release cached frame.
    if ( frame_f96cfb4864316eb9db380ff4ece5ae66 == cache_frame_f96cfb4864316eb9db380ff4ece5ae66 )
    {
        Py_DECREF( frame_f96cfb4864316eb9db380ff4ece5ae66 );
    }
    cache_frame_f96cfb4864316eb9db380ff4ece5ae66 = NULL;

    assertFrameObject( frame_f96cfb4864316eb9db380ff4ece5ae66 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_1_numeric_part );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_1_numeric_part );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_conversions = NULL;
    PyObject *var_FIELD_TYPE = NULL;
    PyObject *var_conv = NULL;
    PyObject *var_client_flag = NULL;
    PyObject *var_autocommit = NULL;
    PyObject *var__bytes_or_str = NULL;
    PyObject *var_charset = NULL;
    PyObject *var_conv2 = NULL;
    PyObject *var_unicode_literal = NULL;
    PyObject *var_sql_mode = NULL;
    struct Nuitka_CellObject *var_db = PyCell_EMPTY();
    PyObject *var_proxy = NULL;
    PyObject *var_cursorclass = NULL;
    PyObject *var_use_unicode = NULL;
    PyObject *var_kwargs2 = NULL;
    PyObject *var_k = NULL;
    PyObject *var_n = NULL;
    PyObject *var_CLIENT = NULL;
    PyObject *var_t = NULL;
    PyObject *var_v = NULL;
    PyObject *var_client_version = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_3__$0 = NULL;
    PyObject *tmp_list_contraction_3__contraction_result = NULL;
    PyObject *tmp_list_contraction_3__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6021f74c4ea5b36899a2a6ea16a82561;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_6021f74c4ea5b36899a2a6ea16a82561 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6021f74c4ea5b36899a2a6ea16a82561, codeobj_6021f74c4ea5b36899a2a6ea16a82561, module_MySQLdb$connections, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6021f74c4ea5b36899a2a6ea16a82561 = cache_frame_6021f74c4ea5b36899a2a6ea16a82561;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6021f74c4ea5b36899a2a6ea16a82561 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6021f74c4ea5b36899a2a6ea16a82561 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_05cd2a7a408dc6619e97d739b1ced7db;
        tmp_globals_name_1 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CLIENT_str_plain_FIELD_TYPE_tuple;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 116;
        tmp_assign_source_1 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_CLIENT );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_2;
        }
        assert( var_CLIENT == NULL );
        var_CLIENT = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_FIELD_TYPE );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_2;
        }
        assert( var_FIELD_TYPE == NULL );
        var_FIELD_TYPE = tmp_assign_source_3;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_digest_2c46ee64b2d1a9ee629fb8b94f2a09ca;
        tmp_globals_name_2 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_conversions_str_plain__bytes_or_str_tuple;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 117;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_3 = tmp_import_from_2__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_conversions );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_3;
        }
        assert( var_conversions == NULL );
        var_conversions = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__bytes_or_str );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 117;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_3;
        }
        assert( var__bytes_or_str == NULL );
        var__bytes_or_str = tmp_assign_source_6;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_weakref;
        tmp_globals_name_3 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_proxy_tuple;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 118;
        tmp_import_name_from_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_proxy );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_proxy == NULL );
        var_proxy = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_1 = par_kwargs;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 120;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_copy );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_kwargs2 == NULL );
        var_kwargs2 = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = const_str_plain_database;
        CHECK_OBJECT( var_kwargs2 );
        tmp_compexpr_right_1 = var_kwargs2;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_kwargs2 );
            tmp_called_instance_2 = var_kwargs2;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 123;
            tmp_ass_subvalue_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_database_tuple, 0 ) );

            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_kwargs2 );
            tmp_ass_subscribed_1 = var_kwargs2;
            tmp_ass_subscript_1 = const_str_plain_db;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = const_str_plain_password;
        CHECK_OBJECT( var_kwargs2 );
        tmp_compexpr_right_2 = var_kwargs2;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( var_kwargs2 );
            tmp_called_instance_3 = var_kwargs2;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 125;
            tmp_ass_subvalue_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_password_tuple, 0 ) );

            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_kwargs2 );
            tmp_ass_subscribed_2 = var_kwargs2;
            tmp_ass_subscript_2 = const_str_plain_passwd;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = const_str_plain_conv;
        CHECK_OBJECT( par_kwargs );
        tmp_compexpr_right_3 = par_kwargs;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_kwargs );
            tmp_subscribed_name_1 = par_kwargs;
            tmp_subscript_name_1 = const_str_plain_conv;
            tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_conv == NULL );
            var_conv = tmp_assign_source_9;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( var_conversions );
            tmp_assign_source_10 = var_conversions;
            assert( var_conv == NULL );
            Py_INCREF( tmp_assign_source_10 );
            var_conv = tmp_assign_source_10;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert( var_conv2 == NULL );
        var_conv2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT( var_conv );
        tmp_called_instance_4 = var_conv;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 133;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_13 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooocoooooooooo";
                exception_lineno = 133;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_15 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooocoooooooooo";
            exception_lineno = 133;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_16 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooooooocoooooooooo";
            exception_lineno = 133;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooooooocoooooooooo";
                    exception_lineno = 133;
                    goto try_except_handler_6;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooooooocoooooooooo";
            exception_lineno = 133;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_17;
            Py_INCREF( var_k );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_18;
            Py_INCREF( var_v );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT( var_k );
        tmp_isinstance_inst_1 = var_k;
        tmp_isinstance_cls_1 = (PyObject *)&PyInt_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT( var_v );
        tmp_isinstance_inst_2 = var_v;
        tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            tmp_sliceslicedel_index_lower_1 = 0;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT( var_v );
            tmp_slice_source_1 = var_v;
            tmp_dictset_value = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT( var_conv2 );
            tmp_dictset_dict = var_conv2;
            CHECK_OBJECT( var_k );
            tmp_dictset_key = var_k;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_4;
            }
        }
        goto branch_end_4;
        branch_no_4:;
        CHECK_OBJECT( var_v );
        tmp_dictset_value = var_v;
        CHECK_OBJECT( var_conv2 );
        tmp_dictset_dict = var_conv2;
        CHECK_OBJECT( var_k );
        tmp_dictset_key = var_k;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_4;
        }
        branch_end_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "ooooooooooooocoooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( var_conv2 );
        tmp_ass_subvalue_3 = var_conv2;
        CHECK_OBJECT( var_kwargs2 );
        tmp_ass_subscribed_3 = var_kwargs2;
        tmp_ass_subscript_3 = const_str_plain_conv;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( var_kwargs2 );
        tmp_source_name_1 = var_kwargs2;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pop );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_plain_cursorclass;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_default_cursor );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 140;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 140;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cursorclass == NULL );
        var_cursorclass = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT( var_kwargs2 );
        tmp_called_instance_5 = var_kwargs2;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 141;
        tmp_assign_source_20 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_charset_str_empty_tuple, 0 ) );

        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_charset == NULL );
        var_charset = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( var_charset );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_charset );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_PY2 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY2 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PY2" );
            exception_tb = NULL;

            exception_lineno = 143;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = tmp_mvar_value_1;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = Py_True;
            assert( var_use_unicode == NULL );
            Py_INCREF( tmp_assign_source_21 );
            var_use_unicode = tmp_assign_source_21;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_22;
            tmp_assign_source_22 = Py_False;
            assert( var_use_unicode == NULL );
            Py_INCREF( tmp_assign_source_22 );
            var_use_unicode = tmp_assign_source_22;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( var_kwargs2 );
        tmp_called_instance_6 = var_kwargs2;
        tmp_args_element_name_3 = const_str_plain_use_unicode;
        CHECK_OBJECT( var_use_unicode );
        tmp_args_element_name_4 = var_use_unicode;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_23 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_6, const_str_plain_pop, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_use_unicode;
            assert( old != NULL );
            var_use_unicode = tmp_assign_source_23;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT( var_kwargs2 );
        tmp_called_instance_7 = var_kwargs2;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 149;
        tmp_assign_source_24 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_7, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_sql_mode_str_empty_tuple, 0 ) );

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sql_mode == NULL );
        var_sql_mode = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_kwargs2 );
        tmp_called_instance_8 = var_kwargs2;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 150;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_8, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_binary_prefix_false_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__binary_prefix, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_9 = par_kwargs;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 152;
        tmp_assign_source_25 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_9, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_client_flag_int_0_tuple, 0 ) );

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_client_flag == NULL );
        var_client_flag = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_3;
            Py_ssize_t tmp_sliceslicedel_index_lower_2;
            Py_ssize_t tmp_slice_index_upper_2;
            PyObject *tmp_slice_source_2;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_mvar_value_2;
            tmp_sliceslicedel_index_lower_2 = 0;
            tmp_slice_index_upper_2 = 2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain__mysql );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__mysql );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_mysql" );
                exception_tb = NULL;

                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_instance_11 = tmp_mvar_value_2;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 153;
            tmp_called_instance_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_get_client_info );
            if ( tmp_called_instance_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 153;
            tmp_slice_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_10 );
            if ( tmp_slice_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }
            tmp_iter_arg_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
            Py_DECREF( tmp_slice_source_2 );
            if ( tmp_iter_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_3 );
            Py_DECREF( tmp_iter_arg_3 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_28;
        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_2 = tmp_list_contraction_1__$0;
            tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_29 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooocoooooooooo";
                    exception_lineno = 153;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_29;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_30 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_n;
                var_n = tmp_assign_source_30;
                Py_INCREF( var_n );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_numeric_part );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric_part );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric_part" );
                exception_tb = NULL;

                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_5 = var_n;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_7;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_tuple_arg_1 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_tuple_arg_1 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
        Py_DECREF( tmp_list_contraction_1__$0 );
        tmp_list_contraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
        Py_DECREF( tmp_list_contraction_1__contraction_result );
        tmp_list_contraction_1__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
        tmp_list_contraction_1__iter_value_0 = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_list_contraction_1__$0 );
        tmp_list_contraction_1__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_1__contraction_result );
        tmp_list_contraction_1__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
        tmp_list_contraction_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
        return NULL;
        outline_result_1:;
        tmp_assign_source_26 = PySequence_Tuple( tmp_tuple_arg_1 );
        Py_DECREF( tmp_tuple_arg_1 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_client_version == NULL );
        var_client_version = tmp_assign_source_26;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT( var_client_version );
        tmp_compexpr_left_4 = var_client_version;
        tmp_compexpr_right_4 = const_tuple_int_pos_4_int_pos_1_tuple;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_client_flag );
            tmp_left_name_1 = var_client_flag;
            CHECK_OBJECT( var_CLIENT );
            tmp_source_name_3 = var_CLIENT;
            tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_MULTI_STATEMENTS );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_31 = tmp_left_name_1;
            var_client_flag = tmp_assign_source_31;

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_client_version );
        tmp_compexpr_left_5 = var_client_version;
        tmp_compexpr_right_5 = const_tuple_int_pos_5_int_0_tuple;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( var_client_flag );
            tmp_left_name_2 = var_client_flag;
            CHECK_OBJECT( var_CLIENT );
            tmp_source_name_4 = var_CLIENT;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_MULTI_RESULTS );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_32 = tmp_left_name_2;
            var_client_flag = tmp_assign_source_32;

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if ( var_client_flag == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "client_flag" );
            exception_tb = NULL;

            exception_lineno = 159;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_4 = var_client_flag;
        CHECK_OBJECT( var_kwargs2 );
        tmp_ass_subscribed_4 = var_kwargs2;
        tmp_ass_subscript_4 = const_str_plain_client_flag;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_12;
        CHECK_OBJECT( var_kwargs2 );
        tmp_called_instance_12 = var_kwargs2;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 162;
        tmp_assign_source_33 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_12, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_autocommit_false_tuple, 0 ) );

        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 162;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_autocommit == NULL );
        var_autocommit = tmp_assign_source_33;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_Connection );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Connection );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Connection" );
            exception_tb = NULL;

            exception_lineno = 164;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_5 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___init__ );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( var_kwargs2 );
        tmp_dircall_arg3_1 = var_kwargs2;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_cursorclass );
        tmp_assattr_name_2 = var_cursorclass;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cursorclass, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 165;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_assattr_target_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_instance_13;
            CHECK_OBJECT( var_conv );
            tmp_called_instance_13 = var_conv;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 166;
            tmp_iter_arg_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_items );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_8;
            }
            tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_8;
            }
            assert( tmp_list_contraction_2__$0 == NULL );
            tmp_list_contraction_2__$0 = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = PyList_New( 0 );
            assert( tmp_list_contraction_2__contraction_result == NULL );
            tmp_list_contraction_2__contraction_result = tmp_assign_source_35;
        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT( tmp_list_contraction_2__$0 );
            tmp_next_source_3 = tmp_list_contraction_2__$0;
            tmp_assign_source_36 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_36 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooocoooooooooo";
                    exception_lineno = 166;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_list_contraction_2__iter_value_0;
                tmp_list_contraction_2__iter_value_0 = tmp_assign_source_36;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT( tmp_list_contraction_2__iter_value_0 );
            tmp_iter_arg_5 = tmp_list_contraction_2__iter_value_0;
            tmp_assign_source_37 = MAKE_ITERATOR( tmp_iter_arg_5 );
            if ( tmp_assign_source_37 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_37;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_3, 0 );
            if ( tmp_assign_source_38 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooooooooocoooooooooo";
                exception_lineno = 166;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_38;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_39 = UNPACK_NEXT( tmp_unpack_4, 1 );
            if ( tmp_assign_source_39 == NULL )
            {
                if ( !ERROR_OCCURRED() )
                {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF( exception_type );
                    exception_value = NULL;
                    exception_tb = NULL;
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                }


                type_description_1 = "ooooooooooooocoooooooooo";
                exception_lineno = 166;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_39;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

            tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

            if (likely( tmp_iterator_attempt == NULL ))
            {
                PyObject *error = GET_ERROR_OCCURRED();

                if ( error != NULL )
                {
                    if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                    {
                        CLEAR_ERROR_OCCURRED();
                    }
                    else
                    {
                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                        type_description_1 = "ooooooooooooocoooooooooo";
                        exception_lineno = 166;
                        goto try_except_handler_10;
                    }
                }
            }
            else
            {
                Py_DECREF( tmp_iterator_attempt );

                // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
                PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooocoooooooooo";
                exception_lineno = 166;
                goto try_except_handler_10;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_9;
        // End of try:
        try_end_6:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_40 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_k;
                var_k = tmp_assign_source_40;
                Py_INCREF( var_k );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_41 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_v;
                var_v = tmp_assign_source_41;
                Py_INCREF( var_v );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_type_arg_1;
            CHECK_OBJECT( var_k );
            tmp_type_arg_1 = var_k;
            tmp_compexpr_left_6 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_compexpr_left_6 == NULL) );
            tmp_compexpr_right_6 = (PyObject *)&PyInt_Type;
            tmp_condition_result_8 = ( tmp_compexpr_left_6 != tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_tuple_element_1;
                CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
                tmp_append_list_2 = tmp_list_contraction_2__contraction_result;
                CHECK_OBJECT( var_k );
                tmp_tuple_element_1 = var_k;
                tmp_append_value_2 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_append_value_2, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_v );
                tmp_tuple_element_1 = var_v;
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_append_value_2, 1, tmp_tuple_element_1 );
                assert( PyList_Check( tmp_append_list_2 ) );
                tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
                Py_DECREF( tmp_append_value_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 166;
                    type_description_1 = "ooooooooooooocoooooooooo";
                    goto try_except_handler_8;
                }
            }
            branch_no_8:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
        tmp_dict_seq_1 = tmp_list_contraction_2__contraction_result;
        Py_INCREF( tmp_dict_seq_1 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
        Py_DECREF( tmp_list_contraction_2__$0 );
        tmp_list_contraction_2__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
        Py_DECREF( tmp_list_contraction_2__contraction_result );
        tmp_list_contraction_2__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
        tmp_list_contraction_2__iter_value_0 = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_list_contraction_2__$0 );
        tmp_list_contraction_2__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_2__contraction_result );
        tmp_list_contraction_2__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
        tmp_list_contraction_2__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
        return NULL;
        outline_result_2:;
        tmp_assattr_name_3 = TO_DICT( tmp_dict_seq_1, NULL );
        Py_DECREF( tmp_dict_seq_1 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_encoders, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = (PyObject *)&PyString_Type;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_encoders );
        if ( tmp_ass_subscribed_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = (PyObject *)&PyString_Type;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
        Py_DECREF( tmp_ass_subscribed_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_tuple_arg_2;
        PyObject *tmp_assattr_target_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_iter_arg_6;
            Py_ssize_t tmp_sliceslicedel_index_lower_3;
            Py_ssize_t tmp_slice_index_upper_3;
            PyObject *tmp_slice_source_3;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_called_instance_15;
            tmp_sliceslicedel_index_lower_3 = 0;
            tmp_slice_index_upper_3 = 2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_15 = par_self;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 176;
            tmp_called_instance_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_15, const_str_plain_get_server_info );
            if ( tmp_called_instance_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_11;
            }
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 176;
            tmp_slice_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_14 );
            if ( tmp_slice_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_11;
            }
            tmp_iter_arg_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
            Py_DECREF( tmp_slice_source_3 );
            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_42 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_11;
            }
            assert( tmp_list_contraction_3__$0 == NULL );
            tmp_list_contraction_3__$0 = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = PyList_New( 0 );
            assert( tmp_list_contraction_3__contraction_result == NULL );
            tmp_list_contraction_3__contraction_result = tmp_assign_source_43;
        }
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_44;
            CHECK_OBJECT( tmp_list_contraction_3__$0 );
            tmp_next_source_4 = tmp_list_contraction_3__$0;
            tmp_assign_source_44 = ITERATOR_NEXT( tmp_next_source_4 );
            if ( tmp_assign_source_44 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_4;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooocoooooooooo";
                    exception_lineno = 176;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_list_contraction_3__iter_value_0;
                tmp_list_contraction_3__iter_value_0 = tmp_assign_source_44;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT( tmp_list_contraction_3__iter_value_0 );
            tmp_assign_source_45 = tmp_list_contraction_3__iter_value_0;
            {
                PyObject *old = var_n;
                var_n = tmp_assign_source_45;
                Py_INCREF( var_n );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
            tmp_append_list_3 = tmp_list_contraction_3__contraction_result;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_numeric_part );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric_part );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "numeric_part" );
                exception_tb = NULL;

                exception_lineno = 176;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_11;
            }

            tmp_called_name_3 = tmp_mvar_value_5;
            CHECK_OBJECT( var_n );
            tmp_args_element_name_6 = var_n;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 176;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_append_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_append_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_11;
            }
            assert( PyList_Check( tmp_append_list_3 ) );
            tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
            Py_DECREF( tmp_append_value_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_11;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_11;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
        tmp_tuple_arg_2 = tmp_list_contraction_3__contraction_result;
        Py_INCREF( tmp_tuple_arg_2 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_3__$0 );
        Py_DECREF( tmp_list_contraction_3__$0 );
        tmp_list_contraction_3__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_3__contraction_result );
        Py_DECREF( tmp_list_contraction_3__contraction_result );
        tmp_list_contraction_3__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_3__iter_value_0 );
        tmp_list_contraction_3__iter_value_0 = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_list_contraction_3__$0 );
        tmp_list_contraction_3__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_3__contraction_result );
        tmp_list_contraction_3__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_3__iter_value_0 );
        tmp_list_contraction_3__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
        return NULL;
        outline_result_3:;
        tmp_assattr_name_4 = PySequence_Tuple( tmp_tuple_arg_2 );
        Py_DECREF( tmp_tuple_arg_2 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__server_version, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_str_plain_ascii;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_encoding, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( var_proxy );
        tmp_called_name_4 = var_proxy;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_7 = par_self;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_db ) == NULL );
        PyCell_SET( var_db, tmp_assign_source_46 );

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_47 = MAKE_FUNCTION_MySQLdb$connections$$$function_2___init__$$$function_1_unicode_literal( tmp_defaults_1 );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_47)->m_closure[0] = var_db;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_47)->m_closure[0] );


        assert( var_unicode_literal == NULL );
        var_unicode_literal = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT( var_charset );
        tmp_operand_name_2 = var_charset;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_instance_16;
            CHECK_OBJECT( par_self );
            tmp_called_instance_16 = par_self;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 185;
            tmp_assign_source_48 = CALL_METHOD_NO_ARGS( tmp_called_instance_16, const_str_plain_character_set_name );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 185;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_charset;
                assert( old != NULL );
                var_charset = tmp_assign_source_48;
                Py_DECREF( old );
            }

        }
        branch_no_9:;
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_self );
        tmp_called_instance_17 = par_self;
        CHECK_OBJECT( var_charset );
        tmp_args_element_name_8 = var_charset;
        frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_set_character_set, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_sql_mode );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_sql_mode );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( par_self );
            tmp_called_instance_18 = par_self;
            CHECK_OBJECT( var_sql_mode );
            tmp_args_element_name_9 = var_sql_mode;
            frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 189;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_set_sql_mode, call_args );
            }

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_use_unicode );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_use_unicode );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_source_name_12;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_7 = var_FIELD_TYPE;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_STRING );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 192;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_iter_arg_7 = PyTuple_New( 7 );
            PyTuple_SET_ITEM( tmp_iter_arg_7, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_8 = var_FIELD_TYPE;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_VAR_STRING );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_7 );

                exception_lineno = 192;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_7, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_9 = var_FIELD_TYPE;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_VARCHAR );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_7 );

                exception_lineno = 192;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_7, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_10 = var_FIELD_TYPE;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_TINY_BLOB );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_7 );

                exception_lineno = 192;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_7, 3, tmp_tuple_element_2 );
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_11 = var_FIELD_TYPE;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_MEDIUM_BLOB );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_7 );

                exception_lineno = 193;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_7, 4, tmp_tuple_element_2 );
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_12 = var_FIELD_TYPE;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_LONG_BLOB );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_7 );

                exception_lineno = 193;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_7, 5, tmp_tuple_element_2 );
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_13 = var_FIELD_TYPE;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_BLOB );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_iter_arg_7 );

                exception_lineno = 193;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_iter_arg_7, 6, tmp_tuple_element_2 );
            tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_7 );
            Py_DECREF( tmp_iter_arg_7 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 192;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_49;
        }
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_50;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_5 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_50 = ITERATOR_NEXT( tmp_next_source_5 );
            if ( tmp_assign_source_50 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooooocoooooooooo";
                    exception_lineno = 192;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_50;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_51 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_t;
                var_t = tmp_assign_source_51;
                Py_INCREF( var_t );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_source_name_14;
            PyObject *tmp_ass_subscript_6;
            CHECK_OBJECT( var__bytes_or_str );
            tmp_ass_subvalue_6 = var__bytes_or_str;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_ass_subscribed_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_converter );
            if ( tmp_ass_subscribed_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT( var_t );
            tmp_ass_subscript_6 = var_t;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
            Py_DECREF( tmp_ass_subscribed_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 194;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto try_except_handler_12;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto try_except_handler_12;
        }
        goto loop_start_5;
        loop_end_5:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto frame_exception_exit_1;
        // End of try:
        try_end_8:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_source_name_15;
            PyObject *tmp_ass_subscript_7;
            PyObject *tmp_source_name_16;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_unicode );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
                exception_tb = NULL;

                exception_lineno = 197;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_ass_subvalue_7 = tmp_mvar_value_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_ass_subscribed_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_converter );
            if ( tmp_ass_subscribed_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_FIELD_TYPE );
            tmp_source_name_16 = var_FIELD_TYPE;
            tmp_ass_subscript_7 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_JSON );
            if ( tmp_ass_subscript_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subscribed_7 );

                exception_lineno = 197;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
            Py_DECREF( tmp_ass_subscribed_7 );
            Py_DECREF( tmp_ass_subscript_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 197;
                type_description_1 = "ooooooooooooocoooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_11:;
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_source_name_17;
        PyObject *tmp_ass_subscript_8;
        PyObject *tmp_mvar_value_7;
        CHECK_OBJECT( var_unicode_literal );
        tmp_ass_subvalue_8 = var_unicode_literal;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_ass_subscribed_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_encoders );
        if ( tmp_ass_subscribed_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_ass_subscribed_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
            exception_tb = NULL;

            exception_lineno = 199;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_8 = tmp_mvar_value_7;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
        Py_DECREF( tmp_ass_subscribed_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_source_name_18;
        PyObject *tmp_right_name_3;
        PyObject *tmp_source_name_19;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_left_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_server_capabilities );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_CLIENT );
        tmp_source_name_19 = var_CLIENT;
        tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_TRANSACTIONS );
        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 200;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_6 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__transactional, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_source_name_20;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_20 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__transactional );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 201;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 201;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_12;
        }
        else
        {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT( var_autocommit );
            tmp_compexpr_left_7 = var_autocommit;
            tmp_compexpr_right_7 = Py_None;
            tmp_condition_result_13 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_13;
            }
            else
            {
                goto branch_no_13;
            }
            branch_yes_13:;
            {
                PyObject *tmp_called_instance_19;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT( par_self );
                tmp_called_instance_19 = par_self;
                CHECK_OBJECT( var_autocommit );
                tmp_args_element_name_10 = var_autocommit;
                frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame.f_lineno = 203;
                {
                    PyObject *call_args[] = { tmp_args_element_name_10 };
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_autocommit, call_args );
                }

                if ( tmp_call_result_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooooooocoooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_4 );
            }
            branch_no_13:;
        }
        branch_no_12:;
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = PyList_New( 0 );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_messages, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 204;
            type_description_1 = "ooooooooooooocoooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6021f74c4ea5b36899a2a6ea16a82561 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6021f74c4ea5b36899a2a6ea16a82561 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6021f74c4ea5b36899a2a6ea16a82561, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6021f74c4ea5b36899a2a6ea16a82561->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6021f74c4ea5b36899a2a6ea16a82561, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6021f74c4ea5b36899a2a6ea16a82561,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_conversions,
        var_FIELD_TYPE,
        var_conv,
        var_client_flag,
        var_autocommit,
        var__bytes_or_str,
        var_charset,
        var_conv2,
        var_unicode_literal,
        var_sql_mode,
        var_db,
        var_proxy,
        var_cursorclass,
        var_use_unicode,
        var_kwargs2,
        var_k,
        var_n,
        var_CLIENT,
        var_t,
        var_v,
        var_client_version
    );


    // Release cached frame.
    if ( frame_6021f74c4ea5b36899a2a6ea16a82561 == cache_frame_6021f74c4ea5b36899a2a6ea16a82561 )
    {
        Py_DECREF( frame_6021f74c4ea5b36899a2a6ea16a82561 );
    }
    cache_frame_6021f74c4ea5b36899a2a6ea16a82561 = NULL;

    assertFrameObject( frame_6021f74c4ea5b36899a2a6ea16a82561 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_conversions );
    Py_DECREF( var_conversions );
    var_conversions = NULL;

    CHECK_OBJECT( (PyObject *)var_FIELD_TYPE );
    Py_DECREF( var_FIELD_TYPE );
    var_FIELD_TYPE = NULL;

    CHECK_OBJECT( (PyObject *)var_conv );
    Py_DECREF( var_conv );
    var_conv = NULL;

    Py_XDECREF( var_client_flag );
    var_client_flag = NULL;

    CHECK_OBJECT( (PyObject *)var_autocommit );
    Py_DECREF( var_autocommit );
    var_autocommit = NULL;

    CHECK_OBJECT( (PyObject *)var__bytes_or_str );
    Py_DECREF( var__bytes_or_str );
    var__bytes_or_str = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_charset );
    Py_DECREF( var_charset );
    var_charset = NULL;

    CHECK_OBJECT( (PyObject *)var_conv2 );
    Py_DECREF( var_conv2 );
    var_conv2 = NULL;

    CHECK_OBJECT( (PyObject *)var_unicode_literal );
    Py_DECREF( var_unicode_literal );
    var_unicode_literal = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_sql_mode );
    Py_DECREF( var_sql_mode );
    var_sql_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_db );
    Py_DECREF( var_db );
    var_db = NULL;

    CHECK_OBJECT( (PyObject *)var_proxy );
    Py_DECREF( var_proxy );
    var_proxy = NULL;

    CHECK_OBJECT( (PyObject *)var_cursorclass );
    Py_DECREF( var_cursorclass );
    var_cursorclass = NULL;

    CHECK_OBJECT( (PyObject *)var_use_unicode );
    Py_DECREF( var_use_unicode );
    var_use_unicode = NULL;

    CHECK_OBJECT( (PyObject *)var_kwargs2 );
    Py_DECREF( var_kwargs2 );
    var_kwargs2 = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_CLIENT );
    Py_DECREF( var_CLIENT );
    var_CLIENT = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)var_client_version );
    Py_DECREF( var_client_version );
    var_client_version = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_conversions );
    var_conversions = NULL;

    Py_XDECREF( var_FIELD_TYPE );
    var_FIELD_TYPE = NULL;

    Py_XDECREF( var_conv );
    var_conv = NULL;

    Py_XDECREF( var_client_flag );
    var_client_flag = NULL;

    Py_XDECREF( var_autocommit );
    var_autocommit = NULL;

    Py_XDECREF( var__bytes_or_str );
    var__bytes_or_str = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_charset );
    var_charset = NULL;

    Py_XDECREF( var_conv2 );
    var_conv2 = NULL;

    Py_XDECREF( var_unicode_literal );
    var_unicode_literal = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_sql_mode );
    var_sql_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_db );
    Py_DECREF( var_db );
    var_db = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_cursorclass );
    var_cursorclass = NULL;

    Py_XDECREF( var_use_unicode );
    var_use_unicode = NULL;

    Py_XDECREF( var_kwargs2 );
    var_kwargs2 = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_CLIENT );
    var_CLIENT = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_client_version );
    var_client_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_2___init__$$$function_1_unicode_literal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_u = python_pars[ 0 ];
    PyObject *par_dummy = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_dfa1bb2f1b72b835bca2ebfc3868a2d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dfa1bb2f1b72b835bca2ebfc3868a2d7, codeobj_dfa1bb2f1b72b835bca2ebfc3868a2d7, module_MySQLdb$connections, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 = cache_frame_dfa1bb2f1b72b835bca2ebfc3868a2d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "db" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_string_literal );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_u );
        tmp_source_name_2 = par_u;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 182;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "db" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_encoding );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 182;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_dfa1bb2f1b72b835bca2ebfc3868a2d7->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 182;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_dfa1bb2f1b72b835bca2ebfc3868a2d7->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dfa1bb2f1b72b835bca2ebfc3868a2d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dfa1bb2f1b72b835bca2ebfc3868a2d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dfa1bb2f1b72b835bca2ebfc3868a2d7,
        type_description_1,
        par_u,
        par_dummy,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 == cache_frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 )
    {
        Py_DECREF( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 );
    }
    cache_frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 = NULL;

    assertFrameObject( frame_dfa1bb2f1b72b835bca2ebfc3868a2d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__$$$function_1_unicode_literal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dummy );
    Py_DECREF( par_dummy );
    par_dummy = NULL;

    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_dummy );
    Py_DECREF( par_dummy );
    par_dummy = NULL;

    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_2___init__$$$function_1_unicode_literal );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_3_autocommit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_on = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_dfdabc4a27c752cffd329c46596169ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dfdabc4a27c752cffd329c46596169ef = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dfdabc4a27c752cffd329c46596169ef, codeobj_dfdabc4a27c752cffd329c46596169ef, module_MySQLdb$connections, sizeof(void *)+sizeof(void *) );
    frame_dfdabc4a27c752cffd329c46596169ef = cache_frame_dfdabc4a27c752cffd329c46596169ef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dfdabc4a27c752cffd329c46596169ef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dfdabc4a27c752cffd329c46596169ef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT( par_on );
        tmp_value_name_1 = par_on;
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 207;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        {
            PyObject *old = par_on;
            assert( old != NULL );
            par_on = tmp_assign_source_1;
            Py_INCREF( par_on );
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_dfdabc4a27c752cffd329c46596169ef->m_frame.f_lineno = 208;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_autocommit );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_on );
        tmp_compexpr_right_1 = par_on;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain__mysql );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__mysql );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_mysql" );
                exception_tb = NULL;

                exception_lineno = 209;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_args_element_name_1 = par_self;
            CHECK_OBJECT( par_on );
            tmp_args_element_name_2 = par_on;
            frame_dfdabc4a27c752cffd329c46596169ef->m_frame.f_lineno = 209;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_autocommit, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfdabc4a27c752cffd329c46596169ef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfdabc4a27c752cffd329c46596169ef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dfdabc4a27c752cffd329c46596169ef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dfdabc4a27c752cffd329c46596169ef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dfdabc4a27c752cffd329c46596169ef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dfdabc4a27c752cffd329c46596169ef,
        type_description_1,
        par_self,
        par_on
    );


    // Release cached frame.
    if ( frame_dfdabc4a27c752cffd329c46596169ef == cache_frame_dfdabc4a27c752cffd329c46596169ef )
    {
        Py_DECREF( frame_dfdabc4a27c752cffd329c46596169ef );
    }
    cache_frame_dfdabc4a27c752cffd329c46596169ef = NULL;

    assertFrameObject( frame_dfdabc4a27c752cffd329c46596169ef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_3_autocommit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_on );
    Py_DECREF( par_on );
    par_on = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_on );
    Py_DECREF( par_on );
    par_on = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_3_autocommit );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_4_cursor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cursorclass = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_facc0644887467695d64dafaf4ad3753;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_facc0644887467695d64dafaf4ad3753 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_facc0644887467695d64dafaf4ad3753, codeobj_facc0644887467695d64dafaf4ad3753, module_MySQLdb$connections, sizeof(void *)+sizeof(void *) );
    frame_facc0644887467695d64dafaf4ad3753 = cache_frame_facc0644887467695d64dafaf4ad3753;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_facc0644887467695d64dafaf4ad3753 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_facc0644887467695d64dafaf4ad3753 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_cursorclass );
        tmp_or_left_value_1 = par_cursorclass;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cursorclass );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_called_name_1 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        frame_facc0644887467695d64dafaf4ad3753->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_facc0644887467695d64dafaf4ad3753 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_facc0644887467695d64dafaf4ad3753 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_facc0644887467695d64dafaf4ad3753 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_facc0644887467695d64dafaf4ad3753, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_facc0644887467695d64dafaf4ad3753->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_facc0644887467695d64dafaf4ad3753, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_facc0644887467695d64dafaf4ad3753,
        type_description_1,
        par_self,
        par_cursorclass
    );


    // Release cached frame.
    if ( frame_facc0644887467695d64dafaf4ad3753 == cache_frame_facc0644887467695d64dafaf4ad3753 )
    {
        Py_DECREF( frame_facc0644887467695d64dafaf4ad3753 );
    }
    cache_frame_facc0644887467695d64dafaf4ad3753 = NULL;

    assertFrameObject( frame_facc0644887467695d64dafaf4ad3753 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_4_cursor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cursorclass );
    Py_DECREF( par_cursorclass );
    par_cursorclass = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_cursorclass );
    Py_DECREF( par_cursorclass );
    par_cursorclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_4_cursor );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_5_query( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_query = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c772908974b73fc697cccec4dce56b6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c772908974b73fc697cccec4dce56b6b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c772908974b73fc697cccec4dce56b6b, codeobj_c772908974b73fc697cccec4dce56b6b, module_MySQLdb$connections, sizeof(void *)+sizeof(void *) );
    frame_c772908974b73fc697cccec4dce56b6b = cache_frame_c772908974b73fc697cccec4dce56b6b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c772908974b73fc697cccec4dce56b6b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c772908974b73fc697cccec4dce56b6b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_query );
        tmp_isinstance_inst_1 = par_query;
        tmp_isinstance_cls_1 = (PyObject *)&PyByteArray_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_str_arg_1;
            CHECK_OBJECT( par_query );
            tmp_str_arg_1 = par_query;
            tmp_assign_source_1 = PyObject_Str( tmp_str_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_query;
                assert( old != NULL );
                par_query = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain__mysql );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__mysql );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_mysql" );
            exception_tb = NULL;

            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_query );
        tmp_args_element_name_2 = par_query;
        frame_c772908974b73fc697cccec4dce56b6b->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_query, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c772908974b73fc697cccec4dce56b6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c772908974b73fc697cccec4dce56b6b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c772908974b73fc697cccec4dce56b6b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c772908974b73fc697cccec4dce56b6b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c772908974b73fc697cccec4dce56b6b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c772908974b73fc697cccec4dce56b6b,
        type_description_1,
        par_self,
        par_query
    );


    // Release cached frame.
    if ( frame_c772908974b73fc697cccec4dce56b6b == cache_frame_c772908974b73fc697cccec4dce56b6b )
    {
        Py_DECREF( frame_c772908974b73fc697cccec4dce56b6b );
    }
    cache_frame_c772908974b73fc697cccec4dce56b6b = NULL;

    assertFrameObject( frame_c772908974b73fc697cccec4dce56b6b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_5_query );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_query );
    par_query = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_5_query );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_6__bytes_literal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bs = python_pars[ 1 ];
    PyObject *var_x = NULL;
    struct Nuitka_FrameObject *frame_5e9591353d61ef65525420bcf0900a06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5e9591353d61ef65525420bcf0900a06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e9591353d61ef65525420bcf0900a06, codeobj_5e9591353d61ef65525420bcf0900a06, module_MySQLdb$connections, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5e9591353d61ef65525420bcf0900a06 = cache_frame_5e9591353d61ef65525420bcf0900a06;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e9591353d61ef65525420bcf0900a06 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e9591353d61ef65525420bcf0900a06 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_bs );
        tmp_isinstance_inst_1 = par_bs;
        tmp_isinstance_cls_1 = const_tuple_type_str_type_bytearray_tuple;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 227;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_bs );
        tmp_args_element_name_1 = par_bs;
        frame_5e9591353d61ef65525420bcf0900a06->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_string_literal, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 228;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_x == NULL );
        var_x = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__binary_prefix );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 229;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 229;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_plain__binary;
            CHECK_OBJECT( var_x );
            tmp_right_name_1 = var_x;
            tmp_return_value = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e9591353d61ef65525420bcf0900a06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e9591353d61ef65525420bcf0900a06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e9591353d61ef65525420bcf0900a06 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e9591353d61ef65525420bcf0900a06, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e9591353d61ef65525420bcf0900a06->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e9591353d61ef65525420bcf0900a06, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e9591353d61ef65525420bcf0900a06,
        type_description_1,
        par_self,
        par_bs,
        var_x
    );


    // Release cached frame.
    if ( frame_5e9591353d61ef65525420bcf0900a06 == cache_frame_5e9591353d61ef65525420bcf0900a06 )
    {
        Py_DECREF( frame_5e9591353d61ef65525420bcf0900a06 );
    }
    cache_frame_5e9591353d61ef65525420bcf0900a06 = NULL;

    assertFrameObject( frame_5e9591353d61ef65525420bcf0900a06 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_x );
    tmp_return_value = var_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_6__bytes_literal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bs );
    Py_DECREF( par_bs );
    par_bs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bs );
    Py_DECREF( par_bs );
    par_bs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_6__bytes_literal );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_7__tuple_literal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_29892fd061372c94db48c95de9adcffc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29892fd061372c94db48c95de9adcffc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29892fd061372c94db48c95de9adcffc, codeobj_29892fd061372c94db48c95de9adcffc, module_MySQLdb$connections, sizeof(void *)+sizeof(void *) );
    frame_29892fd061372c94db48c95de9adcffc = cache_frame_29892fd061372c94db48c95de9adcffc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29892fd061372c94db48c95de9adcffc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29892fd061372c94db48c95de9adcffc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_left_name_1 = const_str_digest_90be6369e129dbd04b3a853674afd0e2;
        tmp_source_name_1 = const_str_chr_44;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
        assert( !(tmp_called_name_1 == NULL) );
        tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
        assert( tmp_called_name_2 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_literal );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_t );
        tmp_args_element_name_3 = par_t;
        frame_29892fd061372c94db48c95de9adcffc->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_29892fd061372c94db48c95de9adcffc->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29892fd061372c94db48c95de9adcffc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_29892fd061372c94db48c95de9adcffc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29892fd061372c94db48c95de9adcffc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29892fd061372c94db48c95de9adcffc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29892fd061372c94db48c95de9adcffc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29892fd061372c94db48c95de9adcffc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29892fd061372c94db48c95de9adcffc,
        type_description_1,
        par_self,
        par_t
    );


    // Release cached frame.
    if ( frame_29892fd061372c94db48c95de9adcffc == cache_frame_29892fd061372c94db48c95de9adcffc )
    {
        Py_DECREF( frame_29892fd061372c94db48c95de9adcffc );
    }
    cache_frame_29892fd061372c94db48c95de9adcffc = NULL;

    assertFrameObject( frame_29892fd061372c94db48c95de9adcffc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_7__tuple_literal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_7__tuple_literal );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_8_literal( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_o = python_pars[ 1 ];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_3823bb3c0108d70fad5fb88a3d15c77e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3823bb3c0108d70fad5fb88a3d15c77e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3823bb3c0108d70fad5fb88a3d15c77e, codeobj_3823bb3c0108d70fad5fb88a3d15c77e, module_MySQLdb$connections, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3823bb3c0108d70fad5fb88a3d15c77e = cache_frame_3823bb3c0108d70fad5fb88a3d15c77e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3823bb3c0108d70fad5fb88a3d15c77e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3823bb3c0108d70fad5fb88a3d15c77e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_o );
        tmp_isinstance_inst_1 = par_o;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
            exception_tb = NULL;

            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_string_literal );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_o );
            tmp_source_name_2 = par_o;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encode );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 245;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_encoding );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 245;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 245;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert( var_s == NULL );
            var_s = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( par_o );
            tmp_isinstance_inst_2 = par_o;
            tmp_isinstance_cls_2 = (PyObject *)&PyByteArray_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 246;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_self );
                tmp_called_instance_1 = par_self;
                CHECK_OBJECT( par_o );
                tmp_args_element_name_3 = par_o;
                frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 247;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__bytes_literal, call_args );
                }

                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 247;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                assert( var_s == NULL );
                var_s = tmp_assign_source_2;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_isinstance_inst_3;
                PyObject *tmp_isinstance_cls_3;
                CHECK_OBJECT( par_o );
                tmp_isinstance_inst_3 = par_o;
                tmp_isinstance_cls_3 = (PyObject *)&PyString_Type;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 248;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_mvar_value_2;
                    int tmp_truth_name_1;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_PY2 );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY2 );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PY2" );
                        exception_tb = NULL;

                        exception_lineno = 249;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_2 );
                    if ( tmp_truth_name_1 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 249;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_4 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_4;
                    }
                    else
                    {
                        goto branch_no_4;
                    }
                    branch_yes_4:;
                    {
                        PyObject *tmp_assign_source_3;
                        PyObject *tmp_called_instance_2;
                        PyObject *tmp_args_element_name_4;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_2 = par_self;
                        CHECK_OBJECT( par_o );
                        tmp_args_element_name_4 = par_o;
                        frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 250;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_4 };
                            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_string_literal, call_args );
                        }

                        if ( tmp_assign_source_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 250;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_s == NULL );
                        var_s = tmp_assign_source_3;
                    }
                    goto branch_end_4;
                    branch_no_4:;
                    {
                        PyObject *tmp_assign_source_4;
                        PyObject *tmp_called_instance_3;
                        PyObject *tmp_args_element_name_5;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_3 = par_self;
                        CHECK_OBJECT( par_o );
                        tmp_args_element_name_5 = par_o;
                        frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 252;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_5 };
                            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__bytes_literal, call_args );
                        }

                        if ( tmp_assign_source_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 252;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_s == NULL );
                        var_s = tmp_assign_source_4;
                    }
                    branch_end_4:;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_isinstance_inst_4;
                    PyObject *tmp_isinstance_cls_4;
                    CHECK_OBJECT( par_o );
                    tmp_isinstance_inst_4 = par_o;
                    tmp_isinstance_cls_4 = const_tuple_type_tuple_type_list_tuple;
                    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 253;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_5;
                    }
                    else
                    {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_assign_source_5;
                        PyObject *tmp_called_instance_4;
                        PyObject *tmp_args_element_name_6;
                        CHECK_OBJECT( par_self );
                        tmp_called_instance_4 = par_self;
                        CHECK_OBJECT( par_o );
                        tmp_args_element_name_6 = par_o;
                        frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 254;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_6 };
                            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__tuple_literal, call_args );
                        }

                        if ( tmp_assign_source_5 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 254;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_s == NULL );
                        var_s = tmp_assign_source_5;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    {
                        PyObject *tmp_assign_source_6;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_source_name_4;
                        PyObject *tmp_args_element_name_7;
                        PyObject *tmp_args_element_name_8;
                        PyObject *tmp_source_name_5;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_4 = par_self;
                        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_escape );
                        if ( tmp_called_name_3 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 256;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_o );
                        tmp_args_element_name_7 = par_o;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_5 = par_self;
                        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_encoders );
                        if ( tmp_args_element_name_8 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                            Py_DECREF( tmp_called_name_3 );

                            exception_lineno = 256;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 256;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                        }

                        Py_DECREF( tmp_called_name_3 );
                        Py_DECREF( tmp_args_element_name_8 );
                        if ( tmp_assign_source_6 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 256;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        assert( var_s == NULL );
                        var_s = tmp_assign_source_6;
                    }
                    {
                        nuitka_bool tmp_condition_result_6;
                        PyObject *tmp_isinstance_inst_5;
                        PyObject *tmp_isinstance_cls_5;
                        PyObject *tmp_mvar_value_3;
                        CHECK_OBJECT( var_s );
                        tmp_isinstance_inst_5 = var_s;
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_unicode );

                        if (unlikely( tmp_mvar_value_3 == NULL ))
                        {
                            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
                        }

                        if ( tmp_mvar_value_3 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
                            exception_tb = NULL;

                            exception_lineno = 257;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_isinstance_cls_5 = tmp_mvar_value_3;
                        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 257;
                            type_description_1 = "ooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_6;
                        }
                        else
                        {
                            goto branch_no_6;
                        }
                        branch_yes_6:;
                        {
                            PyObject *tmp_assign_source_7;
                            PyObject *tmp_called_name_4;
                            PyObject *tmp_source_name_6;
                            PyObject *tmp_args_element_name_9;
                            PyObject *tmp_source_name_7;
                            CHECK_OBJECT( var_s );
                            tmp_source_name_6 = var_s;
                            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_encode );
                            if ( tmp_called_name_4 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 258;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            CHECK_OBJECT( par_self );
                            tmp_source_name_7 = par_self;
                            tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_encoding );
                            if ( tmp_args_element_name_9 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                                Py_DECREF( tmp_called_name_4 );

                                exception_lineno = 258;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame.f_lineno = 258;
                            {
                                PyObject *call_args[] = { tmp_args_element_name_9 };
                                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                            }

                            Py_DECREF( tmp_called_name_4 );
                            Py_DECREF( tmp_args_element_name_9 );
                            if ( tmp_assign_source_7 == NULL )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 258;
                                type_description_1 = "ooo";
                                goto frame_exception_exit_1;
                            }
                            {
                                PyObject *old = var_s;
                                assert( old != NULL );
                                var_s = tmp_assign_source_7;
                                Py_DECREF( old );
                            }

                        }
                        branch_no_6:;
                    }
                    branch_end_5:;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        if ( var_s == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "s" );
            exception_tb = NULL;

            exception_lineno = 259;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_6 = var_s;
        tmp_isinstance_cls_6 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 259;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    if ( var_s == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;

        exception_lineno = 260;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_s;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3823bb3c0108d70fad5fb88a3d15c77e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3823bb3c0108d70fad5fb88a3d15c77e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3823bb3c0108d70fad5fb88a3d15c77e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3823bb3c0108d70fad5fb88a3d15c77e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3823bb3c0108d70fad5fb88a3d15c77e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3823bb3c0108d70fad5fb88a3d15c77e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3823bb3c0108d70fad5fb88a3d15c77e,
        type_description_1,
        par_self,
        par_o,
        var_s
    );


    // Release cached frame.
    if ( frame_3823bb3c0108d70fad5fb88a3d15c77e == cache_frame_3823bb3c0108d70fad5fb88a3d15c77e )
    {
        Py_DECREF( frame_3823bb3c0108d70fad5fb88a3d15c77e );
    }
    cache_frame_3823bb3c0108d70fad5fb88a3d15c77e = NULL;

    assertFrameObject( frame_3823bb3c0108d70fad5fb88a3d15c77e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_8_literal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    CHECK_OBJECT( (PyObject *)par_o );
    Py_DECREF( par_o );
    par_o = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_8_literal );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_9_begin( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ee14171492189be4cf0e8b3d48d7997b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee14171492189be4cf0e8b3d48d7997b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee14171492189be4cf0e8b3d48d7997b, codeobj_ee14171492189be4cf0e8b3d48d7997b, module_MySQLdb$connections, sizeof(void *) );
    frame_ee14171492189be4cf0e8b3d48d7997b = cache_frame_ee14171492189be4cf0e8b3d48d7997b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee14171492189be4cf0e8b3d48d7997b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee14171492189be4cf0e8b3d48d7997b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_ee14171492189be4cf0e8b3d48d7997b->m_frame.f_lineno = 267;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_query, &PyTuple_GET_ITEM( const_tuple_str_plain_BEGIN_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee14171492189be4cf0e8b3d48d7997b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee14171492189be4cf0e8b3d48d7997b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee14171492189be4cf0e8b3d48d7997b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee14171492189be4cf0e8b3d48d7997b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee14171492189be4cf0e8b3d48d7997b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee14171492189be4cf0e8b3d48d7997b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_ee14171492189be4cf0e8b3d48d7997b == cache_frame_ee14171492189be4cf0e8b3d48d7997b )
    {
        Py_DECREF( frame_ee14171492189be4cf0e8b3d48d7997b );
    }
    cache_frame_ee14171492189be4cf0e8b3d48d7997b = NULL;

    assertFrameObject( frame_ee14171492189be4cf0e8b3d48d7997b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_9_begin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_9_begin );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_10_warning_count( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_info = NULL;
    struct Nuitka_FrameObject *frame_123df1777f2fd3f4845ba36bb3d5f69d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_123df1777f2fd3f4845ba36bb3d5f69d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_123df1777f2fd3f4845ba36bb3d5f69d, codeobj_123df1777f2fd3f4845ba36bb3d5f69d, module_MySQLdb$connections, sizeof(void *)+sizeof(void *) );
    frame_123df1777f2fd3f4845ba36bb3d5f69d = cache_frame_123df1777f2fd3f4845ba36bb3d5f69d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_123df1777f2fd3f4845ba36bb3d5f69d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_123df1777f2fd3f4845ba36bb3d5f69d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_123df1777f2fd3f4845ba36bb3d5f69d->m_frame.f_lineno = 274;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_info );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_info == NULL );
        var_info = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_info );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_info );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_int_arg_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_info );
            tmp_called_instance_2 = var_info;
            frame_123df1777f2fd3f4845ba36bb3d5f69d->m_frame.f_lineno = 276;
            tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_split );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, -1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 276;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_return_value = const_int_0;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123df1777f2fd3f4845ba36bb3d5f69d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_123df1777f2fd3f4845ba36bb3d5f69d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123df1777f2fd3f4845ba36bb3d5f69d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_123df1777f2fd3f4845ba36bb3d5f69d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_123df1777f2fd3f4845ba36bb3d5f69d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_123df1777f2fd3f4845ba36bb3d5f69d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_123df1777f2fd3f4845ba36bb3d5f69d,
        type_description_1,
        par_self,
        var_info
    );


    // Release cached frame.
    if ( frame_123df1777f2fd3f4845ba36bb3d5f69d == cache_frame_123df1777f2fd3f4845ba36bb3d5f69d )
    {
        Py_DECREF( frame_123df1777f2fd3f4845ba36bb3d5f69d );
    }
    cache_frame_123df1777f2fd3f4845ba36bb3d5f69d = NULL;

    assertFrameObject( frame_123df1777f2fd3f4845ba36bb3d5f69d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_10_warning_count );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_info );
    Py_DECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_info );
    var_info = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_10_warning_count );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_11_set_character_set( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_charset = python_pars[ 1 ];
    PyObject *var_py_charset = NULL;
    struct Nuitka_FrameObject *frame_389009da04c5beaf735ddf5261764c80;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_389009da04c5beaf735ddf5261764c80 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_389009da04c5beaf735ddf5261764c80, codeobj_389009da04c5beaf735ddf5261764c80, module_MySQLdb$connections, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_389009da04c5beaf735ddf5261764c80 = cache_frame_389009da04c5beaf735ddf5261764c80;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_389009da04c5beaf735ddf5261764c80 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_389009da04c5beaf735ddf5261764c80 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_charset );
        tmp_compexpr_left_1 = par_charset;
        tmp_compexpr_right_1 = const_tuple_str_plain_utf8mb4_str_plain_utf8mb3_tuple;
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_str_plain_utf8;
            assert( var_py_charset == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_py_charset = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( par_charset );
            tmp_assign_source_2 = par_charset;
            assert( var_py_charset == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_py_charset = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_389009da04c5beaf735ddf5261764c80->m_frame.f_lineno = 289;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_character_set_name );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_charset );
        tmp_compexpr_right_2 = par_charset;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 289;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        // Tried code:
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_object_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_Connection );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Connection );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Connection" );
                exception_tb = NULL;

                exception_lineno = 291;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_type_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT( par_self );
            tmp_object_name_1 = par_self;
            tmp_called_instance_2 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( par_charset );
            tmp_args_element_name_1 = par_charset;
            frame_389009da04c5beaf735ddf5261764c80->m_frame.f_lineno = 291;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_character_set, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_389009da04c5beaf735ddf5261764c80 );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_389009da04c5beaf735ddf5261764c80, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_389009da04c5beaf735ddf5261764c80, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_3 = PyExc_AttributeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_1 = par_self;
                tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__server_version );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 293;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = const_tuple_int_pos_4_int_pos_1_tuple;
                tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 293;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_4;
                }
                else
                {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_raise_type_1;
                    PyObject *tmp_called_name_1;
                    PyObject *tmp_mvar_value_2;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_NotSupportedError );

                    if (unlikely( tmp_mvar_value_2 == NULL ))
                    {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NotSupportedError );
                    }

                    if ( tmp_mvar_value_2 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NotSupportedError" );
                        exception_tb = NULL;

                        exception_lineno = 294;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_1 = tmp_mvar_value_2;
                    frame_389009da04c5beaf735ddf5261764c80->m_frame.f_lineno = 294;
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_b63c3a8ffad1ec50c8fd33c2149a74c4_tuple, 0 ) );

                    if ( tmp_raise_type_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 294;
                        type_description_1 = "ooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 294;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                branch_no_4:;
            }
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_2 = par_self;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_query );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 295;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = const_str_digest_f9a1d0cf9855080f511a5f552cc351c4;
                CHECK_OBJECT( par_charset );
                tmp_right_name_1 = par_charset;
                tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_2 );

                    exception_lineno = 295;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_389009da04c5beaf735ddf5261764c80->m_frame.f_lineno = 295;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_call_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 295;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_2 );
            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_3;
                CHECK_OBJECT( par_self );
                tmp_called_instance_3 = par_self;
                frame_389009da04c5beaf735ddf5261764c80->m_frame.f_lineno = 296;
                tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_store_result );
                if ( tmp_call_result_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 296;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_3 );
            }
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 290;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_389009da04c5beaf735ddf5261764c80->m_frame) frame_389009da04c5beaf735ddf5261764c80->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
            branch_end_3:;
        }
        goto try_end_1;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_11_set_character_set );
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_2:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_py_charset );
        tmp_assattr_name_1 = var_py_charset;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_encoding, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_389009da04c5beaf735ddf5261764c80 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_389009da04c5beaf735ddf5261764c80 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_389009da04c5beaf735ddf5261764c80, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_389009da04c5beaf735ddf5261764c80->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_389009da04c5beaf735ddf5261764c80, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_389009da04c5beaf735ddf5261764c80,
        type_description_1,
        par_self,
        par_charset,
        var_py_charset
    );


    // Release cached frame.
    if ( frame_389009da04c5beaf735ddf5261764c80 == cache_frame_389009da04c5beaf735ddf5261764c80 )
    {
        Py_DECREF( frame_389009da04c5beaf735ddf5261764c80 );
    }
    cache_frame_389009da04c5beaf735ddf5261764c80 = NULL;

    assertFrameObject( frame_389009da04c5beaf735ddf5261764c80 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_11_set_character_set );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_charset );
    Py_DECREF( par_charset );
    par_charset = NULL;

    CHECK_OBJECT( (PyObject *)var_py_charset );
    Py_DECREF( var_py_charset );
    var_py_charset = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_charset );
    Py_DECREF( par_charset );
    par_charset = NULL;

    Py_XDECREF( var_py_charset );
    var_py_charset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_11_set_character_set );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_12_set_sql_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sql_mode = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ed9552e2ee006f2aeb74f226dd16a4f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ed9552e2ee006f2aeb74f226dd16a4f1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ed9552e2ee006f2aeb74f226dd16a4f1, codeobj_ed9552e2ee006f2aeb74f226dd16a4f1, module_MySQLdb$connections, sizeof(void *)+sizeof(void *) );
    frame_ed9552e2ee006f2aeb74f226dd16a4f1 = cache_frame_ed9552e2ee006f2aeb74f226dd16a4f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed9552e2ee006f2aeb74f226dd16a4f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed9552e2ee006f2aeb74f226dd16a4f1 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__server_version );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_4_int_pos_1_tuple;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_NotSupportedError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NotSupportedError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "NotSupportedError" );
                exception_tb = NULL;

                exception_lineno = 303;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_ed9552e2ee006f2aeb74f226dd16a4f1->m_frame.f_lineno = 303;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_582b09a86dd9d12e29ae74f6d5dcab13_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 303;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 303;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_query );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_d91a8522b823a6f8ef38dbb8626da564;
        CHECK_OBJECT( par_sql_mode );
        tmp_right_name_1 = par_sql_mode;
        tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ed9552e2ee006f2aeb74f226dd16a4f1->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_ed9552e2ee006f2aeb74f226dd16a4f1->m_frame.f_lineno = 305;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_store_result );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed9552e2ee006f2aeb74f226dd16a4f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed9552e2ee006f2aeb74f226dd16a4f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed9552e2ee006f2aeb74f226dd16a4f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed9552e2ee006f2aeb74f226dd16a4f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed9552e2ee006f2aeb74f226dd16a4f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed9552e2ee006f2aeb74f226dd16a4f1,
        type_description_1,
        par_self,
        par_sql_mode
    );


    // Release cached frame.
    if ( frame_ed9552e2ee006f2aeb74f226dd16a4f1 == cache_frame_ed9552e2ee006f2aeb74f226dd16a4f1 )
    {
        Py_DECREF( frame_ed9552e2ee006f2aeb74f226dd16a4f1 );
    }
    cache_frame_ed9552e2ee006f2aeb74f226dd16a4f1 = NULL;

    assertFrameObject( frame_ed9552e2ee006f2aeb74f226dd16a4f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_12_set_sql_mode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sql_mode );
    Py_DECREF( par_sql_mode );
    par_sql_mode = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sql_mode );
    Py_DECREF( par_sql_mode );
    par_sql_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_12_set_sql_mode );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$connections$$$function_13_show_warnings( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_r = NULL;
    PyObject *var_warnings = NULL;
    struct Nuitka_FrameObject *frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54, codeobj_a3ff6dd2dcf7f21e785e6ed8a28b3d54, module_MySQLdb$connections, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 = cache_frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__server_version );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_4_int_pos_1_tuple;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = const_tuple_empty;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54->m_frame.f_lineno = 313;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_query, &PyTuple_GET_ITEM( const_tuple_str_digest_855697e5a9c181770e960226dfe94f0a_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54->m_frame.f_lineno = 314;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_store_result );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_r );
        tmp_called_instance_3 = var_r;
        frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54->m_frame.f_lineno = 315;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_fetch_row, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_warnings == NULL );
        var_warnings = tmp_assign_source_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54,
        type_description_1,
        par_self,
        var_r,
        var_warnings
    );


    // Release cached frame.
    if ( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 == cache_frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 )
    {
        Py_DECREF( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 );
    }
    cache_frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 = NULL;

    assertFrameObject( frame_a3ff6dd2dcf7f21e785e6ed8a28b3d54 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_warnings );
    tmp_return_value = var_warnings;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_13_show_warnings );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$connections$$$function_13_show_warnings );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_10_warning_count(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_10_warning_count,
        const_str_plain_warning_count,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_123df1777f2fd3f4845ba36bb3d5f69d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_5b127335f99076ae6aca5fe46563ba08,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_11_set_character_set(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_11_set_character_set,
        const_str_plain_set_character_set,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_389009da04c5beaf735ddf5261764c80,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_f8f69981ab93cb841c815b9efeb4f201,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_12_set_sql_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_12_set_sql_mode,
        const_str_plain_set_sql_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ed9552e2ee006f2aeb74f226dd16a4f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_8f04d2c1e11f0c07c93c40e1736aa360,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_13_show_warnings(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_13_show_warnings,
        const_str_plain_show_warnings,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a3ff6dd2dcf7f21e785e6ed8a28b3d54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_d2dd7bf1dd924b08df033b44dccc9c07,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_1_numeric_part(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_1_numeric_part,
        const_str_plain_numeric_part,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f96cfb4864316eb9db380ff4ece5ae66,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_ea8f0dbd1013a2247a6866ea93cbed10,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6021f74c4ea5b36899a2a6ea16a82561,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_55ab9cb309d3461eaa47644fe092db73,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_2___init__$$$function_1_unicode_literal( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_2___init__$$$function_1_unicode_literal,
        const_str_plain_unicode_literal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dfa1bb2f1b72b835bca2ebfc3868a2d7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_3_autocommit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_3_autocommit,
        const_str_plain_autocommit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dfdabc4a27c752cffd329c46596169ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_4_cursor( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_4_cursor,
        const_str_plain_cursor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_facc0644887467695d64dafaf4ad3753,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_910b47dc8dd817b6e36365f889ff93ac,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_5_query(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_5_query,
        const_str_plain_query,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c772908974b73fc697cccec4dce56b6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_6__bytes_literal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_6__bytes_literal,
        const_str_plain__bytes_literal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5e9591353d61ef65525420bcf0900a06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_7__tuple_literal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_7__tuple_literal,
        const_str_plain__tuple_literal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_29892fd061372c94db48c95de9adcffc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_8_literal(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_8_literal,
        const_str_plain_literal,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3823bb3c0108d70fad5fb88a3d15c77e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_f8030a9889ab33c1d1b872cff5b8a620,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$connections$$$function_9_begin(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$connections$$$function_9_begin,
        const_str_plain_begin,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ee14171492189be4cf0e8b3d48d7997b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$connections,
        const_str_digest_fdf226b08f724ba31038a39ab6fa7ffb,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_MySQLdb$connections =
{
    PyModuleDef_HEAD_INIT,
    "MySQLdb.connections",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( MySQLdb$connections )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_MySQLdb$connections );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("MySQLdb.connections: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.connections: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.connections: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initMySQLdb$connections" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_MySQLdb$connections = Py_InitModule4(
        "MySQLdb.connections",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_MySQLdb$connections = PyModule_Create( &mdef_MySQLdb$connections );
#endif

    moduledict_MySQLdb$connections = MODULE_DICT( module_MySQLdb$connections );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_MySQLdb$connections,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_MySQLdb$connections,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$connections,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$connections,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_MySQLdb$connections );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e16b0126d837ce7ad3b9f1fbd3704965, module_MySQLdb$connections );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_select_metaclass_1__base = NULL;
    struct Nuitka_FrameObject *frame_0f8a6e49aa2a22a21a86d849190aee87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_MySQLdb$connections_37 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_2dbb335d5d477ca0fb8af5edd93abbb6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_1027c9cda199276403fc3ac0035b1bd5;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_659fcadd0cd0fd4c0fd90be3bd70d89c;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0f8a6e49aa2a22a21a86d849190aee87 = MAKE_MODULE_FRAME( codeobj_0f8a6e49aa2a22a21a86d849190aee87, module_MySQLdb$connections );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0f8a6e49aa2a22a21a86d849190aee87 );
    assert( Py_REFCNT( frame_0f8a6e49aa2a22a21a86d849190aee87 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame.f_lineno = 7;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_MySQLdb;
        tmp_globals_name_3 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_cursors_str_plain__mysql_tuple;
        frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame.f_lineno = 10;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_cursors );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_cursors, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__mysql );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain__mysql, tmp_assign_source_7 );
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_digest_6e1b9039a1198642c91d743e9550d006;
        tmp_globals_name_4 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_unicode_str_plain_PY2_tuple;
        frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame.f_lineno = 11;
        tmp_assign_source_8 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_3 = tmp_import_from_2__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unicode );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_4 = tmp_import_from_2__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_PY2 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_10 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = const_str_digest_51cafa63df0dba009586a31c534cfea1;
        tmp_globals_name_5 = (PyObject *)moduledict_MySQLdb$connections;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_cf8d71264ab2fa0bf4b6fd51a92c19f8_tuple;
        frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame.f_lineno = 12;
        tmp_assign_source_11 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_5 = tmp_import_from_3__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Warning );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_Warning, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_6 = tmp_import_from_3__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Error );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_Error, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_7 = tmp_import_from_3__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_InterfaceError );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_InterfaceError, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_8 = tmp_import_from_3__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DataError );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_DataError, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_9 = tmp_import_from_3__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_DatabaseError );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_DatabaseError, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_OperationalError );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_OperationalError, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_IntegrityError );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_IntegrityError, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_12 = tmp_import_from_3__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_InternalError );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_InternalError, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_13 = tmp_import_from_3__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_NotSupportedError );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_NotSupportedError, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_14 = tmp_import_from_3__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ProgrammingError );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_ProgrammingError, tmp_assign_source_21 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame.f_lineno = 19;
        tmp_assign_source_22 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_c34c1ea87f58a2801f710f4a0355fd91_tuple, 0 ) );

        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_re_numeric_part, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_FUNCTION_MySQLdb$connections$$$function_1_numeric_part(  );



        UPDATE_STRING_DICT1( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_numeric_part, tmp_assign_source_23 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain__mysql );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__mysql );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_mysql" );
            exception_tb = NULL;

            exception_lineno = 37;

            goto try_except_handler_4;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_4;
        }
        tmp_assign_source_24 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_assign_source_24, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_MySQLdb$connections_37 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_e16b0126d837ce7ad3b9f1fbd3704965;
        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_b128e84012a0ed9724b86ba88b6e5906;
        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_2dbb335d5d477ca0fb8af5edd93abbb6_2, codeobj_2dbb335d5d477ca0fb8af5edd93abbb6, module_MySQLdb$connections, 0 );
        frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 = cache_frame_2dbb335d5d477ca0fb8af5edd93abbb6_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_cursors );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cursors );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "cursors" );
                exception_tb = NULL;

                exception_lineno = 40;

                goto frame_exception_exit_2;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Cursor );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_default_cursor, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_2___init__(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_3_autocommit(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_autocommit, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_4_cursor( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_cursor, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_5_query(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_query, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_6__bytes_literal(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain__bytes_literal, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_7__tuple_literal(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain__tuple_literal, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_8_literal(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_literal, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_9_begin(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_begin, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_attribute_name_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain__mysql );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__mysql );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_mysql" );
                exception_tb = NULL;

                exception_lineno = 269;

                goto frame_exception_exit_2;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_connection );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;

                goto frame_exception_exit_2;
            }
            tmp_attribute_name_1 = const_str_plain_warning_count;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_3, tmp_attribute_name_1 );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;

                goto frame_exception_exit_2;
            }
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;

                goto frame_exception_exit_2;
            }
            tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_1;
            }
            else
            {
                goto branch_no_1;
            }
            branch_yes_1:;
            tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_10_warning_count(  );



            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_warning_count, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
            branch_no_1:;
        }
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_11_set_character_set(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_set_character_set, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_12_set_sql_mode(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_set_sql_mode, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$connections$$$function_13_show_warnings(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_show_warnings, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_Warning );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Warning );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "Warning" );
                exception_tb = NULL;

                exception_lineno = 318;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_5;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_Warning, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 318;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_Error );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Error );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "Error" );
                exception_tb = NULL;

                exception_lineno = 319;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_6;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_Error, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_InterfaceError );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InterfaceError );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "InterfaceError" );
                exception_tb = NULL;

                exception_lineno = 320;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_7;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_InterfaceError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_DatabaseError );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DatabaseError );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DatabaseError" );
                exception_tb = NULL;

                exception_lineno = 321;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_8;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_DatabaseError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_DataError );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DataError );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DataError" );
                exception_tb = NULL;

                exception_lineno = 322;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_9;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_DataError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_10;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_OperationalError );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OperationalError );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "OperationalError" );
                exception_tb = NULL;

                exception_lineno = 323;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_10;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_OperationalError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 323;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_11;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_IntegrityError );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IntegrityError );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "IntegrityError" );
                exception_tb = NULL;

                exception_lineno = 324;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_11;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_IntegrityError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 324;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_12;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_InternalError );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InternalError );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "InternalError" );
                exception_tb = NULL;

                exception_lineno = 325;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_12;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_InternalError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 325;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_ProgrammingError );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProgrammingError );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "ProgrammingError" );
                exception_tb = NULL;

                exception_lineno = 326;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_13;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_ProgrammingError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 326;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_NotSupportedError );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NotSupportedError );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "NotSupportedError" );
                exception_tb = NULL;

                exception_lineno = 327;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_14;
            tmp_res = PyDict_SetItem( locals_MySQLdb$connections_37, const_str_plain_NotSupportedError, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 327;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_2dbb335d5d477ca0fb8af5edd93abbb6_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_2dbb335d5d477ca0fb8af5edd93abbb6_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2dbb335d5d477ca0fb8af5edd93abbb6_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 == cache_frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 )
        {
            Py_DECREF( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 );
        }
        cache_frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 = NULL;

        assertFrameObject( frame_2dbb335d5d477ca0fb8af5edd93abbb6_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        tmp_assign_source_25 = locals_MySQLdb$connections_37;
        Py_INCREF( tmp_assign_source_25 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_MySQLdb$connections_37 );
        locals_MySQLdb$connections_37 = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_MySQLdb$connections_37 );
        locals_MySQLdb$connections_37 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 37;
        goto try_except_handler_4;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_dict;
        tmp_key_name_2 = const_str_plain___metaclass__;
        tmp_assign_source_26 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_subscribed_name_1 = tmp_class_creation_1__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_27 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

                goto try_except_handler_4;
            }
            assert( tmp_select_metaclass_1__base == NULL );
            tmp_select_metaclass_1__base = tmp_assign_source_27;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_source_name_5 = tmp_select_metaclass_1__base;
            tmp_assign_source_26 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 37;

                goto try_except_handler_7;
            }
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );
            CHECK_OBJECT( tmp_select_metaclass_1__base );
            tmp_type_arg_1 = tmp_select_metaclass_1__base;
            tmp_assign_source_26 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_26 == NULL) );
            goto try_return_handler_6;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_1__base );
        Py_DECREF( tmp_select_metaclass_1__base );
        tmp_select_metaclass_1__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$connections );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_Connection;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_args_element_name_2 = tmp_class_creation_1__bases;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_28;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f8a6e49aa2a22a21a86d849190aee87 );
#endif
    popFrameStack();

    assertFrameObject( frame_0f8a6e49aa2a22a21a86d849190aee87 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f8a6e49aa2a22a21a86d849190aee87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f8a6e49aa2a22a21a86d849190aee87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f8a6e49aa2a22a21a86d849190aee87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f8a6e49aa2a22a21a86d849190aee87, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_29 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain_Connection, tmp_assign_source_29 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_MySQLdb$connections, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_MySQLdb$connections );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
