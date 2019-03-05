/* Generated code for Python module 'MySQLdb.cursors'
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

/* The "_module_MySQLdb$cursors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_MySQLdb$cursors;
PyDictObject *moduledict_MySQLdb$cursors;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_partial;
static PyObject *const_str_plain_CursorDictRowsMixIn;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_88a41bdc523e6426722c322c9f8503ae;
static PyObject *const_str_plain_exc_info;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_plain_self_str_plain_row_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_value_str_plain_mode_str_plain_r_tuple;
static PyObject *const_str_plain_q_prefix;
extern PyObject *const_str_plain_query;
static PyObject *const_tuple_str_plain_relative_tuple;
extern PyObject *const_str_plain_MySQLError;
static PyObject *const_str_digest_1061690fab75f5b432410a1bb7a53361;
extern PyObject *const_tuple_type_tuple_type_list_tuple;
static PyObject *const_str_digest_330003ec112f68bf16e884df92ffe147;
static PyObject *const_str_plain__rows;
static PyObject *const_str_plain_nargs;
static PyObject *const_str_plain_insert_id;
static PyObject *const_str_plain__result;
static PyObject *const_str_plain__executed;
extern PyObject *const_str_plain_IntegrityError;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_plain_ensure_bytes;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain_next;
static PyObject *const_str_plain_IGNORECASE;
static PyObject *const_str_plain__query;
static PyObject *const_tuple_str_plain_self_str_plain_db_str_plain_nr_tuple;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_self_str_plain_con_tuple;
static PyObject *const_str_digest_e8039285d89e23d5740e7d2599273b21;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_cea0698974f34c8311a80e2819252d71;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_ProgrammingError;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_beb5da4d59517a0c09f9a0b24cdc2812;
static PyObject *const_str_digest_c1a55c4f6deab82eacb306c49345dc55;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_RE_INSERT_VALUES;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_fetchone;
static PyObject *const_str_plain_arraysize;
extern PyObject *const_str_plain___iter__;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
static PyObject *const_str_digest_c50201d3a8f64628aae4ab3f4e8a836e;
extern PyObject *const_str_plain_messages;
static PyObject *const_str_plain_conn;
static PyObject *const_str_plain_setoutputsizes;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_OperationalError;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_df167c3ce591a1a90c3d1abaaaded814;
static PyObject *const_str_digest_18150e5208b041ca42dcfd8091102432;
static PyObject *const_tuple_str_plain_self_str_plain_db_str_plain_result_tuple;
static PyObject *const_str_plain___next__;
static PyObject *const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple;
static PyObject *const_str_digest_abef224fef2077763f6f3d4753e94ed2;
static PyObject *const_str_plain_describe;
static PyObject *const_tuple_tuple_empty_tuple;
extern PyObject *const_tuple_cf8d71264ab2fa0bf4b6fd51a92c19f8_tuple;
extern PyObject *const_str_plain_Cursor;
static PyObject *const_str_digest_4ffe38d802972bf1299581fe34e3afb0;
static PyObject *const_tuple_str_plain_self_str_plain_connection_tuple;
static PyObject *const_str_plain_lastrowid;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_tuple_d3b664b8f26723860b58c79f039236f2_tuple;
extern PyObject *const_str_plain_DataError;
static PyObject *const_str_plain_relative;
static PyObject *const_str_plain_fetchall;
static PyObject *const_str_plain_q_postfix;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_str_plain_self_str_plain_exc_info_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_Warning;
extern PyObject *const_str_plain_db;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_InterfaceError;
static PyObject *const_str_plain__fetch_row;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_group;
static PyObject *const_str_plain_scroll;
static PyObject *const_tuple_str_digest_1859d7ee3ac212934ea546680a20c778_tuple;
static PyObject *const_str_plain_rowcount;
static PyObject *const_str_digest_1859d7ee3ac212934ea546680a20c778;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_tuple_str_digest_22bfd1420d03e482048faead89371a10_tuple;
static PyObject *const_str_plain_absolute;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_f0309b16fcc58a6589722aea7080eb76;
static PyObject *const_str_digest_176a8e7adff03e191486df6134161ad5;
static PyObject *const_str_digest_7de53d316482b0467fdc230ba89192be;
static PyObject *const_str_plain_max_stmt_length;
static PyObject *const_str_plain_rstrip;
static PyObject *const_str_digest_6e376725284b737a764843e457c5af73;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_InternalError;
extern PyObject *const_str_chr_40;
static PyObject *const_str_chr_41;
static PyObject *const_tuple_str_plain_unicode_tuple;
static PyObject *const_str_plain__do_get_result;
static PyObject *const_str_plain__check_executed;
static PyObject *const_str_plain_enumerate;
static PyObject *const_tuple_str_plain_self_str_plain_result_tuple;
static PyObject *const_str_plain_procname;
extern PyObject *const_str_plain_join;
static PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
extern PyObject *const_str_plain_str;
static PyObject *const_str_digest_494e592af6a7d8894f8b7fa923fb4561;
extern PyObject *const_str_plain_bytearray;
static PyObject *const_str_plain_description_flags;
static PyObject *const_str_plain_values;
static PyObject *const_str_plain__last_executed;
static PyObject *const_str_digest_383daacf8d1b19eefd8c2e9825bc141a;
extern PyObject *const_str_plain_store_result;
static PyObject *const_str_digest_b61a3c6a32739ad7ca266897a0f7b651;
static PyObject *const_str_plain__escape_args;
static PyObject *const_str_plain_BaseCursor;
static PyObject *const_str_plain_prefix;
static PyObject *const_str_plain_functools;
static PyObject *const_str_digest_712cff5c5b5b9448f70c0b5297a04dca;
static PyObject *const_str_plain_affected_rows;
static PyObject *const_str_digest_536cd0495e4d1731daccc1286d48ecd4;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_6afbabdc970df406e659701032fd5352;
static PyObject *const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple;
extern PyObject *const_str_plain___enter__;
static PyObject *const_tuple_str_plain_partial_tuple;
static PyObject *const_str_plain_SSCursor;
static PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_plain_result;
extern PyObject *const_str_plain_literal;
static PyObject *const_str_plain_sql;
extern PyObject *const_tuple_type_str_type_bytearray_tuple;
extern PyObject *const_str_plain_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_r_tuple;
extern PyObject *const_str_plain_NotSupportedError;
static PyObject *const_str_plain_end;
static PyObject *const_str_plain_fetchmany;
static PyObject *const_str_digest_e271e1145a5e63f3bd9514ddb53decb1;
extern PyObject *const_str_plain_m;
static PyObject *const_str_digest_f03a65e1e7485a2e4ab779313a9d1e06;
static PyObject *const_str_plain_setinputsizes;
static PyObject *const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_callproc;
static PyObject *const_str_plain__get_result;
static PyObject *const_str_plain_use_result;
extern PyObject *const_str_plain_fmt;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_execute;
static PyObject *const_str_plain_nr;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_q;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_match;
static PyObject *const_str_plain__warnings;
static PyObject *const_str_plain_con;
static PyObject *const_str_digest_37394c3211735ea0986d5b0d477c3f17;
static PyObject *const_str_digest_a3c6ae7cf447025c5894c65199db9bb0;
static PyObject *const_str_plain__fetch_type;
static PyObject *const_str_plain_q_values;
static PyObject *const_str_plain_postfix;
extern PyObject *const_str_plain_escape;
static PyObject *const_dict_877a77047ad2bc410744261f070dd574;
static PyObject *const_str_plain_item;
static PyObject *const_str_digest_9af57228efcb185f135bd455a60c6685;
static PyObject *const_tuple_str_plain_x_str_plain_ensure_bytes_str_plain_encoding_tuple;
static PyObject *const_str_digest_511ae8841b7b15236ee0ffa5a7a5ad38;
extern PyObject *const_str_plain_Error;
static PyObject *const_str_plain_SSDictCursor;
static PyObject *const_str_digest_22bfd1420d03e482048faead89371a10;
static PyObject *const_str_plain_DOTALL;
extern PyObject *const_str_plain_fetch_row;
static PyObject *const_str_digest_26652b588eac6f5469699bf2e7d7dc79;
static PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_1523e369629867d1d604d91a65e217dd;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_CursorTupleRowsMixIn;
static PyObject *const_str_plain_CursorUseResultMixIn;
static PyObject *const_str_plain_size;
static PyObject *const_str_plain_DictCursor;
extern PyObject *const_str_plain_index;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_field_flags;
static PyObject *const_tuple_4d551e6f65af6268d1d2249b1c699fe9_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_end_str_plain_result_tuple;
static PyObject *const_str_digest_b1860af85599757ceb0e191b69d925b3;
static PyObject *const_str_plain_row;
static PyObject *const_tuple_7311ece032bad453cd45c749d81a9eed_tuple;
static PyObject *const_str_plain_CursorStoreResultMixIn;
static PyObject *const_str_plain_next_result;
static PyObject *const_str_plain_description;
static PyObject *const_str_plain_rows;
static PyObject *const_str_plain_executemany;
extern PyObject *const_str_empty;
extern PyObject *const_int_pos_65536;
static PyObject *const_tuple_bebf5d71635e831d547dda317504bbfc_tuple;
static PyObject *const_str_plain__get_db;
extern PyObject *const_str_plain_DatabaseError;
static PyObject *const_tuple_str_plain_self_str_plain_size_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_digest_2925b032e7dd185c277d920801a0f13c;
static PyObject *const_str_plain_nextset;
extern PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_q_str_plain_db_tuple;
static PyObject *const_str_plain_rownumber;
static PyObject *const_str_plain__do_execute_many;
static PyObject *const_dict_872fa47b80d99002b1a72b3559cecf5e;
static PyObject *const_str_plain_print_function;
static PyObject *const_str_plain__exceptions;
static PyObject *const_tuple_484a64a7e7d850749f5b7749dd587637_tuple;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__post_get_result;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_partial = UNSTREAM_STRING( &constant_bin[ 34291 ], 7, 1 );
    const_str_plain_CursorDictRowsMixIn = UNSTREAM_STRING( &constant_bin[ 34298 ], 19, 1 );
    const_str_digest_88a41bdc523e6426722c322c9f8503ae = UNSTREAM_STRING( &constant_bin[ 34317 ], 101, 0 );
    const_str_plain_exc_info = UNSTREAM_STRING( &constant_bin[ 34418 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_row_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_row_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_row = UNSTREAM_STRING( &constant_bin[ 34353 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_row_tuple, 1, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    const_tuple_str_plain_self_str_plain_value_str_plain_mode_str_plain_r_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_mode_str_plain_r_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_mode_str_plain_r_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_mode_str_plain_r_tuple, 2, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_mode_str_plain_r_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_q_prefix = UNSTREAM_STRING( &constant_bin[ 34426 ], 8, 1 );
    const_tuple_str_plain_relative_tuple = PyTuple_New( 1 );
    const_str_plain_relative = UNSTREAM_STRING( &constant_bin[ 34434 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_relative_tuple, 0, const_str_plain_relative ); Py_INCREF( const_str_plain_relative );
    const_str_digest_1061690fab75f5b432410a1bb7a53361 = UNSTREAM_STRING( &constant_bin[ 34442 ], 121, 0 );
    const_str_digest_330003ec112f68bf16e884df92ffe147 = UNSTREAM_STRING( &constant_bin[ 34563 ], 101, 0 );
    const_str_plain__rows = UNSTREAM_STRING( &constant_bin[ 34664 ], 5, 1 );
    const_str_plain_nargs = UNSTREAM_STRING( &constant_bin[ 34669 ], 5, 1 );
    const_str_plain_insert_id = UNSTREAM_STRING( &constant_bin[ 34674 ], 9, 1 );
    const_str_plain__result = UNSTREAM_STRING( &constant_bin[ 34683 ], 7, 1 );
    const_str_plain__executed = UNSTREAM_STRING( &constant_bin[ 34690 ], 9, 1 );
    const_str_plain_ensure_bytes = UNSTREAM_STRING( &constant_bin[ 34699 ], 12, 1 );
    const_str_plain_next = UNSTREAM_STRING( &constant_bin[ 6753 ], 4, 1 );
    const_str_plain_IGNORECASE = UNSTREAM_STRING( &constant_bin[ 34711 ], 10, 1 );
    const_str_plain__query = UNSTREAM_STRING( &constant_bin[ 34721 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_db_str_plain_nr_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_db_str_plain_nr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_db_str_plain_nr_tuple, 1, const_str_plain_db ); Py_INCREF( const_str_plain_db );
    const_str_plain_nr = UNSTREAM_STRING( &constant_bin[ 34727 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_db_str_plain_nr_tuple, 2, const_str_plain_nr ); Py_INCREF( const_str_plain_nr );
    const_tuple_str_plain_self_str_plain_con_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_con_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_con = UNSTREAM_STRING( &constant_bin[ 3141 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_con_tuple, 1, const_str_plain_con ); Py_INCREF( const_str_plain_con );
    const_str_digest_e8039285d89e23d5740e7d2599273b21 = UNSTREAM_STRING( &constant_bin[ 34729 ], 1311, 0 );
    const_str_digest_cea0698974f34c8311a80e2819252d71 = UNSTREAM_STRING( &constant_bin[ 36040 ], 393, 0 );
    const_str_digest_beb5da4d59517a0c09f9a0b24cdc2812 = UNSTREAM_STRING( &constant_bin[ 22119 ], 2, 0 );
    const_str_digest_c1a55c4f6deab82eacb306c49345dc55 = UNSTREAM_STRING( &constant_bin[ 36433 ], 270, 0 );
    const_str_plain_RE_INSERT_VALUES = UNSTREAM_STRING( &constant_bin[ 36703 ], 16, 1 );
    const_str_plain_arraysize = UNSTREAM_STRING( &constant_bin[ 36719 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_r_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_digest_c50201d3a8f64628aae4ab3f4e8a836e = UNSTREAM_STRING( &constant_bin[ 36728 ], 258, 0 );
    const_str_plain_conn = UNSTREAM_STRING( &constant_bin[ 15133 ], 4, 1 );
    const_str_plain_setoutputsizes = UNSTREAM_STRING( &constant_bin[ 36986 ], 14, 1 );
    const_str_digest_df167c3ce591a1a90c3d1abaaaded814 = UNSTREAM_STRING( &constant_bin[ 37000 ], 33, 0 );
    const_str_digest_18150e5208b041ca42dcfd8091102432 = UNSTREAM_STRING( &constant_bin[ 37033 ], 6, 0 );
    const_tuple_str_plain_self_str_plain_db_str_plain_result_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_db_str_plain_result_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_db_str_plain_result_tuple, 1, const_str_plain_db ); Py_INCREF( const_str_plain_db );
    const_str_plain_result = UNSTREAM_STRING( &constant_bin[ 13662 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_db_str_plain_result_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain___next__ = UNSTREAM_STRING( &constant_bin[ 37039 ], 8, 1 );
    const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple, 2, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple, 3, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple, 4, const_str_plain_literal ); Py_INCREF( const_str_plain_literal );
    PyTuple_SET_ITEM( const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple, 5, const_str_plain_ensure_bytes ); Py_INCREF( const_str_plain_ensure_bytes );
    const_str_digest_abef224fef2077763f6f3d4753e94ed2 = UNSTREAM_STRING( &constant_bin[ 37047 ], 7, 0 );
    const_str_plain_describe = UNSTREAM_STRING( &constant_bin[ 3881 ], 8, 1 );
    const_tuple_tuple_empty_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_tuple_empty_tuple, 0, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_4ffe38d802972bf1299581fe34e3afb0 = UNSTREAM_STRING( &constant_bin[ 37054 ], 110, 0 );
    const_tuple_str_plain_self_str_plain_connection_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_connection_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_connection_tuple, 1, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    const_str_plain_lastrowid = UNSTREAM_STRING( &constant_bin[ 37164 ], 9, 1 );
    const_tuple_d3b664b8f26723860b58c79f039236f2_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 1, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 3, const_str_plain_db ); Py_INCREF( const_str_plain_db );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 4, const_str_plain_nargs ); Py_INCREF( const_str_plain_nargs );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 5, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    const_str_plain_item = UNSTREAM_STRING( &constant_bin[ 19440 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 6, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 7, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 8, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_fetchall = UNSTREAM_STRING( &constant_bin[ 37173 ], 8, 1 );
    const_str_plain_q_postfix = UNSTREAM_STRING( &constant_bin[ 37181 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_exc_info_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_exc_info_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_exc_info_tuple, 1, const_str_plain_exc_info ); Py_INCREF( const_str_plain_exc_info );
    const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 0, const_str_plain_MySQLError ); Py_INCREF( const_str_plain_MySQLError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 1, const_str_plain_Warning ); Py_INCREF( const_str_plain_Warning );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 2, const_str_plain_Error ); Py_INCREF( const_str_plain_Error );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 3, const_str_plain_InterfaceError ); Py_INCREF( const_str_plain_InterfaceError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 4, const_str_plain_DatabaseError ); Py_INCREF( const_str_plain_DatabaseError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 5, const_str_plain_DataError ); Py_INCREF( const_str_plain_DataError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 6, const_str_plain_OperationalError ); Py_INCREF( const_str_plain_OperationalError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 7, const_str_plain_IntegrityError ); Py_INCREF( const_str_plain_IntegrityError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 8, const_str_plain_InternalError ); Py_INCREF( const_str_plain_InternalError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 9, const_str_plain_ProgrammingError ); Py_INCREF( const_str_plain_ProgrammingError );
    PyTuple_SET_ITEM( const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple, 10, const_str_plain_NotSupportedError ); Py_INCREF( const_str_plain_NotSupportedError );
    const_str_plain__fetch_row = UNSTREAM_STRING( &constant_bin[ 37190 ], 10, 1 );
    const_str_plain_scroll = UNSTREAM_STRING( &constant_bin[ 37200 ], 6, 1 );
    const_tuple_str_digest_1859d7ee3ac212934ea546680a20c778_tuple = PyTuple_New( 1 );
    const_str_digest_1859d7ee3ac212934ea546680a20c778 = UNSTREAM_STRING( &constant_bin[ 37206 ], 13, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1859d7ee3ac212934ea546680a20c778_tuple, 0, const_str_digest_1859d7ee3ac212934ea546680a20c778 ); Py_INCREF( const_str_digest_1859d7ee3ac212934ea546680a20c778 );
    const_str_plain_rowcount = UNSTREAM_STRING( &constant_bin[ 37219 ], 8, 1 );
    const_tuple_str_digest_22bfd1420d03e482048faead89371a10_tuple = PyTuple_New( 1 );
    const_str_digest_22bfd1420d03e482048faead89371a10 = UNSTREAM_STRING( &constant_bin[ 37227 ], 15, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_22bfd1420d03e482048faead89371a10_tuple, 0, const_str_digest_22bfd1420d03e482048faead89371a10 ); Py_INCREF( const_str_digest_22bfd1420d03e482048faead89371a10 );
    const_str_plain_absolute = UNSTREAM_STRING( &constant_bin[ 36643 ], 8, 1 );
    const_str_digest_f0309b16fcc58a6589722aea7080eb76 = UNSTREAM_STRING( &constant_bin[ 37242 ], 119, 0 );
    const_str_digest_176a8e7adff03e191486df6134161ad5 = UNSTREAM_STRING( &constant_bin[ 37361 ], 93, 0 );
    const_str_digest_7de53d316482b0467fdc230ba89192be = UNSTREAM_STRING( &constant_bin[ 37454 ], 54, 0 );
    const_str_plain_max_stmt_length = UNSTREAM_STRING( &constant_bin[ 37508 ], 15, 1 );
    const_str_plain_rstrip = UNSTREAM_STRING( &constant_bin[ 37523 ], 6, 1 );
    const_str_digest_6e376725284b737a764843e457c5af73 = UNSTREAM_STRING( &constant_bin[ 37529 ], 6, 0 );
    const_str_chr_41 = UNSTREAM_CHAR( 41, 0 );
    const_tuple_str_plain_unicode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unicode_tuple, 0, const_str_plain_unicode ); Py_INCREF( const_str_plain_unicode );
    const_str_plain__do_get_result = UNSTREAM_STRING( &constant_bin[ 37535 ], 14, 1 );
    const_str_plain__check_executed = UNSTREAM_STRING( &constant_bin[ 37549 ], 15, 1 );
    const_str_plain_enumerate = UNSTREAM_STRING( &constant_bin[ 37564 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_result_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_result_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_result_tuple, 1, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_procname = UNSTREAM_STRING( &constant_bin[ 34754 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_args_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_digest_494e592af6a7d8894f8b7fa923fb4561 = UNSTREAM_STRING( &constant_bin[ 37573 ], 95, 0 );
    const_str_plain_description_flags = UNSTREAM_STRING( &constant_bin[ 37668 ], 17, 1 );
    const_str_plain_values = UNSTREAM_STRING( &constant_bin[ 28419 ], 6, 1 );
    const_str_plain__last_executed = UNSTREAM_STRING( &constant_bin[ 37685 ], 14, 1 );
    const_str_digest_383daacf8d1b19eefd8c2e9825bc141a = UNSTREAM_STRING( &constant_bin[ 37699 ], 520, 0 );
    const_str_digest_b61a3c6a32739ad7ca266897a0f7b651 = UNSTREAM_STRING( &constant_bin[ 38219 ], 11, 0 );
    const_str_plain__escape_args = UNSTREAM_STRING( &constant_bin[ 38230 ], 12, 1 );
    const_str_plain_BaseCursor = UNSTREAM_STRING( &constant_bin[ 38242 ], 10, 1 );
    const_str_plain_prefix = UNSTREAM_STRING( &constant_bin[ 6534 ], 6, 1 );
    const_str_plain_functools = UNSTREAM_STRING( &constant_bin[ 38252 ], 9, 1 );
    const_str_digest_712cff5c5b5b9448f70c0b5297a04dca = UNSTREAM_STRING( &constant_bin[ 37361 ], 37, 0 );
    const_str_plain_affected_rows = UNSTREAM_STRING( &constant_bin[ 38261 ], 13, 1 );
    const_str_digest_536cd0495e4d1731daccc1286d48ecd4 = UNSTREAM_STRING( &constant_bin[ 38274 ], 286, 0 );
    const_str_digest_6afbabdc970df406e659701032fd5352 = UNSTREAM_STRING( &constant_bin[ 38560 ], 78, 0 );
    const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 1, const_str_plain_procname ); Py_INCREF( const_str_plain_procname );
    PyTuple_SET_ITEM( const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 4, const_str_plain_db ); Py_INCREF( const_str_plain_db );
    const_str_plain_q = UNSTREAM_CHAR( 113, 1 );
    PyTuple_SET_ITEM( const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 5, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 6, const_str_plain_fmt ); Py_INCREF( const_str_plain_fmt );
    const_tuple_str_plain_partial_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_partial_tuple, 0, const_str_plain_partial ); Py_INCREF( const_str_plain_partial );
    const_str_plain_SSCursor = UNSTREAM_STRING( &constant_bin[ 38638 ], 8, 1 );
    const_tuple_int_pos_3_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_str_plain_sql = UNSTREAM_STRING( &constant_bin[ 15995 ], 3, 1 );
    const_tuple_str_plain_self_str_plain_size_str_plain_r_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_r_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_size = UNSTREAM_STRING( &constant_bin[ 6380 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_r_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_r_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_end = UNSTREAM_STRING( &constant_bin[ 3577 ], 3, 1 );
    const_str_plain_fetchmany = UNSTREAM_STRING( &constant_bin[ 38192 ], 9, 1 );
    const_str_digest_e271e1145a5e63f3bd9514ddb53decb1 = UNSTREAM_STRING( &constant_bin[ 38646 ], 22, 0 );
    const_str_digest_f03a65e1e7485a2e4ab779313a9d1e06 = UNSTREAM_STRING( &constant_bin[ 38668 ], 24, 0 );
    const_str_plain_setinputsizes = UNSTREAM_STRING( &constant_bin[ 38692 ], 13, 1 );
    const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 1, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 3, const_str_plain_q_prefix ); Py_INCREF( const_str_plain_q_prefix );
    PyTuple_SET_ITEM( const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 4, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 5, const_str_plain_q_postfix ); Py_INCREF( const_str_plain_q_postfix );
    const_str_plain_q_values = UNSTREAM_STRING( &constant_bin[ 38705 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 6, const_str_plain_q_values ); Py_INCREF( const_str_plain_q_values );
    const_str_plain_callproc = UNSTREAM_STRING( &constant_bin[ 35320 ], 8, 1 );
    const_str_plain__get_result = UNSTREAM_STRING( &constant_bin[ 37538 ], 11, 1 );
    const_str_plain_use_result = UNSTREAM_STRING( &constant_bin[ 38414 ], 10, 1 );
    const_str_plain__warnings = UNSTREAM_STRING( &constant_bin[ 31502 ], 9, 1 );
    const_str_digest_37394c3211735ea0986d5b0d477c3f17 = UNSTREAM_STRING( &constant_bin[ 38713 ], 133, 0 );
    const_str_digest_a3c6ae7cf447025c5894c65199db9bb0 = UNSTREAM_STRING( &constant_bin[ 38846 ], 96, 0 );
    const_str_plain__fetch_type = UNSTREAM_STRING( &constant_bin[ 38942 ], 11, 1 );
    const_str_plain_postfix = UNSTREAM_STRING( &constant_bin[ 37183 ], 7, 1 );
    const_dict_877a77047ad2bc410744261f070dd574 = _PyDict_NewPresized( 3 );
    const_str_digest_9af57228efcb185f135bd455a60c6685 = UNSTREAM_STRING( &constant_bin[ 38676 ], 15, 0 );
    PyDict_SetItem( const_dict_877a77047ad2bc410744261f070dd574, const_str_plain___module__, const_str_digest_9af57228efcb185f135bd455a60c6685 );
    PyDict_SetItem( const_dict_877a77047ad2bc410744261f070dd574, const_str_plain___doc__, const_str_digest_4ffe38d802972bf1299581fe34e3afb0 );
    PyDict_SetItem( const_dict_877a77047ad2bc410744261f070dd574, const_str_plain__fetch_type, const_int_pos_1 );
    assert( PyDict_Size( const_dict_877a77047ad2bc410744261f070dd574 ) == 3 );
    const_tuple_str_plain_x_str_plain_ensure_bytes_str_plain_encoding_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ensure_bytes_str_plain_encoding_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ensure_bytes_str_plain_encoding_tuple, 1, const_str_plain_ensure_bytes ); Py_INCREF( const_str_plain_ensure_bytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_ensure_bytes_str_plain_encoding_tuple, 2, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    const_str_digest_511ae8841b7b15236ee0ffa5a7a5ad38 = UNSTREAM_STRING( &constant_bin[ 19333 ], 12, 0 );
    const_str_plain_SSDictCursor = UNSTREAM_STRING( &constant_bin[ 38953 ], 12, 1 );
    const_str_plain_DOTALL = UNSTREAM_STRING( &constant_bin[ 38965 ], 6, 1 );
    const_str_digest_26652b588eac6f5469699bf2e7d7dc79 = UNSTREAM_STRING( &constant_bin[ 38971 ], 106, 0 );
    const_str_plain_absolute_import = UNSTREAM_STRING( &constant_bin[ 39077 ], 15, 1 );
    const_str_digest_1523e369629867d1d604d91a65e217dd = UNSTREAM_STRING( &constant_bin[ 39092 ], 376, 0 );
    const_str_plain_CursorTupleRowsMixIn = UNSTREAM_STRING( &constant_bin[ 39468 ], 20, 1 );
    const_str_plain_CursorUseResultMixIn = UNSTREAM_STRING( &constant_bin[ 36957 ], 20, 1 );
    const_str_plain_DictCursor = UNSTREAM_STRING( &constant_bin[ 38955 ], 10, 1 );
    const_str_plain_field_flags = UNSTREAM_STRING( &constant_bin[ 39488 ], 11, 1 );
    const_tuple_4d551e6f65af6268d1d2249b1c699fe9_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4d551e6f65af6268d1d2249b1c699fe9_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_4d551e6f65af6268d1d2249b1c699fe9_tuple, 1, const_str_plain_query ); Py_INCREF( const_str_plain_query );
    PyTuple_SET_ITEM( const_tuple_4d551e6f65af6268d1d2249b1c699fe9_tuple, 2, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4d551e6f65af6268d1d2249b1c699fe9_tuple, 3, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    const_tuple_str_plain_self_str_plain_size_str_plain_end_str_plain_result_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_end_str_plain_result_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_end_str_plain_result_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_end_str_plain_result_tuple, 2, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_end_str_plain_result_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_b1860af85599757ceb0e191b69d925b3 = UNSTREAM_STRING( &constant_bin[ 39499 ], 124, 0 );
    const_tuple_7311ece032bad453cd45c749d81a9eed_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 1, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 2, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 3, const_str_plain_postfix ); Py_INCREF( const_str_plain_postfix );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 4, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 5, const_str_plain_max_stmt_length ); Py_INCREF( const_str_plain_max_stmt_length );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 6, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 7, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_rows = UNSTREAM_STRING( &constant_bin[ 34353 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 8, const_str_plain_rows ); Py_INCREF( const_str_plain_rows );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 9, const_str_plain_sql ); Py_INCREF( const_str_plain_sql );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 10, const_str_plain_escape ); Py_INCREF( const_str_plain_escape );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 11, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 12, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    const_str_plain_CursorStoreResultMixIn = UNSTREAM_STRING( &constant_bin[ 39623 ], 22, 1 );
    const_str_plain_next_result = UNSTREAM_STRING( &constant_bin[ 39645 ], 11, 1 );
    const_str_plain_description = UNSTREAM_STRING( &constant_bin[ 37668 ], 11, 1 );
    const_str_plain_executemany = UNSTREAM_STRING( &constant_bin[ 39656 ], 11, 1 );
    const_tuple_bebf5d71635e831d547dda317504bbfc_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bebf5d71635e831d547dda317504bbfc_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_bebf5d71635e831d547dda317504bbfc_tuple, 1, const_str_plain_literal ); Py_INCREF( const_str_plain_literal );
    PyTuple_SET_ITEM( const_tuple_bebf5d71635e831d547dda317504bbfc_tuple, 2, const_str_plain_ensure_bytes ); Py_INCREF( const_str_plain_ensure_bytes );
    PyTuple_SET_ITEM( const_tuple_bebf5d71635e831d547dda317504bbfc_tuple, 3, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    const_str_plain__get_db = UNSTREAM_STRING( &constant_bin[ 39667 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_size_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    const_str_digest_2925b032e7dd185c277d920801a0f13c = UNSTREAM_STRING( &constant_bin[ 39674 ], 42, 0 );
    const_str_plain_nextset = UNSTREAM_STRING( &constant_bin[ 35934 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_q_str_plain_db_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_q_str_plain_db_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_q_str_plain_db_tuple, 1, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_q_str_plain_db_tuple, 2, const_str_plain_db ); Py_INCREF( const_str_plain_db );
    const_str_plain_rownumber = UNSTREAM_STRING( &constant_bin[ 39716 ], 9, 1 );
    const_str_plain__do_execute_many = UNSTREAM_STRING( &constant_bin[ 39725 ], 16, 1 );
    const_dict_872fa47b80d99002b1a72b3559cecf5e = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_872fa47b80d99002b1a72b3559cecf5e, const_str_plain___module__, const_str_digest_9af57228efcb185f135bd455a60c6685 );
    PyDict_SetItem( const_dict_872fa47b80d99002b1a72b3559cecf5e, const_str_plain___doc__, const_str_digest_f0309b16fcc58a6589722aea7080eb76 );
    PyDict_SetItem( const_dict_872fa47b80d99002b1a72b3559cecf5e, const_str_plain__fetch_type, const_int_0 );
    assert( PyDict_Size( const_dict_872fa47b80d99002b1a72b3559cecf5e ) == 3 );
    const_str_plain_print_function = UNSTREAM_STRING( &constant_bin[ 39741 ], 14, 1 );
    const_str_plain__exceptions = UNSTREAM_STRING( &constant_bin[ 24629 ], 11, 1 );
    const_tuple_484a64a7e7d850749f5b7749dd587637_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_484a64a7e7d850749f5b7749dd587637_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_484a64a7e7d850749f5b7749dd587637_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_484a64a7e7d850749f5b7749dd587637_tuple, 2, const_str_plain_fmt ); Py_INCREF( const_str_plain_fmt );
    PyTuple_SET_ITEM( const_tuple_484a64a7e7d850749f5b7749dd587637_tuple, 3, const_str_plain_db ); Py_INCREF( const_str_plain_db );
    PyTuple_SET_ITEM( const_tuple_484a64a7e7d850749f5b7749dd587637_tuple, 4, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    const_str_plain__post_get_result = UNSTREAM_STRING( &constant_bin[ 39755 ], 16, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_MySQLdb$cursors( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bd5fa1b96e4105a5e3b74aeb4106d07f;
static PyCodeObject *codeobj_00eafbe0c77fc4dff3201ce5d4bab827;
static PyCodeObject *codeobj_d5bfe04d6f4b479c2a0be525a9c68b13;
static PyCodeObject *codeobj_fc8ec83757b3215d14b8c4e58e42feff;
static PyCodeObject *codeobj_73aa317c9300b5b481d7cd5b9928bb30;
static PyCodeObject *codeobj_817e43fb8976498fa6557f5df41cebc9;
static PyCodeObject *codeobj_1d64356ebf4ffec6a8f4a1ba8de00dd4;
static PyCodeObject *codeobj_0ba20b5a1c376c3dc178830fe23a3750;
static PyCodeObject *codeobj_7ff3cacc65356953ad41b8e50c05c31f;
static PyCodeObject *codeobj_efa24b16394786b6d0036c0985215568;
static PyCodeObject *codeobj_aab0fe41eff0693d158165b5cf185e06;
static PyCodeObject *codeobj_8eab3b046dcc5bc377263ae22ffbf602;
static PyCodeObject *codeobj_4b4f8a6f4ea8aebbfcdf5ce35ad0485b;
static PyCodeObject *codeobj_16449ccd647291d31c3317e34d0be00a;
static PyCodeObject *codeobj_d5a0074c5f79cfda16b45c8cb7dba20e;
static PyCodeObject *codeobj_2b9a8e7d0e269152bcbdb1f666b2fb51;
static PyCodeObject *codeobj_4ff79bee7f03d54d1e5e527059017f7c;
static PyCodeObject *codeobj_96a55ef9296244a2d9af4ccf5efc6f7e;
static PyCodeObject *codeobj_402b801362f70a5da1f416c9cda01638;
static PyCodeObject *codeobj_b19ae3fd71dc9d2790454ce8b66b2951;
static PyCodeObject *codeobj_6e0ac2c3f8a9d81e84d907c7038331e1;
static PyCodeObject *codeobj_b4789c744653315702b21806138f3537;
static PyCodeObject *codeobj_9554a618f2d85324acb61f0f4812a3e9;
static PyCodeObject *codeobj_5078e36d102c72b5dca62a3314236c62;
static PyCodeObject *codeobj_306dd87ae4e34edbe0fee6e3d39d330b;
static PyCodeObject *codeobj_39fc87ceaa1647196f49ca2c39a45045;
static PyCodeObject *codeobj_3458061e3ef75c9ea827a9645797ace0;
static PyCodeObject *codeobj_694142dd1f61513115322ca2bdfa2863;
static PyCodeObject *codeobj_83c9b67594c77fc58f1a45ecfceaf39c;
static PyCodeObject *codeobj_fc5ffbdba7bf140abef534094979c677;
static PyCodeObject *codeobj_4316d7750409fc63ff141507bdb18b4b;
static PyCodeObject *codeobj_e8a9c15e7916aef18a775337c8b26ea3;
static PyCodeObject *codeobj_6de618ba7383ac3b9736297ca2bb089f;
static PyCodeObject *codeobj_f80d7eb6fcfc32dcc127f5cf97f43c33;
static PyCodeObject *codeobj_4a264bb542922ac6e743e23aa73a79ac;
static PyCodeObject *codeobj_cb4c0cde213db49596c26f7d70a05b79;
static PyCodeObject *codeobj_610e932a22dcfcb6e803c85a18ae1b59;
static PyCodeObject *codeobj_dfe3442321d97005dfd32a76697fdee2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6afbabdc970df406e659701032fd5352;
    codeobj_bd5fa1b96e4105a5e3b74aeb4106d07f = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 113, const_tuple_bebf5d71635e831d547dda317504bbfc_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_00eafbe0c77fc4dff3201ce5d4bab827 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 236, const_tuple_4d551e6f65af6268d1d2249b1c699fe9_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d5bfe04d6f4b479c2a0be525a9c68b13 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 298, const_tuple_484a64a7e7d850749f5b7749dd587637_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fc8ec83757b3215d14b8c4e58e42feff = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f03a65e1e7485a2e4ab779313a9d1e06, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_73aa317c9300b5b481d7cd5b9928bb30 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BaseCursor, 28, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_817e43fb8976498fa6557f5df41cebc9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___enter__, 92, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1d64356ebf4ffec6a8f4a1ba8de00dd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___exit__, 95, const_tuple_str_plain_self_str_plain_exc_info_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ba20b5a1c376c3dc178830fe23a3750 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 59, const_tuple_str_plain_self_str_plain_connection_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7ff3cacc65356953ad41b8e50c05c31f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 324, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_efa24b16394786b6d0036c0985215568 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 399, const_tuple_str_plain_self_str_plain_result_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aab0fe41eff0693d158165b5cf185e06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 440, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8eab3b046dcc5bc377263ae22ffbf602 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_executed, 122, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4b4f8a6f4ea8aebbfcdf5ce35ad0485b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__do_execute_many, 239, const_tuple_7311ece032bad453cd45c749d81a9eed_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_16449ccd647291d31c3317e34d0be00a = MAKE_CODEOBJ( module_filename_obj, const_str_plain__do_get_result, 143, const_tuple_str_plain_self_str_plain_db_str_plain_result_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d5a0074c5f79cfda16b45c8cb7dba20e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__escape_args, 99, const_tuple_cd3b4becedcbdf2b69a6eca14d763424_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2b9a8e7d0e269152bcbdb1f666b2fb51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fetch_row, 319, const_tuple_str_plain_self_str_plain_size_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4ff79bee7f03d54d1e5e527059017f7c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_db, 165, const_tuple_str_plain_self_str_plain_con_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_96a55ef9296244a2d9af4ccf5efc6f7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_result, 345, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_402b801362f70a5da1f416c9cda01638 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_result, 413, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b19ae3fd71dc9d2790454ce8b66b2951 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__post_get_result, 156, const_tuple_str_plain_self_tuple, 1, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6e0ac2c3f8a9d81e84d907c7038331e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__post_get_result, 348, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b4789c744653315702b21806138f3537 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__query, 309, const_tuple_str_plain_self_str_plain_q_str_plain_db_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9554a618f2d85324acb61f0f4812a3e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_callproc, 265, const_tuple_47d9e12831e20a4b922b9425caf4f81d_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5078e36d102c72b5dca62a3314236c62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 81, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_306dd87ae4e34edbe0fee6e3d39d330b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ensure_bytes, 103, const_tuple_str_plain_x_str_plain_ensure_bytes_str_plain_encoding_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_39fc87ceaa1647196f49ca2c39a45045 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_execute, 171, const_tuple_d3b664b8f26723860b58c79f039236f2_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3458061e3ef75c9ea827a9645797ace0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_executemany, 209, const_tuple_94c73bcfbad7cc69e1d9d058b412a3b1_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_694142dd1f61513115322ca2bdfa2863 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fetchall, 371, const_tuple_str_plain_self_str_plain_result_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_83c9b67594c77fc58f1a45ecfceaf39c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fetchall, 433, const_tuple_str_plain_self_str_plain_r_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fc5ffbdba7bf140abef534094979c677 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fetchmany, 362, const_tuple_str_plain_self_str_plain_size_str_plain_end_str_plain_result_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4316d7750409fc63ff141507bdb18b4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fetchmany, 425, const_tuple_str_plain_self_str_plain_size_str_plain_r_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e8a9c15e7916aef18a775337c8b26ea3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fetchone, 352, const_tuple_str_plain_self_str_plain_result_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6de618ba7383ac3b9736297ca2bb089f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fetchone, 416, const_tuple_str_plain_self_str_plain_r_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f80d7eb6fcfc32dcc127f5cf97f43c33 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_next, 443, const_tuple_str_plain_self_str_plain_row_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4a264bb542922ac6e743e23aa73a79ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nextset, 126, const_tuple_str_plain_self_str_plain_db_str_plain_nr_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_cb4c0cde213db49596c26f7d70a05b79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scroll, 381, const_tuple_str_plain_self_str_plain_value_str_plain_mode_str_plain_r_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_610e932a22dcfcb6e803c85a18ae1b59 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setinputsizes, 159, const_tuple_str_plain_self_str_plain_args_tuple, 1, CO_VARARGS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dfe3442321d97005dfd32a76697fdee2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setoutputsizes, 162, const_tuple_str_plain_self_str_plain_args_tuple, 1, CO_VARARGS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_maker( void );


static PyObject *MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_maker( void );


static PyObject *MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_maker( void );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_10_setinputsizes(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_11_setoutputsizes(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_12__get_db(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_13_execute( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_14_executemany(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_15__do_execute_many(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_16_callproc( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_17__query(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_18__fetch_row( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_19___iter__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_20__get_result(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_21__post_get_result(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_22_fetchone(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_23_fetchmany( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_24_fetchall(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_25_scroll( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_26___iter__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_27__get_result(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_28_fetchone(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_29_fetchmany( PyObject *defaults );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_2_close(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_30_fetchall(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_31___iter__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_32_next(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_3___enter__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_4___exit__(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_5__escape_args(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_5__escape_args$$$function_1_ensure_bytes(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_6__check_executed(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_7_nextset(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_8__do_get_result(  );


static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_9__post_get_result(  );


// The module function definitions.
static PyObject *impl_MySQLdb$cursors$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_connection = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_0ba20b5a1c376c3dc178830fe23a3750;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0ba20b5a1c376c3dc178830fe23a3750 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0ba20b5a1c376c3dc178830fe23a3750, codeobj_0ba20b5a1c376c3dc178830fe23a3750, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_0ba20b5a1c376c3dc178830fe23a3750 = cache_frame_0ba20b5a1c376c3dc178830fe23a3750;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0ba20b5a1c376c3dc178830fe23a3750 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0ba20b5a1c376c3dc178830fe23a3750 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_connection );
        tmp_assattr_name_1 = par_connection;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_connection, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_description, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_description_flags, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_neg_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_rowcount, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_int_pos_1;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_arraysize, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__executed, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__last_executed, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_lastrowid, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = PyList_New( 0 );
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_messages, tmp_assattr_name_9 );
        Py_DECREF( tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_name_10 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain__result, tmp_assattr_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_name_11 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain__warnings, tmp_assattr_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_name_12 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_rownumber, tmp_assattr_name_12 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_name_13 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain__rows, tmp_assattr_name_13 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ba20b5a1c376c3dc178830fe23a3750 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ba20b5a1c376c3dc178830fe23a3750 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ba20b5a1c376c3dc178830fe23a3750, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ba20b5a1c376c3dc178830fe23a3750->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ba20b5a1c376c3dc178830fe23a3750, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ba20b5a1c376c3dc178830fe23a3750,
        type_description_1,
        par_self,
        par_connection
    );


    // Release cached frame.
    if ( frame_0ba20b5a1c376c3dc178830fe23a3750 == cache_frame_0ba20b5a1c376c3dc178830fe23a3750 )
    {
        Py_DECREF( frame_0ba20b5a1c376c3dc178830fe23a3750 );
    }
    cache_frame_0ba20b5a1c376c3dc178830fe23a3750 = NULL;

    assertFrameObject( frame_0ba20b5a1c376c3dc178830fe23a3750 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_connection );
    Py_DECREF( par_connection );
    par_connection = NULL;

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

    CHECK_OBJECT( (PyObject *)par_connection );
    Py_DECREF( par_connection );
    par_connection = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_1___init__ );
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


static PyObject *impl_MySQLdb$cursors$$$function_2_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5078e36d102c72b5dca62a3314236c62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_5078e36d102c72b5dca62a3314236c62 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5078e36d102c72b5dca62a3314236c62, codeobj_5078e36d102c72b5dca62a3314236c62, module_MySQLdb$cursors, sizeof(void *) );
    frame_5078e36d102c72b5dca62a3314236c62 = cache_frame_5078e36d102c72b5dca62a3314236c62;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5078e36d102c72b5dca62a3314236c62 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5078e36d102c72b5dca62a3314236c62 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_2;
        branch_no_1:;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_5078e36d102c72b5dca62a3314236c62->m_frame.f_lineno = 86;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_nextset );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        goto loop_end_1;
        branch_no_2:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_connection, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__result, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    goto frame_return_exit_1;
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

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_connection, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__result, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            Py_DECREF( exception_keeper_type_1 );
            Py_XDECREF( exception_keeper_value_1 );
            Py_XDECREF( exception_keeper_tb_1 );

            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_connection, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__result, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5078e36d102c72b5dca62a3314236c62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5078e36d102c72b5dca62a3314236c62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5078e36d102c72b5dca62a3314236c62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5078e36d102c72b5dca62a3314236c62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5078e36d102c72b5dca62a3314236c62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5078e36d102c72b5dca62a3314236c62, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5078e36d102c72b5dca62a3314236c62,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5078e36d102c72b5dca62a3314236c62 == cache_frame_5078e36d102c72b5dca62a3314236c62 )
    {
        Py_DECREF( frame_5078e36d102c72b5dca62a3314236c62 );
    }
    cache_frame_5078e36d102c72b5dca62a3314236c62 = NULL;

    assertFrameObject( frame_5078e36d102c72b5dca62a3314236c62 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_2_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_2_close );
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


static PyObject *impl_MySQLdb$cursors$$$function_3___enter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_3___enter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_3___enter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$cursors$$$function_4___exit__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_exc_info = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_1d64356ebf4ffec6a8f4a1ba8de00dd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    CHECK_OBJECT( par_exc_info );
    Py_DECREF( par_exc_info );
    par_exc_info = NULL;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1d64356ebf4ffec6a8f4a1ba8de00dd4, codeobj_1d64356ebf4ffec6a8f4a1ba8de00dd4, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 = cache_frame_1d64356ebf4ffec6a8f4a1ba8de00dd4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_1d64356ebf4ffec6a8f4a1ba8de00dd4->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1d64356ebf4ffec6a8f4a1ba8de00dd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1d64356ebf4ffec6a8f4a1ba8de00dd4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1d64356ebf4ffec6a8f4a1ba8de00dd4,
        type_description_1,
        par_self,
        par_exc_info
    );


    // Release cached frame.
    if ( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 == cache_frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 )
    {
        Py_DECREF( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 );
    }
    cache_frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 = NULL;

    assertFrameObject( frame_1d64356ebf4ffec6a8f4a1ba8de00dd4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_4___exit__ );
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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_4___exit__ );
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


static PyObject *impl_MySQLdb$cursors$$$function_5__escape_args( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_conn = python_pars[ 2 ];
    struct Nuitka_CellObject *var_encoding = PyCell_EMPTY();
    struct Nuitka_CellObject *var_literal = PyCell_EMPTY();
    struct Nuitka_CellObject *var_ensure_bytes = PyCell_EMPTY();
    PyObject *outline_0_var_val = NULL;
    PyObject *outline_0_var_key = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_d5a0074c5f79cfda16b45c8cb7dba20e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_d5a0074c5f79cfda16b45c8cb7dba20e = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5a0074c5f79cfda16b45c8cb7dba20e, codeobj_d5a0074c5f79cfda16b45c8cb7dba20e, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d5a0074c5f79cfda16b45c8cb7dba20e = cache_frame_d5a0074c5f79cfda16b45c8cb7dba20e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5a0074c5f79cfda16b45c8cb7dba20e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5a0074c5f79cfda16b45c8cb7dba20e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_conn );
        tmp_source_name_1 = par_conn;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encoding );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_encoding ) == NULL );
        PyCell_SET( var_encoding, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_conn );
        tmp_source_name_2 = par_conn;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_literal );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "oooccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_literal ) == NULL );
        PyCell_SET( var_literal, tmp_assign_source_2 );

    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_FUNCTION_MySQLdb$cursors$$$function_5__escape_args$$$function_1_ensure_bytes(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] = var_encoding;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] = var_ensure_bytes;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_3)->m_closure[1] );


        assert( PyCell_GET( var_ensure_bytes ) == NULL );
        PyCell_SET( var_ensure_bytes, tmp_assign_source_3 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_args );
        tmp_isinstance_inst_1 = par_args;
        tmp_isinstance_cls_1 = const_tuple_type_tuple_type_list_tuple;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oooccc";
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
            PyObject *tmp_tuple_arg_1;
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT( par_args );
                tmp_iter_arg_1 = par_args;
                tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 113;
                    type_description_1 = "oooccc";
                    goto frame_exception_exit_1;
                }
                assert( tmp_genexpr_1__$0 == NULL );
                tmp_genexpr_1__$0 = tmp_assign_source_4;
            }
            // Tried code:
            tmp_tuple_arg_1 = MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] = var_ensure_bytes;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] );
            ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
            ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[2] = var_literal;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[2] );


            goto try_return_handler_2;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            goto outline_result_1;
            // End of try:
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args );
            return NULL;
            outline_result_1:;
            tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
            Py_DECREF( tmp_tuple_arg_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;
                type_description_1 = "oooccc";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( par_args );
            tmp_isinstance_inst_2 = par_args;
            tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_1 = "oooccc";
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_args );
                tmp_called_instance_1 = par_args;
                frame_d5a0074c5f79cfda16b45c8cb7dba20e->m_frame.f_lineno = 116;
                tmp_iter_arg_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
                if ( tmp_iter_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 116;
                    type_description_1 = "oooccc";
                    goto try_except_handler_3;
                }
                tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
                Py_DECREF( tmp_iter_arg_2 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "oooccc";
                    goto try_except_handler_3;
                }
                assert( tmp_dictcontraction_1__$0 == NULL );
                tmp_dictcontraction_1__$0 = tmp_assign_source_5;
            }
            {
                PyObject *tmp_assign_source_6;
                tmp_assign_source_6 = PyDict_New();
                assert( tmp_dictcontraction_1__contraction == NULL );
                tmp_dictcontraction_1__contraction = tmp_assign_source_6;
            }
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_7;
                CHECK_OBJECT( tmp_dictcontraction_1__$0 );
                tmp_next_source_1 = tmp_dictcontraction_1__$0;
                tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_7 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_1;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooccc";
                        exception_lineno = 115;
                        goto try_except_handler_4;
                    }
                }

                {
                    PyObject *old = tmp_dictcontraction_1__iter_value_0;
                    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_7;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_3;
                CHECK_OBJECT( tmp_dictcontraction_1__iter_value_0 );
                tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
                tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "oooccc";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_8;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0 );
                if ( tmp_assign_source_9 == NULL )
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


                    type_description_1 = "oooccc";
                    exception_lineno = 115;
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_9;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1 );
                if ( tmp_assign_source_10 == NULL )
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


                    type_description_1 = "oooccc";
                    exception_lineno = 115;
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_10;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_iterator_name_1;
                CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__source_iter );
                tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                            type_description_1 = "oooccc";
                            exception_lineno = 115;
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

                    type_description_1 = "oooccc";
                    exception_lineno = 115;
                    goto try_except_handler_6;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_dictcontraction$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_dictcontraction$tuple_unpack_1__source_iter );
            tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_5;
            // End of try:
            try_end_1:;
            goto try_end_2;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_1 );
            tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

            Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_2 );
            tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_4;
            // End of try:
            try_end_2:;
            CHECK_OBJECT( (PyObject *)tmp_dictcontraction$tuple_unpack_1__source_iter );
            Py_DECREF( tmp_dictcontraction$tuple_unpack_1__source_iter );
            tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__element_1 );
                tmp_assign_source_11 = tmp_dictcontraction$tuple_unpack_1__element_1;
                {
                    PyObject *old = outline_0_var_key;
                    outline_0_var_key = tmp_assign_source_11;
                    Py_INCREF( outline_0_var_key );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_1 );
            tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( tmp_dictcontraction$tuple_unpack_1__element_2 );
                tmp_assign_source_12 = tmp_dictcontraction$tuple_unpack_1__element_2;
                {
                    PyObject *old = outline_0_var_val;
                    outline_0_var_val = tmp_assign_source_12;
                    Py_INCREF( outline_0_var_val );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_dictcontraction$tuple_unpack_1__element_2 );
            tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_called_name_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( PyCell_GET( var_literal ) );
                tmp_called_name_1 = PyCell_GET( var_literal );
                CHECK_OBJECT( PyCell_GET( var_ensure_bytes ) );
                tmp_called_name_2 = PyCell_GET( var_ensure_bytes );
                CHECK_OBJECT( outline_0_var_val );
                tmp_args_element_name_2 = outline_0_var_val;
                frame_d5a0074c5f79cfda16b45c8cb7dba20e->m_frame.f_lineno = 115;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                }

                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "oooccc";
                    goto try_except_handler_4;
                }
                frame_d5a0074c5f79cfda16b45c8cb7dba20e->m_frame.f_lineno = 115;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "oooccc";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( tmp_dictcontraction_1__contraction );
                tmp_dictset_dict = tmp_dictcontraction_1__contraction;
                CHECK_OBJECT( PyCell_GET( var_ensure_bytes ) );
                tmp_called_name_3 = PyCell_GET( var_ensure_bytes );
                CHECK_OBJECT( outline_0_var_key );
                tmp_args_element_name_3 = outline_0_var_key;
                frame_d5a0074c5f79cfda16b45c8cb7dba20e->m_frame.f_lineno = 115;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_dictset_key = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_dictset_key == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dictset_value );

                    exception_lineno = 115;
                    type_description_1 = "oooccc";
                    goto try_except_handler_4;
                }
                tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                Py_DECREF( tmp_dictset_key );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 115;
                    type_description_1 = "oooccc";
                    goto try_except_handler_4;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 115;
                type_description_1 = "oooccc";
                goto try_except_handler_4;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT( tmp_dictcontraction_1__contraction );
            tmp_return_value = tmp_dictcontraction_1__contraction;
            Py_INCREF( tmp_return_value );
            goto try_return_handler_4;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
            Py_DECREF( tmp_dictcontraction_1__$0 );
            tmp_dictcontraction_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
            Py_DECREF( tmp_dictcontraction_1__contraction );
            tmp_dictcontraction_1__contraction = NULL;

            Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
            tmp_dictcontraction_1__iter_value_0 = NULL;

            goto try_return_handler_3;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
            Py_DECREF( tmp_dictcontraction_1__$0 );
            tmp_dictcontraction_1__$0 = NULL;

            CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
            Py_DECREF( tmp_dictcontraction_1__contraction );
            tmp_dictcontraction_1__contraction = NULL;

            Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
            tmp_dictcontraction_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto try_except_handler_3;
            // End of try:
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args );
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            Py_XDECREF( outline_0_var_val );
            outline_0_var_val = NULL;

            Py_XDECREF( outline_0_var_key );
            outline_0_var_key = NULL;

            goto outline_result_2;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( outline_0_var_val );
            outline_0_var_val = NULL;

            Py_XDECREF( outline_0_var_key );
            outline_0_var_key = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args );
            return NULL;
            outline_exception_1:;
            exception_lineno = 115;
            goto frame_exception_exit_1;
            outline_result_2:;
            goto frame_return_exit_1;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_called_name_4;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_called_name_5;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT( PyCell_GET( var_literal ) );
                tmp_called_name_4 = PyCell_GET( var_literal );
                CHECK_OBJECT( PyCell_GET( var_ensure_bytes ) );
                tmp_called_name_5 = PyCell_GET( var_ensure_bytes );
                CHECK_OBJECT( par_args );
                tmp_args_element_name_5 = par_args;
                frame_d5a0074c5f79cfda16b45c8cb7dba20e->m_frame.f_lineno = 120;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5 };
                    tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
                }

                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 120;
                    type_description_1 = "oooccc";
                    goto frame_exception_exit_1;
                }
                frame_d5a0074c5f79cfda16b45c8cb7dba20e->m_frame.f_lineno = 120;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 120;
                    type_description_1 = "oooccc";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5a0074c5f79cfda16b45c8cb7dba20e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5a0074c5f79cfda16b45c8cb7dba20e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5a0074c5f79cfda16b45c8cb7dba20e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5a0074c5f79cfda16b45c8cb7dba20e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5a0074c5f79cfda16b45c8cb7dba20e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5a0074c5f79cfda16b45c8cb7dba20e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5a0074c5f79cfda16b45c8cb7dba20e,
        type_description_1,
        par_self,
        par_args,
        par_conn,
        var_encoding,
        var_literal,
        var_ensure_bytes
    );


    // Release cached frame.
    if ( frame_d5a0074c5f79cfda16b45c8cb7dba20e == cache_frame_d5a0074c5f79cfda16b45c8cb7dba20e )
    {
        Py_DECREF( frame_d5a0074c5f79cfda16b45c8cb7dba20e );
    }
    cache_frame_d5a0074c5f79cfda16b45c8cb7dba20e = NULL;

    assertFrameObject( frame_d5a0074c5f79cfda16b45c8cb7dba20e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_literal );
    Py_DECREF( var_literal );
    var_literal = NULL;

    CHECK_OBJECT( (PyObject *)var_ensure_bytes );
    Py_DECREF( var_ensure_bytes );
    var_ensure_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)var_encoding );
    Py_DECREF( var_encoding );
    var_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_literal );
    Py_DECREF( var_literal );
    var_literal = NULL;

    CHECK_OBJECT( (PyObject *)var_ensure_bytes );
    Py_DECREF( var_ensure_bytes );
    var_ensure_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args );
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


static PyObject *impl_MySQLdb$cursors$$$function_5__escape_args$$$function_1_ensure_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_306dd87ae4e34edbe0fee6e3d39d330b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_306dd87ae4e34edbe0fee6e3d39d330b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_306dd87ae4e34edbe0fee6e3d39d330b, codeobj_306dd87ae4e34edbe0fee6e3d39d330b, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_306dd87ae4e34edbe0fee6e3d39d330b = cache_frame_306dd87ae4e34edbe0fee6e3d39d330b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_306dd87ae4e34edbe0fee6e3d39d330b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_306dd87ae4e34edbe0fee6e3d39d330b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode );

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

            exception_lineno = 104;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "occ";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_x );
            tmp_source_name_1 = par_x;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "encoding" );
                exception_tb = NULL;

                exception_lineno = 105;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
            frame_306dd87ae4e34edbe0fee6e3d39d330b->m_frame.f_lineno = 105;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( par_x );
            tmp_isinstance_inst_2 = par_x;
            tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;
                type_description_1 = "occ";
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
                PyObject *tmp_tuple_arg_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
                assert( tmp_called_name_2 != NULL );
                if ( PyCell_GET( self->m_closure[1] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ensure_bytes" );
                    exception_tb = NULL;

                    exception_lineno = 107;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_2 = PyCell_GET( self->m_closure[1] );
                CHECK_OBJECT( par_x );
                tmp_args_element_name_3 = par_x;
                frame_306dd87ae4e34edbe0fee6e3d39d330b->m_frame.f_lineno = 107;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                    tmp_tuple_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                if ( tmp_tuple_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 107;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
                Py_DECREF( tmp_tuple_arg_1 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 107;
                    type_description_1 = "occ";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_isinstance_inst_3;
                PyObject *tmp_isinstance_cls_3;
                CHECK_OBJECT( par_x );
                tmp_isinstance_inst_3 = par_x;
                tmp_isinstance_cls_3 = (PyObject *)&PyList_Type;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 108;
                    type_description_1 = "occ";
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
                    PyObject *tmp_list_arg_1;
                    PyObject *tmp_called_name_3;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_args_element_name_5;
                    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_map );
                    assert( tmp_called_name_3 != NULL );
                    if ( PyCell_GET( self->m_closure[1] ) == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ensure_bytes" );
                        exception_tb = NULL;

                        exception_lineno = 109;
                        type_description_1 = "occ";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_4 = PyCell_GET( self->m_closure[1] );
                    CHECK_OBJECT( par_x );
                    tmp_args_element_name_5 = par_x;
                    frame_306dd87ae4e34edbe0fee6e3d39d330b->m_frame.f_lineno = 109;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                    }

                    if ( tmp_list_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 109;
                        type_description_1 = "occ";
                        goto frame_exception_exit_1;
                    }
                    tmp_return_value = PySequence_List( tmp_list_arg_1 );
                    Py_DECREF( tmp_list_arg_1 );
                    if ( tmp_return_value == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 109;
                        type_description_1 = "occ";
                        goto frame_exception_exit_1;
                    }
                    goto frame_return_exit_1;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_306dd87ae4e34edbe0fee6e3d39d330b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_306dd87ae4e34edbe0fee6e3d39d330b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_306dd87ae4e34edbe0fee6e3d39d330b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_306dd87ae4e34edbe0fee6e3d39d330b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_306dd87ae4e34edbe0fee6e3d39d330b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_306dd87ae4e34edbe0fee6e3d39d330b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_306dd87ae4e34edbe0fee6e3d39d330b,
        type_description_1,
        par_x,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_306dd87ae4e34edbe0fee6e3d39d330b == cache_frame_306dd87ae4e34edbe0fee6e3d39d330b )
    {
        Py_DECREF( frame_306dd87ae4e34edbe0fee6e3d39d330b );
    }
    cache_frame_306dd87ae4e34edbe0fee6e3d39d330b = NULL;

    assertFrameObject( frame_306dd87ae4e34edbe0fee6e3d39d330b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args$$$function_1_ensure_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_5__escape_args$$$function_1_ensure_bytes );
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



struct MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_locals {
    PyObject *var_arg;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_locals *generator_heap = (struct MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_bd5fa1b96e4105a5e3b74aeb4106d07f, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[1] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[1] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Ncco";
                generator_heap->exception_lineno = 113;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arg );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "literal" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = PyCell_GET( generator->m_closure[2] );
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ensure_bytes" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = PyCell_GET( generator->m_closure[0] );
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_args_element_name_2 = generator_heap->var_arg;
        generator->m_frame->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_called_name_2, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 113;
        generator_heap->type_description_1 = "Ncco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator->m_closure[2],
            generator->m_closure[0],
            generator_heap->var_arg
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_context,
        module_MySQLdb$cursors,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_bd5fa1b96e4105a5e3b74aeb4106d07f,
        3,
        sizeof(struct MySQLdb$cursors$$$function_5__escape_args$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_MySQLdb$cursors$$$function_6__check_executed( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8eab3b046dcc5bc377263ae22ffbf602;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_8eab3b046dcc5bc377263ae22ffbf602 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8eab3b046dcc5bc377263ae22ffbf602, codeobj_8eab3b046dcc5bc377263ae22ffbf602, module_MySQLdb$cursors, sizeof(void *) );
    frame_8eab3b046dcc5bc377263ae22ffbf602 = cache_frame_8eab3b046dcc5bc377263ae22ffbf602;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8eab3b046dcc5bc377263ae22ffbf602 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8eab3b046dcc5bc377263ae22ffbf602 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__executed );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "o";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_ProgrammingError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProgrammingError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProgrammingError" );
                exception_tb = NULL;

                exception_lineno = 124;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_8eab3b046dcc5bc377263ae22ffbf602->m_frame.f_lineno = 124;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_22bfd1420d03e482048faead89371a10_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 124;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eab3b046dcc5bc377263ae22ffbf602 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8eab3b046dcc5bc377263ae22ffbf602 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8eab3b046dcc5bc377263ae22ffbf602, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8eab3b046dcc5bc377263ae22ffbf602->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8eab3b046dcc5bc377263ae22ffbf602, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8eab3b046dcc5bc377263ae22ffbf602,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_8eab3b046dcc5bc377263ae22ffbf602 == cache_frame_8eab3b046dcc5bc377263ae22ffbf602 )
    {
        Py_DECREF( frame_8eab3b046dcc5bc377263ae22ffbf602 );
    }
    cache_frame_8eab3b046dcc5bc377263ae22ffbf602 = NULL;

    assertFrameObject( frame_8eab3b046dcc5bc377263ae22ffbf602 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_6__check_executed );
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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_6__check_executed );
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


static PyObject *impl_MySQLdb$cursors$$$function_7_nextset( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_db = NULL;
    PyObject *var_nr = NULL;
    struct Nuitka_FrameObject *frame_4a264bb542922ac6e743e23aa73a79ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4a264bb542922ac6e743e23aa73a79ac = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a264bb542922ac6e743e23aa73a79ac, codeobj_4a264bb542922ac6e743e23aa73a79ac, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4a264bb542922ac6e743e23aa73a79ac = cache_frame_4a264bb542922ac6e743e23aa73a79ac;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a264bb542922ac6e743e23aa73a79ac );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a264bb542922ac6e743e23aa73a79ac ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__executed );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 131;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_4a264bb542922ac6e743e23aa73a79ac->m_frame.f_lineno = 132;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fetchall );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_slicedel_target_1;
        PyObject *tmp_source_name_2;
        Py_ssize_t tmp_slicedelslicedel_index_lower_1;
        Py_ssize_t tmp_slicedel_index_upper_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_slicedel_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_messages );
        if ( tmp_slicedel_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_slicedelslicedel_index_lower_1 = 0;
        tmp_slicedel_index_upper_1 = PY_SSIZE_T_MAX;
        tmp_result = DEL_INDEX_SLICE( tmp_slicedel_target_1, tmp_slicedelslicedel_index_lower_1, tmp_slicedel_index_upper_1 );
        Py_DECREF( tmp_slicedel_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_4a264bb542922ac6e743e23aa73a79ac->m_frame.f_lineno = 135;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__get_db );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_db == NULL );
        var_db = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT( var_db );
        tmp_called_instance_3 = var_db;
        frame_4a264bb542922ac6e743e23aa73a79ac->m_frame.f_lineno = 136;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_next_result );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_nr == NULL );
        var_nr = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_nr );
        tmp_compexpr_left_1 = var_nr;
        tmp_compexpr_right_1 = const_int_neg_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT( var_db );
        tmp_args_element_name_1 = var_db;
        frame_4a264bb542922ac6e743e23aa73a79ac->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__do_get_result, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_5 = par_self;
        frame_4a264bb542922ac6e743e23aa73a79ac->m_frame.f_lineno = 140;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain__post_get_result );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a264bb542922ac6e743e23aa73a79ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a264bb542922ac6e743e23aa73a79ac );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a264bb542922ac6e743e23aa73a79ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a264bb542922ac6e743e23aa73a79ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a264bb542922ac6e743e23aa73a79ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a264bb542922ac6e743e23aa73a79ac, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a264bb542922ac6e743e23aa73a79ac,
        type_description_1,
        par_self,
        var_db,
        var_nr
    );


    // Release cached frame.
    if ( frame_4a264bb542922ac6e743e23aa73a79ac == cache_frame_4a264bb542922ac6e743e23aa73a79ac )
    {
        Py_DECREF( frame_4a264bb542922ac6e743e23aa73a79ac );
    }
    cache_frame_4a264bb542922ac6e743e23aa73a79ac = NULL;

    assertFrameObject( frame_4a264bb542922ac6e743e23aa73a79ac );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = const_int_pos_1;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_7_nextset );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_db );
    Py_DECREF( var_db );
    var_db = NULL;

    CHECK_OBJECT( (PyObject *)var_nr );
    Py_DECREF( var_nr );
    var_nr = NULL;

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

    Py_XDECREF( var_db );
    var_db = NULL;

    Py_XDECREF( var_nr );
    var_nr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_7_nextset );
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


static PyObject *impl_MySQLdb$cursors$$$function_8__do_get_result( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_db = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_16449ccd647291d31c3317e34d0be00a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_16449ccd647291d31c3317e34d0be00a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_16449ccd647291d31c3317e34d0be00a, codeobj_16449ccd647291d31c3317e34d0be00a, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_16449ccd647291d31c3317e34d0be00a = cache_frame_16449ccd647291d31c3317e34d0be00a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_16449ccd647291d31c3317e34d0be00a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_16449ccd647291d31c3317e34d0be00a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_16449ccd647291d31c3317e34d0be00a->m_frame.f_lineno = 144;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__get_result );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_assign_unpack_1__assign_source == NULL );
        tmp_assign_unpack_1__assign_source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__result, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
        tmp_assign_source_2 = tmp_assign_unpack_1__assign_source;
        assert( var_result == NULL );
        Py_INCREF( tmp_assign_source_2 );
        var_result = tmp_assign_source_2;
    }
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_result );
        tmp_compexpr_left_1 = var_result;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_description, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            tmp_assattr_name_3 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_description_flags, tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( var_result );
            tmp_called_instance_2 = var_result;
            frame_16449ccd647291d31c3317e34d0be00a->m_frame.f_lineno = 148;
            tmp_assattr_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_describe );
            if ( tmp_assattr_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_4 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_description, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_assattr_target_5;
            CHECK_OBJECT( var_result );
            tmp_called_instance_3 = var_result;
            frame_16449ccd647291d31c3317e34d0be00a->m_frame.f_lineno = 149;
            tmp_assattr_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_field_flags );
            if ( tmp_assattr_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_5 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_description_flags, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 149;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_db );
        tmp_called_instance_4 = par_db;
        frame_16449ccd647291d31c3317e34d0be00a->m_frame.f_lineno = 151;
        tmp_assattr_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_affected_rows );
        if ( tmp_assattr_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_rowcount, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_rownumber, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_db );
        tmp_called_instance_5 = par_db;
        frame_16449ccd647291d31c3317e34d0be00a->m_frame.f_lineno = 153;
        tmp_assattr_name_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_insert_id );
        if ( tmp_assattr_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_lastrowid, tmp_assattr_name_8 );
        Py_DECREF( tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_name_9 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain__warnings, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16449ccd647291d31c3317e34d0be00a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_16449ccd647291d31c3317e34d0be00a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_16449ccd647291d31c3317e34d0be00a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_16449ccd647291d31c3317e34d0be00a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_16449ccd647291d31c3317e34d0be00a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16449ccd647291d31c3317e34d0be00a,
        type_description_1,
        par_self,
        par_db,
        var_result
    );


    // Release cached frame.
    if ( frame_16449ccd647291d31c3317e34d0be00a == cache_frame_16449ccd647291d31c3317e34d0be00a )
    {
        Py_DECREF( frame_16449ccd647291d31c3317e34d0be00a );
    }
    cache_frame_16449ccd647291d31c3317e34d0be00a = NULL;

    assertFrameObject( frame_16449ccd647291d31c3317e34d0be00a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_8__do_get_result );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_db );
    Py_DECREF( par_db );
    par_db = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_db );
    Py_DECREF( par_db );
    par_db = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_8__do_get_result );
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


static PyObject *impl_MySQLdb$cursors$$$function_9__post_get_result( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_9__post_get_result );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_9__post_get_result );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$cursors$$$function_10_setinputsizes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_10_setinputsizes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_10_setinputsizes );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$cursors$$$function_11_setoutputsizes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_11_setoutputsizes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_11_setoutputsizes );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$cursors$$$function_12__get_db( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_con = NULL;
    struct Nuitka_FrameObject *frame_4ff79bee7f03d54d1e5e527059017f7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ff79bee7f03d54d1e5e527059017f7c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ff79bee7f03d54d1e5e527059017f7c, codeobj_4ff79bee7f03d54d1e5e527059017f7c, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_4ff79bee7f03d54d1e5e527059017f7c = cache_frame_4ff79bee7f03d54d1e5e527059017f7c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ff79bee7f03d54d1e5e527059017f7c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ff79bee7f03d54d1e5e527059017f7c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_con == NULL );
        var_con = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_con );
        tmp_compexpr_left_1 = var_con;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_ProgrammingError );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProgrammingError );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProgrammingError" );
                exception_tb = NULL;

                exception_lineno = 168;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_4ff79bee7f03d54d1e5e527059017f7c->m_frame.f_lineno = 168;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_1859d7ee3ac212934ea546680a20c778_tuple, 0 ) );

            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 168;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ff79bee7f03d54d1e5e527059017f7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ff79bee7f03d54d1e5e527059017f7c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ff79bee7f03d54d1e5e527059017f7c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ff79bee7f03d54d1e5e527059017f7c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ff79bee7f03d54d1e5e527059017f7c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ff79bee7f03d54d1e5e527059017f7c,
        type_description_1,
        par_self,
        var_con
    );


    // Release cached frame.
    if ( frame_4ff79bee7f03d54d1e5e527059017f7c == cache_frame_4ff79bee7f03d54d1e5e527059017f7c )
    {
        Py_DECREF( frame_4ff79bee7f03d54d1e5e527059017f7c );
    }
    cache_frame_4ff79bee7f03d54d1e5e527059017f7c = NULL;

    assertFrameObject( frame_4ff79bee7f03d54d1e5e527059017f7c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_con );
    tmp_return_value = var_con;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_12__get_db );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_con );
    Py_DECREF( var_con );
    var_con = NULL;

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

    Py_XDECREF( var_con );
    var_con = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_12__get_db );
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


static PyObject *impl_MySQLdb$cursors$$$function_13_execute( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_query = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_db = NULL;
    PyObject *var_nargs = NULL;
    PyObject *var_m = NULL;
    PyObject *var_item = NULL;
    PyObject *var_key = NULL;
    PyObject *var_res = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_39fc87ceaa1647196f49ca2c39a45045;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_39fc87ceaa1647196f49ca2c39a45045 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_39fc87ceaa1647196f49ca2c39a45045, codeobj_39fc87ceaa1647196f49ca2c39a45045, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_39fc87ceaa1647196f49ca2c39a45045 = cache_frame_39fc87ceaa1647196f49ca2c39a45045;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_39fc87ceaa1647196f49ca2c39a45045 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_39fc87ceaa1647196f49ca2c39a45045 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 183;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_nextset );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooooooooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 185;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__get_db );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_db == NULL );
        var_db = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_query );
        tmp_isinstance_inst_1 = par_query;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode );

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

            exception_lineno = 187;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_query );
            tmp_source_name_1 = par_query;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_db );
            tmp_source_name_2 = var_db;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encoding );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 188;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 188;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 188;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_query;
                assert( old != NULL );
                par_query = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_args );
        tmp_compexpr_left_1 = par_args;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( par_args );
            tmp_isinstance_inst_2 = par_args;
            tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = PyDict_New();
                assert( var_nargs == NULL );
                var_nargs = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_instance_3;
                CHECK_OBJECT( par_args );
                tmp_called_instance_3 = par_args;
                frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 193;
                tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_items );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_for_loop_1__for_iterator == NULL );
                tmp_for_loop_1__for_iterator = tmp_assign_source_4;
            }
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_for_loop_1__for_iterator );
                tmp_next_source_1 = tmp_for_loop_1__for_iterator;
                tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                    {

                        goto loop_end_2;
                    }
                    else
                    {

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooooooo";
                        exception_lineno = 193;
                        goto try_except_handler_2;
                    }
                }

                {
                    PyObject *old = tmp_for_loop_1__iter_value;
                    tmp_for_loop_1__iter_value = tmp_assign_source_5;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( tmp_for_loop_1__iter_value );
                tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
                tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__source_iter;
                    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
                    Py_XDECREF( old );
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
                if ( tmp_assign_source_7 == NULL )
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


                    type_description_1 = "ooooooooo";
                    exception_lineno = 193;
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__element_1;
                    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
                if ( tmp_assign_source_8 == NULL )
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


                    type_description_1 = "ooooooooo";
                    exception_lineno = 193;
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = tmp_tuple_unpack_1__element_2;
                    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                            type_description_1 = "ooooooooo";
                            exception_lineno = 193;
                            goto try_except_handler_4;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 193;
                    goto try_except_handler_4;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
            Py_DECREF( tmp_tuple_unpack_1__source_iter );
            tmp_tuple_unpack_1__source_iter = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_3;
            // End of try:
            try_end_1:;
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

            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_2;
            // End of try:
            try_end_2:;
            CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
            Py_DECREF( tmp_tuple_unpack_1__source_iter );
            tmp_tuple_unpack_1__source_iter = NULL;

            {
                PyObject *tmp_assign_source_9;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
                {
                    PyObject *old = var_key;
                    var_key = tmp_assign_source_9;
                    Py_INCREF( var_key );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
                {
                    PyObject *old = var_item;
                    var_item = tmp_assign_source_10;
                    Py_INCREF( var_item );
                    Py_XDECREF( old );
                }

            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_isinstance_inst_3;
                PyObject *tmp_isinstance_cls_3;
                PyObject *tmp_mvar_value_2;
                CHECK_OBJECT( var_key );
                tmp_isinstance_inst_3 = var_key;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
                    exception_tb = NULL;

                    exception_lineno = 194;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }

                tmp_isinstance_cls_3 = tmp_mvar_value_2;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 194;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
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
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_3;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT( var_key );
                    tmp_source_name_3 = var_key;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_encode );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 195;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT( var_db );
                    tmp_source_name_4 = var_db;
                    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_encoding );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 195;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 195;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2 };
                        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_2 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 195;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_key;
                        assert( old != NULL );
                        var_key = tmp_assign_source_11;
                        Py_DECREF( old );
                    }

                }
                branch_no_5:;
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( var_db );
                tmp_called_instance_4 = var_db;
                CHECK_OBJECT( var_item );
                tmp_args_element_name_3 = var_item;
                frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 196;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_literal, call_args );
                }

                if ( tmp_dictset_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 196;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT( var_nargs );
                tmp_dictset_dict = var_nargs;
                CHECK_OBJECT( var_key );
                tmp_dictset_key = var_key;
                tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
                Py_DECREF( tmp_dictset_value );
                if ( tmp_res != 0 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 196;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
            }
            if ( CONSIDER_THREADING() == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 193;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            goto loop_start_2;
            loop_end_2:;
            goto try_end_3;
            // Exception handler code:
            try_except_handler_2:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
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
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_3:;
            Py_XDECREF( tmp_for_loop_1__iter_value );
            tmp_for_loop_1__iter_value = NULL;

            CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
            Py_DECREF( tmp_for_loop_1__for_iterator );
            tmp_for_loop_1__for_iterator = NULL;

            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( var_nargs );
                tmp_assign_source_12 = var_nargs;
                {
                    PyObject *old = par_args;
                    assert( old != NULL );
                    par_args = tmp_assign_source_12;
                    Py_INCREF( par_args );
                    Py_DECREF( old );
                }

            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_tuple_arg_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_args_element_name_5;
                tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_map );
                assert( tmp_called_name_3 != NULL );
                CHECK_OBJECT( var_db );
                tmp_source_name_5 = var_db;
                tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_literal );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_args );
                tmp_args_element_name_5 = par_args;
                frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 199;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_tuple_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_tuple_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_13 = PySequence_Tuple( tmp_tuple_arg_1 );
                Py_DECREF( tmp_tuple_arg_1 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 199;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_args;
                    assert( old != NULL );
                    par_args = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            branch_end_4:;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_query );
            tmp_left_name_1 = par_query;
            CHECK_OBJECT( par_args );
            tmp_right_name_1 = par_args;
            tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = par_query;
                assert( old != NULL );
                par_query = tmp_assign_source_14;
                Py_DECREF( old );
            }

        }
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

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_39fc87ceaa1647196f49ca2c39a45045 );
        if ( exception_keeper_tb_4 == NULL )
        {
            exception_keeper_tb_4 = MAKE_TRACEBACK( frame_39fc87ceaa1647196f49ca2c39a45045, exception_keeper_lineno_4 );
        }
        else if ( exception_keeper_lineno_4 != 0 )
        {
            exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_39fc87ceaa1647196f49ca2c39a45045, exception_keeper_lineno_4 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_TypeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 202;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_assign_source_15;
                tmp_assign_source_15 = EXC_VALUE(PyThreadState_GET());
                assert( var_m == NULL );
                Py_INCREF( tmp_assign_source_15 );
                var_m = tmp_assign_source_15;
            }
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_str_arg_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_ProgrammingError );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProgrammingError );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProgrammingError" );
                    exception_tb = NULL;

                    exception_lineno = 203;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_3;
                CHECK_OBJECT( var_m );
                tmp_str_arg_1 = var_m;
                tmp_args_element_name_6 = PyObject_Str( tmp_str_arg_1 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 203;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 203;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 203;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_6;
            branch_no_6:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 200;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_39fc87ceaa1647196f49ca2c39a45045->m_frame) frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
            branch_end_6:;
        }
        // End of try:
        try_end_4:;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        if ( par_query == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "query" );
            exception_tb = NULL;

            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_4 = par_query;
        tmp_isinstance_cls_4 = const_tuple_type_str_type_bytearray_tuple;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 205;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_raise_type_2;
            tmp_raise_type_2 = PyExc_AssertionError;
            exception_type = tmp_raise_type_2;
            Py_INCREF( tmp_raise_type_2 );
            exception_lineno = 205;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__query );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if ( par_query == NULL )
        {
            Py_DECREF( tmp_called_name_5 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "query" );
            exception_tb = NULL;

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_7 = par_query;
        frame_39fc87ceaa1647196f49ca2c39a45045->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_res == NULL );
        var_res = tmp_assign_source_16;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_39fc87ceaa1647196f49ca2c39a45045 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_39fc87ceaa1647196f49ca2c39a45045 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_39fc87ceaa1647196f49ca2c39a45045, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_39fc87ceaa1647196f49ca2c39a45045->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_39fc87ceaa1647196f49ca2c39a45045, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_39fc87ceaa1647196f49ca2c39a45045,
        type_description_1,
        par_self,
        par_query,
        par_args,
        var_db,
        var_nargs,
        var_m,
        var_item,
        var_key,
        var_res
    );


    // Release cached frame.
    if ( frame_39fc87ceaa1647196f49ca2c39a45045 == cache_frame_39fc87ceaa1647196f49ca2c39a45045 )
    {
        Py_DECREF( frame_39fc87ceaa1647196f49ca2c39a45045 );
    }
    cache_frame_39fc87ceaa1647196f49ca2c39a45045 = NULL;

    assertFrameObject( frame_39fc87ceaa1647196f49ca2c39a45045 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_res );
    tmp_return_value = var_res;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_13_execute );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_db );
    Py_DECREF( var_db );
    var_db = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_nargs );
    var_nargs = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    Py_XDECREF( par_query );
    par_query = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_db );
    var_db = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_nargs );
    var_nargs = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( par_query );
    par_query = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_13_execute );
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


static PyObject *impl_MySQLdb$cursors$$$function_14_executemany( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_query = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_q_prefix = NULL;
    PyObject *var_m = NULL;
    PyObject *var_q_postfix = NULL;
    PyObject *var_q_values = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_3458061e3ef75c9ea827a9645797ace0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3458061e3ef75c9ea827a9645797ace0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3458061e3ef75c9ea827a9645797ace0, codeobj_3458061e3ef75c9ea827a9645797ace0, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3458061e3ef75c9ea827a9645797ace0 = cache_frame_3458061e3ef75c9ea827a9645797ace0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3458061e3ef75c9ea827a9645797ace0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3458061e3ef75c9ea827a9645797ace0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_slicedel_target_1;
        PyObject *tmp_source_name_1;
        Py_ssize_t tmp_slicedelslicedel_index_lower_1;
        Py_ssize_t tmp_slicedel_index_upper_1;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_1 = PyCell_GET( par_self );
        tmp_slicedel_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_messages );
        if ( tmp_slicedel_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
        tmp_slicedelslicedel_index_lower_1 = 0;
        tmp_slicedel_index_upper_1 = PY_SSIZE_T_MAX;
        tmp_result = DEL_INDEX_SLICE( tmp_slicedel_target_1, tmp_slicedelslicedel_index_lower_1, tmp_slicedel_index_upper_1 );
        Py_DECREF( tmp_slicedel_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 221;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( par_args );
        tmp_operand_name_1 = par_args;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;
            type_description_1 = "ccooooo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_RE_INSERT_VALUES );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RE_INSERT_VALUES );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RE_INSERT_VALUES" );
            exception_tb = NULL;

            exception_lineno = 226;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_query ) );
        tmp_args_element_name_1 = PyCell_GET( par_query );
        frame_3458061e3ef75c9ea827a9645797ace0->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_match, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
        assert( var_m == NULL );
        var_m = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_m );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_m );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_m );
            tmp_called_instance_2 = var_m;
            frame_3458061e3ef75c9ea827a9645797ace0->m_frame.f_lineno = 228;
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_tuple_empty;
            tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            assert( var_q_prefix == NULL );
            var_q_prefix = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_m );
            tmp_called_instance_4 = var_m;
            frame_3458061e3ef75c9ea827a9645797ace0->m_frame.f_lineno = 229;
            tmp_called_instance_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            frame_3458061e3ef75c9ea827a9645797ace0->m_frame.f_lineno = 229;
            tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_rstrip );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 229;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            assert( var_q_values == NULL );
            var_q_values = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            PyObject *tmp_called_instance_5;
            CHECK_OBJECT( var_m );
            tmp_called_instance_5 = var_m;
            frame_3458061e3ef75c9ea827a9645797ace0->m_frame.f_lineno = 230;
            tmp_or_left_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

            if ( tmp_or_left_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
            if ( tmp_or_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_or_left_value_1 );

                exception_lineno = 230;
                type_description_1 = "ccooooo";
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
            Py_DECREF( tmp_or_left_value_1 );
            tmp_or_right_value_1 = const_str_empty;
            Py_INCREF( tmp_or_right_value_1 );
            tmp_assign_source_4 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_assign_source_4 = tmp_or_left_value_1;
            or_end_1:;
            assert( var_q_postfix == NULL );
            var_q_postfix = tmp_assign_source_4;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_2;
            int tmp_and_left_truth_1;
            PyObject *tmp_and_left_value_1;
            PyObject *tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_q_values );
            tmp_subscribed_name_1 = var_q_values;
            tmp_subscript_name_1 = const_int_0;
            tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = const_str_chr_40;
            tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_and_left_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
            if ( tmp_and_left_truth_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_and_left_value_1 );

                exception_lineno = 231;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            if ( tmp_and_left_truth_1 == 1 )
            {
                goto and_right_1;
            }
            else
            {
                goto and_left_1;
            }
            and_right_1:;
            Py_DECREF( tmp_and_left_value_1 );
            CHECK_OBJECT( var_q_values );
            tmp_subscribed_name_2 = var_q_values;
            tmp_subscript_name_2 = const_int_neg_1;
            tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, -1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_str_chr_41;
            tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_and_right_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_operand_name_2 = tmp_and_left_value_1;
            and_end_1:;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                tmp_raise_type_1 = PyExc_AssertionError;
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_lineno = 231;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_2 = PyCell_GET( par_self );
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__do_execute_many );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_q_prefix );
            tmp_args_element_name_2 = var_q_prefix;
            CHECK_OBJECT( var_q_values );
            tmp_args_element_name_3 = var_q_values;
            CHECK_OBJECT( var_q_postfix );
            tmp_args_element_name_4 = var_q_postfix;
            CHECK_OBJECT( par_args );
            tmp_args_element_name_5 = par_args;
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_source_name_3 = PyCell_GET( par_self );
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_max_stmt_length );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 233;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( par_self ) );
            tmp_called_instance_6 = PyCell_GET( par_self );
            frame_3458061e3ef75c9ea827a9645797ace0->m_frame.f_lineno = 234;
            tmp_source_name_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain__get_db );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_6 );

                exception_lineno = 234;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_encoding );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_6 );

                exception_lineno = 234;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            frame_3458061e3ef75c9ea827a9645797ace0->m_frame.f_lineno = 232;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_6 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_sum_sequence_1;
        PyObject *tmp_assattr_target_1;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_args );
            tmp_iter_arg_1 = par_args;
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "ccooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_5;
        }
        // Tried code:
        tmp_sum_sequence_1 = MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[1] = par_query;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[1] );
        ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[2] = par_self;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_sum_sequence_1)->m_closure[2] );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_14_executemany );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_1;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_14_executemany );
        return NULL;
        outline_result_1:;
        tmp_assattr_name_1 = BUILTIN_SUM1( tmp_sum_sequence_1 );
        Py_DECREF( tmp_sum_sequence_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_assattr_target_1 = PyCell_GET( par_self );
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rowcount, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( PyCell_GET( par_self ) );
        tmp_source_name_5 = PyCell_GET( par_self );
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rowcount );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "ccooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3458061e3ef75c9ea827a9645797ace0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3458061e3ef75c9ea827a9645797ace0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3458061e3ef75c9ea827a9645797ace0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3458061e3ef75c9ea827a9645797ace0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3458061e3ef75c9ea827a9645797ace0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3458061e3ef75c9ea827a9645797ace0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3458061e3ef75c9ea827a9645797ace0,
        type_description_1,
        par_self,
        par_query,
        par_args,
        var_q_prefix,
        var_m,
        var_q_postfix,
        var_q_values
    );


    // Release cached frame.
    if ( frame_3458061e3ef75c9ea827a9645797ace0 == cache_frame_3458061e3ef75c9ea827a9645797ace0 )
    {
        Py_DECREF( frame_3458061e3ef75c9ea827a9645797ace0 );
    }
    cache_frame_3458061e3ef75c9ea827a9645797ace0 = NULL;

    assertFrameObject( frame_3458061e3ef75c9ea827a9645797ace0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_14_executemany );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_q_prefix );
    var_q_prefix = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_q_postfix );
    var_q_postfix = NULL;

    Py_XDECREF( var_q_values );
    var_q_values = NULL;

    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

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

    Py_XDECREF( var_q_prefix );
    var_q_prefix = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_q_postfix );
    var_q_postfix = NULL;

    Py_XDECREF( var_q_values );
    var_q_values = NULL;

    CHECK_OBJECT( (PyObject *)par_query );
    Py_DECREF( par_query );
    par_query = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_14_executemany );
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



struct MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_locals {
    PyObject *var_arg;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_locals *generator_heap = (struct MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_00eafbe0c77fc4dff3201ce5d4bab827, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Ncco";
                generator_heap->exception_lineno = 236;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_arg );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[2] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 236;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = PyCell_GET( generator->m_closure[2] );
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_execute );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 236;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "query" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 236;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_args_element_name_2 = generator_heap->var_arg;
        generator->m_frame->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 236;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), &tmp_args_element_name_2, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 236;
            generator_heap->type_description_1 = "Ncco";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 236;
        generator_heap->type_description_1 = "Ncco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator->m_closure[1],
            generator->m_closure[2],
            generator_heap->var_arg
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_context,
        module_MySQLdb$cursors,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_00eafbe0c77fc4dff3201ce5d4bab827,
        3,
        sizeof(struct MySQLdb$cursors$$$function_14_executemany$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_MySQLdb$cursors$$$function_15__do_execute_many( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prefix = python_pars[ 1 ];
    PyObject *par_values = python_pars[ 2 ];
    PyObject *par_postfix = python_pars[ 3 ];
    PyObject *par_args = python_pars[ 4 ];
    PyObject *par_max_stmt_length = python_pars[ 5 ];
    PyObject *par_encoding = python_pars[ 6 ];
    PyObject *var_v = NULL;
    PyObject *var_rows = NULL;
    PyObject *var_sql = NULL;
    PyObject *var_escape = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_conn = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b, codeobj_4b4f8a6f4ea8aebbfcdf5ce35ad0485b, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b = cache_frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 240;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__get_db );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 240;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_conn == NULL );
        var_conn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__escape_args );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_escape == NULL );
        var_escape = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_prefix );
        tmp_isinstance_inst_1 = par_prefix;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode );

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

            exception_lineno = 242;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_prefix );
            tmp_called_instance_2 = par_prefix;
            CHECK_OBJECT( par_encoding );
            tmp_args_element_name_1 = par_encoding;
            frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 243;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_prefix;
                assert( old != NULL );
                par_prefix = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_values );
        tmp_isinstance_inst_2 = par_values;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "unicode" );
            exception_tb = NULL;

            exception_lineno = 244;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 244;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_values );
            tmp_called_instance_3 = par_values;
            CHECK_OBJECT( par_encoding );
            tmp_args_element_name_2 = par_encoding;
            frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 245;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_values;
                assert( old != NULL );
                par_values = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_postfix );
        tmp_isinstance_inst_3 = par_postfix;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode );

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

            exception_lineno = 246;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_3 = tmp_mvar_value_3;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "ooooooooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_postfix );
            tmp_called_instance_4 = par_postfix;
            CHECK_OBJECT( par_encoding );
            tmp_args_element_name_3 = par_encoding;
            frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 247;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_encode, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 247;
                type_description_1 = "ooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_postfix;
                assert( old != NULL );
                par_postfix = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_bytearray_arg_1;
        CHECK_OBJECT( par_prefix );
        tmp_bytearray_arg_1 = par_prefix;
        tmp_assign_source_6 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_sql == NULL );
        var_sql = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_args );
        tmp_iter_arg_1 = par_args;
        tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 249;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert( old != NULL );
            par_args = tmp_assign_source_7;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_value_name_1;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( par_values );
        tmp_left_name_1 = par_values;
        CHECK_OBJECT( var_escape );
        tmp_called_name_1 = var_escape;
        CHECK_OBJECT( par_args );
        tmp_value_name_1 = par_args;
        tmp_args_element_name_4 = ITERATOR_NEXT( tmp_value_name_1 );
        if ( tmp_args_element_name_4 == NULL )
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


            type_description_1 = "ooooooooooooo";
            exception_lineno = 250;
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_conn );
        tmp_args_element_name_5 = var_conn;
        frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_v == NULL );
        var_v = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_sql );
        tmp_left_name_2 = var_sql;
        CHECK_OBJECT( var_v );
        tmp_right_name_2 = var_v;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_left_name_2;
        var_sql = tmp_assign_source_9;

    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_0;
        assert( var_rows == NULL );
        Py_INCREF( tmp_assign_source_10 );
        var_rows = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( par_args );
        tmp_iter_arg_2 = par_args;
        tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_12 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooooo";
                exception_lineno = 253;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_12;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_13 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_13;
            Py_INCREF( var_arg );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( par_values );
        tmp_left_name_3 = par_values;
        CHECK_OBJECT( var_escape );
        tmp_called_name_2 = var_escape;
        CHECK_OBJECT( var_arg );
        tmp_args_element_name_6 = var_arg;
        CHECK_OBJECT( var_conn );
        tmp_args_element_name_7 = var_conn;
        frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_right_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_v;
            assert( old != NULL );
            var_v = tmp_assign_source_14;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_5;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_sql );
        tmp_len_arg_1 = var_sql;
        tmp_left_name_6 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_left_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_v );
        tmp_len_arg_2 = var_v;
        tmp_right_name_4 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_right_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_6 );

            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_6, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_right_name_4 );
        assert( !(tmp_left_name_5 == NULL) );
        CHECK_OBJECT( par_postfix );
        tmp_len_arg_3 = par_postfix;
        tmp_right_name_5 = BUILTIN_LEN( tmp_len_arg_3 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_5 );

            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_5, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_5 );
        Py_DECREF( tmp_right_name_5 );
        assert( !(tmp_left_name_4 == NULL) );
        tmp_right_name_6 = const_int_pos_1;
        tmp_compexpr_left_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_4, tmp_right_name_6 );
        Py_DECREF( tmp_left_name_4 );
        assert( !(tmp_compexpr_left_1 == NULL) );
        CHECK_OBJECT( par_max_stmt_length );
        tmp_compexpr_right_1 = par_max_stmt_length;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_left_name_7;
            PyObject *tmp_right_name_7;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            if ( var_rows == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rows" );
                exception_tb = NULL;

                exception_lineno = 256;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_left_name_7 = var_rows;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_execute );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_sql );
            tmp_left_name_8 = var_sql;
            CHECK_OBJECT( par_postfix );
            tmp_right_name_8 = par_postfix;
            tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_8, tmp_right_name_8 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 256;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 256;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_right_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_15 = tmp_left_name_7;
            var_rows = tmp_assign_source_15;

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_bytearray_arg_2;
            CHECK_OBJECT( par_prefix );
            tmp_bytearray_arg_2 = par_prefix;
            tmp_assign_source_16 = BUILTIN_BYTEARRAY1( tmp_bytearray_arg_2 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_sql;
                assert( old != NULL );
                var_sql = tmp_assign_source_16;
                Py_DECREF( old );
            }

        }
        goto branch_end_4;
        branch_no_4:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            CHECK_OBJECT( var_sql );
            tmp_left_name_9 = var_sql;
            tmp_right_name_9 = const_str_chr_44;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_STR_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 259;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_17 = tmp_left_name_9;
            var_sql = tmp_assign_source_17;

        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        CHECK_OBJECT( var_sql );
        tmp_left_name_10 = var_sql;
        CHECK_OBJECT( var_v );
        tmp_right_name_10 = var_v;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = tmp_left_name_10;
        var_sql = tmp_assign_source_18;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        if ( var_rows == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rows" );
            exception_tb = NULL;

            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_11 = var_rows;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_execute );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_sql );
        tmp_left_name_12 = var_sql;
        CHECK_OBJECT( par_postfix );
        tmp_right_name_12 = par_postfix;
        tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_12, tmp_right_name_12 );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_4 );

            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame.f_lineno = 261;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_right_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_right_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
        Py_DECREF( tmp_right_name_11 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 261;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = tmp_left_name_11;
        var_rows = tmp_assign_source_19;

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( var_rows );
        tmp_assattr_name_1 = var_rows;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rowcount, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b,
        type_description_1,
        par_self,
        par_prefix,
        par_values,
        par_postfix,
        par_args,
        par_max_stmt_length,
        par_encoding,
        var_v,
        var_rows,
        var_sql,
        var_escape,
        var_arg,
        var_conn
    );


    // Release cached frame.
    if ( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b == cache_frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b )
    {
        Py_DECREF( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b );
    }
    cache_frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b = NULL;

    assertFrameObject( frame_4b4f8a6f4ea8aebbfcdf5ce35ad0485b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_rows );
    tmp_return_value = var_rows;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_15__do_execute_many );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_max_stmt_length );
    Py_DECREF( par_max_stmt_length );
    par_max_stmt_length = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    CHECK_OBJECT( (PyObject *)par_postfix );
    Py_DECREF( par_postfix );
    par_postfix = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_prefix );
    Py_DECREF( par_prefix );
    par_prefix = NULL;

    CHECK_OBJECT( (PyObject *)var_rows );
    Py_DECREF( var_rows );
    var_rows = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)var_sql );
    Py_DECREF( var_sql );
    var_sql = NULL;

    CHECK_OBJECT( (PyObject *)var_escape );
    Py_DECREF( var_escape );
    var_escape = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    CHECK_OBJECT( (PyObject *)var_conn );
    Py_DECREF( var_conn );
    var_conn = NULL;

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

    CHECK_OBJECT( (PyObject *)par_max_stmt_length );
    Py_DECREF( par_max_stmt_length );
    par_max_stmt_length = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    CHECK_OBJECT( (PyObject *)par_encoding );
    Py_DECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_postfix );
    par_postfix = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_prefix );
    par_prefix = NULL;

    Py_XDECREF( var_rows );
    var_rows = NULL;

    Py_XDECREF( par_values );
    par_values = NULL;

    Py_XDECREF( var_sql );
    var_sql = NULL;

    Py_XDECREF( var_escape );
    var_escape = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_15__do_execute_many );
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


static PyObject *impl_MySQLdb$cursors$$$function_16_callproc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_procname = python_pars[ 1 ];
    PyObject *par_args = python_pars[ 2 ];
    PyObject *var_i = NULL;
    struct Nuitka_CellObject *var_db = PyCell_EMPTY();
    PyObject *var_q = NULL;
    struct Nuitka_CellObject *var_fmt = PyCell_EMPTY();
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_9554a618f2d85324acb61f0f4812a3e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9554a618f2d85324acb61f0f4812a3e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9554a618f2d85324acb61f0f4812a3e9, codeobj_9554a618f2d85324acb61f0f4812a3e9, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9554a618f2d85324acb61f0f4812a3e9 = cache_frame_9554a618f2d85324acb61f0f4812a3e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9554a618f2d85324acb61f0f4812a3e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9554a618f2d85324acb61f0f4812a3e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 293;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__get_db );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooococ";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_db ) == NULL );
        PyCell_SET( var_db, tmp_assign_source_1 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_procname );
        tmp_isinstance_inst_1 = par_procname;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode );

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

            exception_lineno = 294;
            type_description_1 = "oooococ";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oooococ";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_procname );
            tmp_source_name_1 = par_procname;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( var_db ) );
            tmp_source_name_2 = PyCell_GET( var_db );
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_encoding );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 295;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 295;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 295;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_procname;
                assert( old != NULL );
                par_procname = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_args );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_args );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooococ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_right_name_2;
            tmp_left_name_2 = const_str_digest_beb5da4d59517a0c09f9a0b24cdc2812;
            CHECK_OBJECT( par_procname );
            tmp_right_name_1 = par_procname;
            tmp_left_name_1 = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            tmp_right_name_2 = const_str_digest_6e376725284b737a764843e457c5af73;
            tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_STR( tmp_left_name_1, tmp_right_name_2 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 297;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            assert( PyCell_GET( var_fmt ) == NULL );
            PyCell_SET( var_fmt, tmp_assign_source_3 );

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_left_name_3 = const_str_digest_18150e5208b041ca42dcfd8091102432;
            tmp_source_name_3 = const_str_chr_44;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
            assert( !(tmp_called_name_2 == NULL) );
            {
                PyObject *tmp_assign_source_5;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_3;
                tmp_called_name_3 = (PyObject *)&PyEnum_Type;
                CHECK_OBJECT( par_args );
                tmp_args_element_name_3 = par_args;
                frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 299;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 299;
                    type_description_1 = "oooococ";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 298;
                    type_description_1 = "oooococ";
                    goto frame_exception_exit_1;
                }
                assert( tmp_genexpr_1__$0 == NULL );
                tmp_genexpr_1__$0 = tmp_assign_source_5;
            }
            // Tried code:
            tmp_args_element_name_2 = MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[0] = var_db;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[0] );
            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[1] = var_fmt;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[1] );
            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[2] = PyCell_NEW0( tmp_genexpr_1__$0 );


            goto try_return_handler_2;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_16_callproc );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            goto outline_result_1;
            // End of try:
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_16_callproc );
            return NULL;
            outline_result_1:;
            frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 298;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 298;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            assert( var_q == NULL );
            var_q = tmp_assign_source_4;
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            CHECK_OBJECT( var_q );
            tmp_args_element_name_4 = var_q;
            frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 300;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__query, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 301;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_nextset );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 301;
                type_description_1 = "oooococ";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_left_name_4 = const_str_digest_b61a3c6a32739ad7ca266897a0f7b651;
        CHECK_OBJECT( par_procname );
        tmp_tuple_element_1 = par_procname;
        tmp_right_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_1 );
        tmp_source_name_4 = const_str_chr_44;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
        assert( !(tmp_called_name_4 == NULL) );
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_range_arg_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_args );
            tmp_len_arg_1 = par_args;
            tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_range_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooococ";
                goto try_except_handler_3;
            }
            tmp_iter_arg_2 = BUILTIN_RANGE( tmp_range_arg_1 );
            Py_DECREF( tmp_range_arg_1 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooococ";
                goto try_except_handler_3;
            }
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "oooococ";
                goto try_except_handler_3;
            }
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assign_source_8;
            tmp_assign_source_8 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_8;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_9 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_9 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooococ";
                    exception_lineno = 304;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_9;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_10 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_10;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
            tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
            tmp_left_name_5 = const_str_digest_abef224fef2077763f6f3d4753e94ed2;
            CHECK_OBJECT( par_procname );
            tmp_tuple_element_2 = par_procname;
            tmp_right_name_5 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( var_i );
            tmp_tuple_element_2 = var_i;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_2 );
            tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
            Py_DECREF( tmp_right_name_5 );
            if ( tmp_append_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "oooococ";
                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_1 ) );
            tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
            Py_DECREF( tmp_append_value_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "oooococ";
                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "oooococ";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_args_element_name_5 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_args_element_name_5 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_16_callproc );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
        Py_DECREF( tmp_list_contraction_1__$0 );
        tmp_list_contraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
        Py_DECREF( tmp_list_contraction_1__contraction_result );
        tmp_list_contraction_1__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
        tmp_list_contraction_1__iter_value_0 = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_16_callproc );
        return NULL;
        outline_result_2:;
        frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_4 );

            exception_lineno = 304;
            type_description_1 = "oooococ";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_1 );
        tmp_assign_source_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooococ";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_q;
            var_q = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT( var_q );
        tmp_args_element_name_6 = var_q;
        frame_9554a618f2d85324acb61f0f4812a3e9->m_frame.f_lineno = 306;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain__query, call_args );
        }

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 306;
            type_description_1 = "oooococ";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9554a618f2d85324acb61f0f4812a3e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9554a618f2d85324acb61f0f4812a3e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9554a618f2d85324acb61f0f4812a3e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9554a618f2d85324acb61f0f4812a3e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9554a618f2d85324acb61f0f4812a3e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9554a618f2d85324acb61f0f4812a3e9,
        type_description_1,
        par_self,
        par_procname,
        par_args,
        var_i,
        var_db,
        var_q,
        var_fmt
    );


    // Release cached frame.
    if ( frame_9554a618f2d85324acb61f0f4812a3e9 == cache_frame_9554a618f2d85324acb61f0f4812a3e9 )
    {
        Py_DECREF( frame_9554a618f2d85324acb61f0f4812a3e9 );
    }
    cache_frame_9554a618f2d85324acb61f0f4812a3e9 = NULL;

    assertFrameObject( frame_9554a618f2d85324acb61f0f4812a3e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_args );
    tmp_return_value = par_args;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_16_callproc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_db );
    Py_DECREF( var_db );
    var_db = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

    CHECK_OBJECT( (PyObject *)par_procname );
    Py_DECREF( par_procname );
    par_procname = NULL;

    CHECK_OBJECT( (PyObject *)var_fmt );
    Py_DECREF( var_fmt );
    var_fmt = NULL;

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

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_db );
    Py_DECREF( var_db );
    var_db = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( par_procname );
    par_procname = NULL;

    CHECK_OBJECT( (PyObject *)var_fmt );
    Py_DECREF( var_fmt );
    var_fmt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_16_callproc );
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



struct MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_locals {
    PyObject *var_index;
    PyObject *var_arg;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_locals *generator_heap = (struct MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_index = NULL;
    generator_heap->var_arg = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_d5bfe04d6f4b479c2a0be525a9c68b13, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[2] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[2] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Nocco";
                generator_heap->exception_lineno = 298;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "Nocco";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Nocco";
            generator_heap->exception_lineno = 298;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Nocco";
            generator_heap->exception_lineno = 298;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( generator_heap->tmp_iterator_attempt == NULL ))
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
                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                    generator_heap->type_description_1 = "Nocco";
                    generator_heap->exception_lineno = 298;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( generator_heap->tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

            generator_heap->type_description_1 = "Nocco";
            generator_heap->exception_lineno = 298;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_index;
            generator_heap->var_index = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_index );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_arg );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "fmt" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "Nocco";
            goto try_except_handler_2;
        }

        tmp_left_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_index );
        tmp_tuple_element_1 = generator_heap->var_index;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_right_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "db" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "Nocco";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = PyCell_GET( generator->m_closure[0] );
        CHECK_OBJECT( generator_heap->var_arg );
        tmp_args_element_name_1 = generator_heap->var_arg;
        generator->m_frame->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_literal, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_right_name_1 );

            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "Nocco";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_expression_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "Nocco";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_left_name_1, sizeof(PyObject *), &tmp_right_name_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 298;
            generator_heap->type_description_1 = "Nocco";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 298;
        generator_heap->type_description_1 = "Nocco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_index,
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_arg
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_index );
    generator_heap->var_index = NULL;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_index );
    generator_heap->var_index = NULL;

    Py_XDECREF( generator_heap->var_arg );
    generator_heap->var_arg = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_context,
        module_MySQLdb$cursors,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_d5bfe04d6f4b479c2a0be525a9c68b13,
        3,
        sizeof(struct MySQLdb$cursors$$$function_16_callproc$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_MySQLdb$cursors$$$function_17__query( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_q = python_pars[ 1 ];
    PyObject *var_db = NULL;
    struct Nuitka_FrameObject *frame_b4789c744653315702b21806138f3537;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b4789c744653315702b21806138f3537 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4789c744653315702b21806138f3537, codeobj_b4789c744653315702b21806138f3537, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4789c744653315702b21806138f3537 = cache_frame_b4789c744653315702b21806138f3537;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4789c744653315702b21806138f3537 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4789c744653315702b21806138f3537 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_b4789c744653315702b21806138f3537->m_frame.f_lineno = 310;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__get_db );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_db == NULL );
        var_db = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__result, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 311;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_db );
        tmp_called_instance_2 = var_db;
        CHECK_OBJECT( par_q );
        tmp_args_element_name_1 = par_q;
        frame_b4789c744653315702b21806138f3537->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_query, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT( var_db );
        tmp_args_element_name_2 = var_db;
        frame_b4789c744653315702b21806138f3537->m_frame.f_lineno = 313;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain__do_get_result, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 313;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        frame_b4789c744653315702b21806138f3537->m_frame.f_lineno = 314;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain__post_get_result );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_q );
        tmp_assattr_name_2 = par_q;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__executed, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 315;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_q );
        tmp_assattr_name_3 = par_q;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__last_executed, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rowcount );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4789c744653315702b21806138f3537 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4789c744653315702b21806138f3537 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4789c744653315702b21806138f3537 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4789c744653315702b21806138f3537, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4789c744653315702b21806138f3537->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4789c744653315702b21806138f3537, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4789c744653315702b21806138f3537,
        type_description_1,
        par_self,
        par_q,
        var_db
    );


    // Release cached frame.
    if ( frame_b4789c744653315702b21806138f3537 == cache_frame_b4789c744653315702b21806138f3537 )
    {
        Py_DECREF( frame_b4789c744653315702b21806138f3537 );
    }
    cache_frame_b4789c744653315702b21806138f3537 = NULL;

    assertFrameObject( frame_b4789c744653315702b21806138f3537 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_17__query );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_db );
    Py_DECREF( var_db );
    var_db = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_db );
    var_db = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_17__query );
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


static PyObject *impl_MySQLdb$cursors$$$function_18__fetch_row( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_2b9a8e7d0e269152bcbdb1f666b2fb51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b9a8e7d0e269152bcbdb1f666b2fb51 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2b9a8e7d0e269152bcbdb1f666b2fb51, codeobj_2b9a8e7d0e269152bcbdb1f666b2fb51, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_2b9a8e7d0e269152bcbdb1f666b2fb51 = cache_frame_2b9a8e7d0e269152bcbdb1f666b2fb51;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__result );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "oo";
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
        tmp_return_value = const_tuple_empty;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__result );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_fetch_row );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_args_element_name_1 = par_size;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__fetch_type );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2b9a8e7d0e269152bcbdb1f666b2fb51->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2b9a8e7d0e269152bcbdb1f666b2fb51, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2b9a8e7d0e269152bcbdb1f666b2fb51->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2b9a8e7d0e269152bcbdb1f666b2fb51, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2b9a8e7d0e269152bcbdb1f666b2fb51,
        type_description_1,
        par_self,
        par_size
    );


    // Release cached frame.
    if ( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 == cache_frame_2b9a8e7d0e269152bcbdb1f666b2fb51 )
    {
        Py_DECREF( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 );
    }
    cache_frame_2b9a8e7d0e269152bcbdb1f666b2fb51 = NULL;

    assertFrameObject( frame_2b9a8e7d0e269152bcbdb1f666b2fb51 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_18__fetch_row );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_18__fetch_row );
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


static PyObject *impl_MySQLdb$cursors$$$function_19___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_7ff3cacc65356953ad41b8e50c05c31f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ff3cacc65356953ad41b8e50c05c31f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ff3cacc65356953ad41b8e50c05c31f, codeobj_7ff3cacc65356953ad41b8e50c05c31f, module_MySQLdb$cursors, sizeof(void *) );
    frame_7ff3cacc65356953ad41b8e50c05c31f = cache_frame_7ff3cacc65356953ad41b8e50c05c31f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ff3cacc65356953ad41b8e50c05c31f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ff3cacc65356953ad41b8e50c05c31f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_iter_callable_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_iter_sentinel_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_iter_callable_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fetchone );
        if ( tmp_iter_callable_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_iter_sentinel_1 = Py_None;
        tmp_return_value = BUILTIN_ITER2( tmp_iter_callable_1, tmp_iter_sentinel_1 );
        Py_DECREF( tmp_iter_callable_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ff3cacc65356953ad41b8e50c05c31f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ff3cacc65356953ad41b8e50c05c31f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ff3cacc65356953ad41b8e50c05c31f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ff3cacc65356953ad41b8e50c05c31f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ff3cacc65356953ad41b8e50c05c31f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ff3cacc65356953ad41b8e50c05c31f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ff3cacc65356953ad41b8e50c05c31f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7ff3cacc65356953ad41b8e50c05c31f == cache_frame_7ff3cacc65356953ad41b8e50c05c31f )
    {
        Py_DECREF( frame_7ff3cacc65356953ad41b8e50c05c31f );
    }
    cache_frame_7ff3cacc65356953ad41b8e50c05c31f = NULL;

    assertFrameObject( frame_7ff3cacc65356953ad41b8e50c05c31f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_19___iter__ );
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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_19___iter__ );
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


static PyObject *impl_MySQLdb$cursors$$$function_20__get_result( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_96a55ef9296244a2d9af4ccf5efc6f7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96a55ef9296244a2d9af4ccf5efc6f7e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_96a55ef9296244a2d9af4ccf5efc6f7e, codeobj_96a55ef9296244a2d9af4ccf5efc6f7e, module_MySQLdb$cursors, sizeof(void *) );
    frame_96a55ef9296244a2d9af4ccf5efc6f7e = cache_frame_96a55ef9296244a2d9af4ccf5efc6f7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_96a55ef9296244a2d9af4ccf5efc6f7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_96a55ef9296244a2d9af4ccf5efc6f7e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_96a55ef9296244a2d9af4ccf5efc6f7e->m_frame.f_lineno = 346;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__get_db );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_96a55ef9296244a2d9af4ccf5efc6f7e->m_frame.f_lineno = 346;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_store_result );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96a55ef9296244a2d9af4ccf5efc6f7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_96a55ef9296244a2d9af4ccf5efc6f7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_96a55ef9296244a2d9af4ccf5efc6f7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_96a55ef9296244a2d9af4ccf5efc6f7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_96a55ef9296244a2d9af4ccf5efc6f7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_96a55ef9296244a2d9af4ccf5efc6f7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_96a55ef9296244a2d9af4ccf5efc6f7e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_96a55ef9296244a2d9af4ccf5efc6f7e == cache_frame_96a55ef9296244a2d9af4ccf5efc6f7e )
    {
        Py_DECREF( frame_96a55ef9296244a2d9af4ccf5efc6f7e );
    }
    cache_frame_96a55ef9296244a2d9af4ccf5efc6f7e = NULL;

    assertFrameObject( frame_96a55ef9296244a2d9af4ccf5efc6f7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_20__get_result );
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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_20__get_result );
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


static PyObject *impl_MySQLdb$cursors$$$function_21__post_get_result( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6e0ac2c3f8a9d81e84d907c7038331e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6e0ac2c3f8a9d81e84d907c7038331e1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6e0ac2c3f8a9d81e84d907c7038331e1, codeobj_6e0ac2c3f8a9d81e84d907c7038331e1, module_MySQLdb$cursors, sizeof(void *) );
    frame_6e0ac2c3f8a9d81e84d907c7038331e1 = cache_frame_6e0ac2c3f8a9d81e84d907c7038331e1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6e0ac2c3f8a9d81e84d907c7038331e1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6e0ac2c3f8a9d81e84d907c7038331e1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_6e0ac2c3f8a9d81e84d907c7038331e1->m_frame.f_lineno = 349;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__fetch_row, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__rows, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 349;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__result, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e0ac2c3f8a9d81e84d907c7038331e1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6e0ac2c3f8a9d81e84d907c7038331e1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6e0ac2c3f8a9d81e84d907c7038331e1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6e0ac2c3f8a9d81e84d907c7038331e1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6e0ac2c3f8a9d81e84d907c7038331e1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6e0ac2c3f8a9d81e84d907c7038331e1,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6e0ac2c3f8a9d81e84d907c7038331e1 == cache_frame_6e0ac2c3f8a9d81e84d907c7038331e1 )
    {
        Py_DECREF( frame_6e0ac2c3f8a9d81e84d907c7038331e1 );
    }
    cache_frame_6e0ac2c3f8a9d81e84d907c7038331e1 = NULL;

    assertFrameObject( frame_6e0ac2c3f8a9d81e84d907c7038331e1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_21__post_get_result );
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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_21__post_get_result );
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


static PyObject *impl_MySQLdb$cursors$$$function_22_fetchone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_e8a9c15e7916aef18a775337c8b26ea3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e8a9c15e7916aef18a775337c8b26ea3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8a9c15e7916aef18a775337c8b26ea3, codeobj_e8a9c15e7916aef18a775337c8b26ea3, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_e8a9c15e7916aef18a775337c8b26ea3 = cache_frame_e8a9c15e7916aef18a775337c8b26ea3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8a9c15e7916aef18a775337c8b26ea3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8a9c15e7916aef18a775337c8b26ea3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_e8a9c15e7916aef18a775337c8b26ea3->m_frame.f_lineno = 355;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 355;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rownumber );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__rows );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 356;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__rows );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_rownumber );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_1 );

            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rownumber );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assattr_name_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rownumber, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8a9c15e7916aef18a775337c8b26ea3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8a9c15e7916aef18a775337c8b26ea3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8a9c15e7916aef18a775337c8b26ea3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8a9c15e7916aef18a775337c8b26ea3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8a9c15e7916aef18a775337c8b26ea3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8a9c15e7916aef18a775337c8b26ea3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8a9c15e7916aef18a775337c8b26ea3,
        type_description_1,
        par_self,
        var_result
    );


    // Release cached frame.
    if ( frame_e8a9c15e7916aef18a775337c8b26ea3 == cache_frame_e8a9c15e7916aef18a775337c8b26ea3 )
    {
        Py_DECREF( frame_e8a9c15e7916aef18a775337c8b26ea3 );
    }
    cache_frame_e8a9c15e7916aef18a775337c8b26ea3 = NULL;

    assertFrameObject( frame_e8a9c15e7916aef18a775337c8b26ea3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_22_fetchone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_22_fetchone );
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


static PyObject *impl_MySQLdb$cursors$$$function_23_fetchmany( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_end = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_fc5ffbdba7bf140abef534094979c677;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fc5ffbdba7bf140abef534094979c677 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc5ffbdba7bf140abef534094979c677, codeobj_fc5ffbdba7bf140abef534094979c677, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fc5ffbdba7bf140abef534094979c677 = cache_frame_fc5ffbdba7bf140abef534094979c677;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc5ffbdba7bf140abef534094979c677 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc5ffbdba7bf140abef534094979c677 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_fc5ffbdba7bf140abef534094979c677->m_frame.f_lineno = 365;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rownumber );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_or_left_value_1 = par_size;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 366;
            type_description_1 = "oooo";
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
        tmp_source_name_2 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arraysize );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_right_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_end == NULL );
        var_end = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_slice_upper_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__rows );
        if ( tmp_slice_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_slice_lower_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_rownumber );
        if ( tmp_slice_lower_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_slice_source_1 );

            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_end );
        tmp_slice_upper_1 = var_end;
        tmp_assign_source_2 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
        Py_DECREF( tmp_slice_source_1 );
        Py_DECREF( tmp_slice_lower_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_1;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_min );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( var_end );
        tmp_args_element_name_1 = var_end;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__rows );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fc5ffbdba7bf140abef534094979c677->m_frame.f_lineno = 368;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rownumber, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc5ffbdba7bf140abef534094979c677 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc5ffbdba7bf140abef534094979c677 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc5ffbdba7bf140abef534094979c677, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc5ffbdba7bf140abef534094979c677->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc5ffbdba7bf140abef534094979c677, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc5ffbdba7bf140abef534094979c677,
        type_description_1,
        par_self,
        par_size,
        var_end,
        var_result
    );


    // Release cached frame.
    if ( frame_fc5ffbdba7bf140abef534094979c677 == cache_frame_fc5ffbdba7bf140abef534094979c677 )
    {
        Py_DECREF( frame_fc5ffbdba7bf140abef534094979c677 );
    }
    cache_frame_fc5ffbdba7bf140abef534094979c677 = NULL;

    assertFrameObject( frame_fc5ffbdba7bf140abef534094979c677 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_23_fetchmany );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_end );
    Py_DECREF( var_end );
    var_end = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

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

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_23_fetchmany );
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


static PyObject *impl_MySQLdb$cursors$$$function_24_fetchall( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_694142dd1f61513115322ca2bdfa2863;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_694142dd1f61513115322ca2bdfa2863 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_694142dd1f61513115322ca2bdfa2863, codeobj_694142dd1f61513115322ca2bdfa2863, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_694142dd1f61513115322ca2bdfa2863 = cache_frame_694142dd1f61513115322ca2bdfa2863;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_694142dd1f61513115322ca2bdfa2863 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_694142dd1f61513115322ca2bdfa2863 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_694142dd1f61513115322ca2bdfa2863->m_frame.f_lineno = 373;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rownumber );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 374;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_slice_source_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_slice_lower_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__rows );
            if ( tmp_slice_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 375;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_slice_lower_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rownumber );
            if ( tmp_slice_lower_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_slice_source_1 );

                exception_lineno = 375;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
            Py_DECREF( tmp_slice_source_1 );
            Py_DECREF( tmp_slice_lower_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 375;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__rows );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 377;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert( var_result == NULL );
            var_result = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__rows );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rownumber, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 378;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_694142dd1f61513115322ca2bdfa2863 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_694142dd1f61513115322ca2bdfa2863 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_694142dd1f61513115322ca2bdfa2863, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_694142dd1f61513115322ca2bdfa2863->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_694142dd1f61513115322ca2bdfa2863, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_694142dd1f61513115322ca2bdfa2863,
        type_description_1,
        par_self,
        var_result
    );


    // Release cached frame.
    if ( frame_694142dd1f61513115322ca2bdfa2863 == cache_frame_694142dd1f61513115322ca2bdfa2863 )
    {
        Py_DECREF( frame_694142dd1f61513115322ca2bdfa2863 );
    }
    cache_frame_694142dd1f61513115322ca2bdfa2863 = NULL;

    assertFrameObject( frame_694142dd1f61513115322ca2bdfa2863 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_24_fetchall );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_24_fetchall );
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


static PyObject *impl_MySQLdb$cursors$$$function_25_scroll( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_cb4c0cde213db49596c26f7d70a05b79;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cb4c0cde213db49596c26f7d70a05b79 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb4c0cde213db49596c26f7d70a05b79, codeobj_cb4c0cde213db49596c26f7d70a05b79, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb4c0cde213db49596c26f7d70a05b79 = cache_frame_cb4c0cde213db49596c26f7d70a05b79;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb4c0cde213db49596c26f7d70a05b79 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb4c0cde213db49596c26f7d70a05b79 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_cb4c0cde213db49596c26f7d70a05b79->m_frame.f_lineno = 388;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_mode );
        tmp_compexpr_left_1 = par_mode;
        tmp_compexpr_right_1 = const_str_plain_relative;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 389;
            type_description_1 = "oooo";
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
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rownumber );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_value );
            tmp_right_name_1 = par_value;
            tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 390;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_mode );
            tmp_compexpr_left_2 = par_mode;
            tmp_compexpr_right_2 = const_str_plain_absolute;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 391;
                type_description_1 = "oooo";
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
                CHECK_OBJECT( par_value );
                tmp_assign_source_2 = par_value;
                assert( var_r == NULL );
                Py_INCREF( tmp_assign_source_2 );
                var_r = tmp_assign_source_2;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_operand_name_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_ProgrammingError );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProgrammingError );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProgrammingError" );
                    exception_tb = NULL;

                    exception_lineno = 394;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                tmp_left_name_2 = const_str_digest_e271e1145a5e63f3bd9514ddb53decb1;
                CHECK_OBJECT( par_mode );
                tmp_operand_name_1 = par_mode;
                tmp_right_name_2 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_cb4c0cde213db49596c26f7d70a05b79->m_frame.f_lineno = 394;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 394;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 394;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_source_name_2;
        if ( var_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;

            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = var_r;
        tmp_compexpr_right_3 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        if ( var_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;

            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_r;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__rows );
        if ( tmp_len_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = BUILTIN_LEN( tmp_len_arg_1 );
        Py_DECREF( tmp_len_arg_1 );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 395;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_511ae8841b7b15236ee0ffa5a7a5ad38;
            frame_cb4c0cde213db49596c26f7d70a05b79->m_frame.f_lineno = 396;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_IndexError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 396;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        if ( var_r == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
            exception_tb = NULL;

            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = var_r;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rownumber, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb4c0cde213db49596c26f7d70a05b79 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb4c0cde213db49596c26f7d70a05b79 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb4c0cde213db49596c26f7d70a05b79, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb4c0cde213db49596c26f7d70a05b79->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb4c0cde213db49596c26f7d70a05b79, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb4c0cde213db49596c26f7d70a05b79,
        type_description_1,
        par_self,
        par_value,
        par_mode,
        var_r
    );


    // Release cached frame.
    if ( frame_cb4c0cde213db49596c26f7d70a05b79 == cache_frame_cb4c0cde213db49596c26f7d70a05b79 )
    {
        Py_DECREF( frame_cb4c0cde213db49596c26f7d70a05b79 );
    }
    cache_frame_cb4c0cde213db49596c26f7d70a05b79 = NULL;

    assertFrameObject( frame_cb4c0cde213db49596c26f7d70a05b79 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_25_scroll );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_25_scroll );
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


static PyObject *impl_MySQLdb$cursors$$$function_26___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_efa24b16394786b6d0036c0985215568;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_efa24b16394786b6d0036c0985215568 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_efa24b16394786b6d0036c0985215568, codeobj_efa24b16394786b6d0036c0985215568, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_efa24b16394786b6d0036c0985215568 = cache_frame_efa24b16394786b6d0036c0985215568;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_efa24b16394786b6d0036c0985215568 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_efa24b16394786b6d0036c0985215568 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_efa24b16394786b6d0036c0985215568->m_frame.f_lineno = 400;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 400;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rownumber );
        if ( tmp_and_left_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF( tmp_and_left_value_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__rows );
        if ( tmp_slice_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_slice_lower_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rownumber );
        if ( tmp_slice_lower_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_slice_source_1 );

            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
        Py_DECREF( tmp_slice_source_1 );
        Py_DECREF( tmp_slice_lower_1 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_1 );

            exception_lineno = 401;
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
        Py_DECREF( tmp_or_left_value_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__rows );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_result );
        tmp_iter_arg_1 = var_result;
        tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efa24b16394786b6d0036c0985215568 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_efa24b16394786b6d0036c0985215568 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efa24b16394786b6d0036c0985215568 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_efa24b16394786b6d0036c0985215568, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_efa24b16394786b6d0036c0985215568->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_efa24b16394786b6d0036c0985215568, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_efa24b16394786b6d0036c0985215568,
        type_description_1,
        par_self,
        var_result
    );


    // Release cached frame.
    if ( frame_efa24b16394786b6d0036c0985215568 == cache_frame_efa24b16394786b6d0036c0985215568 )
    {
        Py_DECREF( frame_efa24b16394786b6d0036c0985215568 );
    }
    cache_frame_efa24b16394786b6d0036c0985215568 = NULL;

    assertFrameObject( frame_efa24b16394786b6d0036c0985215568 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_26___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_26___iter__ );
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


static PyObject *impl_MySQLdb$cursors$$$function_27__get_result( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_402b801362f70a5da1f416c9cda01638;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_402b801362f70a5da1f416c9cda01638 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_402b801362f70a5da1f416c9cda01638, codeobj_402b801362f70a5da1f416c9cda01638, module_MySQLdb$cursors, sizeof(void *) );
    frame_402b801362f70a5da1f416c9cda01638 = cache_frame_402b801362f70a5da1f416c9cda01638;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_402b801362f70a5da1f416c9cda01638 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_402b801362f70a5da1f416c9cda01638 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_402b801362f70a5da1f416c9cda01638->m_frame.f_lineno = 414;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__get_db );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_402b801362f70a5da1f416c9cda01638->m_frame.f_lineno = 414;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_use_result );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_402b801362f70a5da1f416c9cda01638 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_402b801362f70a5da1f416c9cda01638 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_402b801362f70a5da1f416c9cda01638 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_402b801362f70a5da1f416c9cda01638, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_402b801362f70a5da1f416c9cda01638->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_402b801362f70a5da1f416c9cda01638, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_402b801362f70a5da1f416c9cda01638,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_402b801362f70a5da1f416c9cda01638 == cache_frame_402b801362f70a5da1f416c9cda01638 )
    {
        Py_DECREF( frame_402b801362f70a5da1f416c9cda01638 );
    }
    cache_frame_402b801362f70a5da1f416c9cda01638 = NULL;

    assertFrameObject( frame_402b801362f70a5da1f416c9cda01638 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_27__get_result );
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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_27__get_result );
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


static PyObject *impl_MySQLdb$cursors$$$function_28_fetchone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_6de618ba7383ac3b9736297ca2bb089f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6de618ba7383ac3b9736297ca2bb089f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6de618ba7383ac3b9736297ca2bb089f, codeobj_6de618ba7383ac3b9736297ca2bb089f, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_6de618ba7383ac3b9736297ca2bb089f = cache_frame_6de618ba7383ac3b9736297ca2bb089f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6de618ba7383ac3b9736297ca2bb089f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6de618ba7383ac3b9736297ca2bb089f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_6de618ba7383ac3b9736297ca2bb089f->m_frame.f_lineno = 418;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_6de618ba7383ac3b9736297ca2bb089f->m_frame.f_lineno = 419;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__fetch_row, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_r );
        tmp_operand_name_1 = var_r;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "oo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rownumber );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_assattr_name_1 = BINARY_OPERATION_ADD_OBJECT_INT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rownumber, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_r );
        tmp_subscribed_name_1 = var_r;
        tmp_subscript_name_1 = const_int_0;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 423;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6de618ba7383ac3b9736297ca2bb089f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6de618ba7383ac3b9736297ca2bb089f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6de618ba7383ac3b9736297ca2bb089f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6de618ba7383ac3b9736297ca2bb089f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6de618ba7383ac3b9736297ca2bb089f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6de618ba7383ac3b9736297ca2bb089f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6de618ba7383ac3b9736297ca2bb089f,
        type_description_1,
        par_self,
        var_r
    );


    // Release cached frame.
    if ( frame_6de618ba7383ac3b9736297ca2bb089f == cache_frame_6de618ba7383ac3b9736297ca2bb089f )
    {
        Py_DECREF( frame_6de618ba7383ac3b9736297ca2bb089f );
    }
    cache_frame_6de618ba7383ac3b9736297ca2bb089f = NULL;

    assertFrameObject( frame_6de618ba7383ac3b9736297ca2bb089f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_28_fetchone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_28_fetchone );
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


static PyObject *impl_MySQLdb$cursors$$$function_29_fetchmany( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_4316d7750409fc63ff141507bdb18b4b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_4316d7750409fc63ff141507bdb18b4b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4316d7750409fc63ff141507bdb18b4b, codeobj_4316d7750409fc63ff141507bdb18b4b, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4316d7750409fc63ff141507bdb18b4b = cache_frame_4316d7750409fc63ff141507bdb18b4b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4316d7750409fc63ff141507bdb18b4b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4316d7750409fc63ff141507bdb18b4b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_4316d7750409fc63ff141507bdb18b4b->m_frame.f_lineno = 428;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__fetch_row );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 429;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_size );
        tmp_or_left_value_1 = par_size;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 429;
            type_description_1 = "ooo";
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
        tmp_source_name_2 = par_self;
        tmp_or_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arraysize );
        if ( tmp_or_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 429;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF( tmp_or_left_value_1 );
        tmp_args_element_name_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_4316d7750409fc63ff141507bdb18b4b->m_frame.f_lineno = 429;
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


            exception_lineno = 429;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_rownumber );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r );
        tmp_len_arg_1 = var_r;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 430;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rownumber, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4316d7750409fc63ff141507bdb18b4b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4316d7750409fc63ff141507bdb18b4b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4316d7750409fc63ff141507bdb18b4b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4316d7750409fc63ff141507bdb18b4b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4316d7750409fc63ff141507bdb18b4b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4316d7750409fc63ff141507bdb18b4b,
        type_description_1,
        par_self,
        par_size,
        var_r
    );


    // Release cached frame.
    if ( frame_4316d7750409fc63ff141507bdb18b4b == cache_frame_4316d7750409fc63ff141507bdb18b4b )
    {
        Py_DECREF( frame_4316d7750409fc63ff141507bdb18b4b );
    }
    cache_frame_4316d7750409fc63ff141507bdb18b4b = NULL;

    assertFrameObject( frame_4316d7750409fc63ff141507bdb18b4b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_29_fetchmany );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_29_fetchmany );
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


static PyObject *impl_MySQLdb$cursors$$$function_30_fetchall( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_83c9b67594c77fc58f1a45ecfceaf39c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_83c9b67594c77fc58f1a45ecfceaf39c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83c9b67594c77fc58f1a45ecfceaf39c, codeobj_83c9b67594c77fc58f1a45ecfceaf39c, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_83c9b67594c77fc58f1a45ecfceaf39c = cache_frame_83c9b67594c77fc58f1a45ecfceaf39c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83c9b67594c77fc58f1a45ecfceaf39c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83c9b67594c77fc58f1a45ecfceaf39c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_83c9b67594c77fc58f1a45ecfceaf39c->m_frame.f_lineno = 435;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__check_executed );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 435;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        frame_83c9b67594c77fc58f1a45ecfceaf39c->m_frame.f_lineno = 436;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__fetch_row, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_r == NULL );
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_rownumber );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_r );
        tmp_len_arg_1 = var_r;
        tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_rownumber, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 437;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83c9b67594c77fc58f1a45ecfceaf39c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83c9b67594c77fc58f1a45ecfceaf39c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83c9b67594c77fc58f1a45ecfceaf39c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83c9b67594c77fc58f1a45ecfceaf39c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83c9b67594c77fc58f1a45ecfceaf39c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83c9b67594c77fc58f1a45ecfceaf39c,
        type_description_1,
        par_self,
        var_r
    );


    // Release cached frame.
    if ( frame_83c9b67594c77fc58f1a45ecfceaf39c == cache_frame_83c9b67594c77fc58f1a45ecfceaf39c )
    {
        Py_DECREF( frame_83c9b67594c77fc58f1a45ecfceaf39c );
    }
    cache_frame_83c9b67594c77fc58f1a45ecfceaf39c = NULL;

    assertFrameObject( frame_83c9b67594c77fc58f1a45ecfceaf39c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_r );
    tmp_return_value = var_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_30_fetchall );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_r );
    Py_DECREF( var_r );
    var_r = NULL;

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
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_30_fetchall );
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


static PyObject *impl_MySQLdb$cursors$$$function_31___iter__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_31___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_31___iter__ );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_MySQLdb$cursors$$$function_32_next( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_row = NULL;
    struct Nuitka_FrameObject *frame_f80d7eb6fcfc32dcc127f5cf97f43c33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f80d7eb6fcfc32dcc127f5cf97f43c33 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f80d7eb6fcfc32dcc127f5cf97f43c33, codeobj_f80d7eb6fcfc32dcc127f5cf97f43c33, module_MySQLdb$cursors, sizeof(void *)+sizeof(void *) );
    frame_f80d7eb6fcfc32dcc127f5cf97f43c33 = cache_frame_f80d7eb6fcfc32dcc127f5cf97f43c33;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f80d7eb6fcfc32dcc127f5cf97f43c33 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f80d7eb6fcfc32dcc127f5cf97f43c33 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_f80d7eb6fcfc32dcc127f5cf97f43c33->m_frame.f_lineno = 444;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fetchone );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 444;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_row == NULL );
        var_row = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_row );
        tmp_compexpr_left_1 = var_row;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_raise_type_1 = PyExc_StopIteration;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 446;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f80d7eb6fcfc32dcc127f5cf97f43c33 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f80d7eb6fcfc32dcc127f5cf97f43c33 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f80d7eb6fcfc32dcc127f5cf97f43c33, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f80d7eb6fcfc32dcc127f5cf97f43c33->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f80d7eb6fcfc32dcc127f5cf97f43c33, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f80d7eb6fcfc32dcc127f5cf97f43c33,
        type_description_1,
        par_self,
        var_row
    );


    // Release cached frame.
    if ( frame_f80d7eb6fcfc32dcc127f5cf97f43c33 == cache_frame_f80d7eb6fcfc32dcc127f5cf97f43c33 )
    {
        Py_DECREF( frame_f80d7eb6fcfc32dcc127f5cf97f43c33 );
    }
    cache_frame_f80d7eb6fcfc32dcc127f5cf97f43c33 = NULL;

    assertFrameObject( frame_f80d7eb6fcfc32dcc127f5cf97f43c33 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_row );
    tmp_return_value = var_row;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_32_next );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_row );
    Py_DECREF( var_row );
    var_row = NULL;

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

    Py_XDECREF( var_row );
    var_row = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( MySQLdb$cursors$$$function_32_next );
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



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_10_setinputsizes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_10_setinputsizes,
        const_str_plain_setinputsizes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_610e932a22dcfcb6e803c85a18ae1b59,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_df167c3ce591a1a90c3d1abaaaded814,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_11_setoutputsizes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_11_setoutputsizes,
        const_str_plain_setoutputsizes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dfe3442321d97005dfd32a76697fdee2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_df167c3ce591a1a90c3d1abaaaded814,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_12__get_db(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_12__get_db,
        const_str_plain__get_db,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ff79bee7f03d54d1e5e527059017f7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_13_execute( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_13_execute,
        const_str_plain_execute,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_39fc87ceaa1647196f49ca2c39a45045,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_cea0698974f34c8311a80e2819252d71,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_14_executemany(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_14_executemany,
        const_str_plain_executemany,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3458061e3ef75c9ea827a9645797ace0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_1523e369629867d1d604d91a65e217dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_15__do_execute_many(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_15__do_execute_many,
        const_str_plain__do_execute_many,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4b4f8a6f4ea8aebbfcdf5ce35ad0485b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_16_callproc( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_16_callproc,
        const_str_plain_callproc,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9554a618f2d85324acb61f0f4812a3e9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_e8039285d89e23d5740e7d2599273b21,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_17__query(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_17__query,
        const_str_plain__query,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b4789c744653315702b21806138f3537,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_18__fetch_row( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_18__fetch_row,
        const_str_plain__fetch_row,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2b9a8e7d0e269152bcbdb1f666b2fb51,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_19___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_19___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7ff3cacc65356953ad41b8e50c05c31f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ba20b5a1c376c3dc178830fe23a3750,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_20__get_result(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_20__get_result,
        const_str_plain__get_result,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_96a55ef9296244a2d9af4ccf5efc6f7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_21__post_get_result(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_21__post_get_result,
        const_str_plain__post_get_result,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6e0ac2c3f8a9d81e84d907c7038331e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_22_fetchone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_22_fetchone,
        const_str_plain_fetchone,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e8a9c15e7916aef18a775337c8b26ea3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_176a8e7adff03e191486df6134161ad5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_23_fetchmany( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_23_fetchmany,
        const_str_plain_fetchmany,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fc5ffbdba7bf140abef534094979c677,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_37394c3211735ea0986d5b0d477c3f17,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_24_fetchall(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_24_fetchall,
        const_str_plain_fetchall,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_694142dd1f61513115322ca2bdfa2863,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_2925b032e7dd185c277d920801a0f13c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_25_scroll( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_25_scroll,
        const_str_plain_scroll,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cb4c0cde213db49596c26f7d70a05b79,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_c1a55c4f6deab82eacb306c49345dc55,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_26___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_26___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_efa24b16394786b6d0036c0985215568,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_27__get_result(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_27__get_result,
        const_str_plain__get_result,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_402b801362f70a5da1f416c9cda01638,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_28_fetchone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_28_fetchone,
        const_str_plain_fetchone,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6de618ba7383ac3b9736297ca2bb089f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_712cff5c5b5b9448f70c0b5297a04dca,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_29_fetchmany( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_29_fetchmany,
        const_str_plain_fetchmany,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4316d7750409fc63ff141507bdb18b4b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_37394c3211735ea0986d5b0d477c3f17,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_2_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_2_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5078e36d102c72b5dca62a3314236c62,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_7de53d316482b0467fdc230ba89192be,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_30_fetchall(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_30_fetchall,
        const_str_plain_fetchall,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_83c9b67594c77fc58f1a45ecfceaf39c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_2925b032e7dd185c277d920801a0f13c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_31___iter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_31___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aab0fe41eff0693d158165b5cf185e06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_32_next(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_32_next,
        const_str_plain_next,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f80d7eb6fcfc32dcc127f5cf97f43c33,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_3___enter__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_3___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_817e43fb8976498fa6557f5df41cebc9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_4___exit__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_4___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1d64356ebf4ffec6a8f4a1ba8de00dd4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_5__escape_args(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_5__escape_args,
        const_str_plain__escape_args,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d5a0074c5f79cfda16b45c8cb7dba20e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_5__escape_args$$$function_1_ensure_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_5__escape_args$$$function_1_ensure_bytes,
        const_str_plain_ensure_bytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_306dd87ae4e34edbe0fee6e3d39d330b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_6__check_executed(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_6__check_executed,
        const_str_plain__check_executed,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8eab3b046dcc5bc377263ae22ffbf602,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_7_nextset(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_7_nextset,
        const_str_plain_nextset,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4a264bb542922ac6e743e23aa73a79ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        const_str_digest_a3c6ae7cf447025c5894c65199db9bb0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_8__do_get_result(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_8__do_get_result,
        const_str_plain__do_get_result,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_16449ccd647291d31c3317e34d0be00a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_MySQLdb$cursors$$$function_9__post_get_result(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_MySQLdb$cursors$$$function_9__post_get_result,
        const_str_plain__post_get_result,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b19ae3fd71dc9d2790454ce8b66b2951,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_MySQLdb$cursors,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_MySQLdb$cursors =
{
    PyModuleDef_HEAD_INIT,
    "MySQLdb.cursors",
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

MOD_INIT_DECL( MySQLdb$cursors )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_MySQLdb$cursors );
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
    puts("MySQLdb.cursors: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.cursors: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.cursors: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initMySQLdb$cursors" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_MySQLdb$cursors = Py_InitModule4(
        "MySQLdb.cursors",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_MySQLdb$cursors = PyModule_Create( &mdef_MySQLdb$cursors );
#endif

    moduledict_MySQLdb$cursors = MODULE_DICT( module_MySQLdb$cursors );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_MySQLdb$cursors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_MySQLdb$cursors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$cursors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$cursors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_MySQLdb$cursors );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9af57228efcb185f135bd455a60c6685, module_MySQLdb$cursors );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_BaseCursor$import_from_1__module = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class = NULL;
    PyObject *tmp_class_creation_8__class_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class = NULL;
    PyObject *tmp_class_creation_9__class_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_locals_MySQLdb$cursors_339_key___iter__ = NULL;
    PyObject *tmp_locals_MySQLdb$cursors_339_key__get_result = NULL;
    PyObject *tmp_locals_MySQLdb$cursors_339_key__post_get_result = NULL;
    PyObject *tmp_locals_MySQLdb$cursors_339_key_fetchall = NULL;
    PyObject *tmp_locals_MySQLdb$cursors_339_key_fetchmany = NULL;
    PyObject *tmp_locals_MySQLdb$cursors_339_key_fetchone = NULL;
    PyObject *tmp_locals_MySQLdb$cursors_339_key_scroll = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    PyObject *tmp_select_metaclass_7__base = NULL;
    PyObject *tmp_select_metaclass_8__base = NULL;
    PyObject *tmp_select_metaclass_9__base = NULL;
    struct Nuitka_FrameObject *frame_fc8ec83757b3215d14b8c4e58e42feff;
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
    PyObject *locals_MySQLdb$cursors_28 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_73aa317c9300b5b481d7cd5b9928bb30_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_73aa317c9300b5b481d7cd5b9928bb30_2 = NULL;
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
    PyObject *locals_MySQLdb$cursors_405 = NULL;
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
    PyObject *locals_MySQLdb$cursors_467 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_MySQLdb$cursors_473 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_MySQLdb$cursors_479 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_MySQLdb$cursors_485 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_1061690fab75f5b432410a1bb7a53361;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_6afbabdc970df406e659701032fd5352;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyImport_ImportModule("__future__");
        assert( !(tmp_assign_source_3 == NULL) );
        assert( tmp_import_from_1__module == NULL );
        Py_INCREF( tmp_assign_source_3 );
        tmp_import_from_1__module = tmp_assign_source_3;
    }
    // Frame without reuse.
    frame_fc8ec83757b3215d14b8c4e58e42feff = MAKE_MODULE_FRAME( codeobj_fc8ec83757b3215d14b8c4e58e42feff, module_MySQLdb$cursors );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_fc8ec83757b3215d14b8c4e58e42feff );
    assert( Py_REFCNT( frame_fc8ec83757b3215d14b8c4e58e42feff ) == 2 );

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_print_function );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_absolute_import );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_MySQLdb$cursors;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_partial_tuple;
        tmp_level_name_1 = const_int_0;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_partial );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_partial, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_MySQLdb$cursors;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 8;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_sys;
        tmp_globals_name_3 = (PyObject *)moduledict_MySQLdb$cursors;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        assert( !(tmp_assign_source_8 == NULL) );
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_compat;
        tmp_globals_name_4 = (PyObject *)moduledict_MySQLdb$cursors;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_unicode_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 11;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_unicode );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_unicode, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain__exceptions;
        tmp_globals_name_5 = (PyObject *)moduledict_MySQLdb$cursors;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_cf8d71264ab2fa0bf4b6fd51a92c19f8_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 12;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Warning );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_Warning, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Error );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_Error, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_InterfaceError );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_InterfaceError, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DataError );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_DataError, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_DatabaseError );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_DatabaseError, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_10 = tmp_import_from_2__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_OperationalError );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_OperationalError, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_11 = tmp_import_from_2__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_IntegrityError );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_IntegrityError, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_12 = tmp_import_from_2__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_InternalError );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_InternalError, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_13 = tmp_import_from_2__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_NotSupportedError );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_NotSupportedError, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_14 = tmp_import_from_2__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ProgrammingError );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_ProgrammingError, tmp_assign_source_20 );
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_re );

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

            exception_lineno = 21;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_digest_b1860af85599757ceb0e191b69d925b3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_IGNORECASE );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_re );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
            exception_tb = NULL;

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DOTALL );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_RE_INSERT_VALUES, tmp_assign_source_21 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_MySQLdb$cursors_28 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_9af57228efcb185f135bd455a60c6685;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_383daacf8d1b19eefd8c2e9825bc141a;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_int_pos_65536;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_max_stmt_length, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_73aa317c9300b5b481d7cd5b9928bb30_2, codeobj_73aa317c9300b5b481d7cd5b9928bb30, module_MySQLdb$cursors, 0 );
        frame_73aa317c9300b5b481d7cd5b9928bb30_2 = cache_frame_73aa317c9300b5b481d7cd5b9928bb30_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_73aa317c9300b5b481d7cd5b9928bb30_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_73aa317c9300b5b481d7cd5b9928bb30_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_name_name_6;
            PyObject *tmp_globals_name_6;
            PyObject *tmp_locals_name_6;
            PyObject *tmp_fromlist_name_6;
            PyObject *tmp_level_name_6;
            tmp_name_name_6 = const_str_plain__exceptions;
            tmp_globals_name_6 = (PyObject *)moduledict_MySQLdb$cursors;
            tmp_locals_name_6 = Py_None;
            tmp_fromlist_name_6 = const_tuple_4555a9c901ce72fb368149176dd9b82f_tuple;
            tmp_level_name_6 = const_int_pos_1;
            frame_73aa317c9300b5b481d7cd5b9928bb30_2->m_frame.f_lineno = 51;
            tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto frame_exception_exit_2;
            }
            assert( tmp_BaseCursor$import_from_1__module == NULL );
            tmp_BaseCursor$import_from_1__module = tmp_assign_source_23;
        }
        // Tried code:
        {
            PyObject *tmp_import_name_from_15;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_15 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_MySQLError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_MySQLError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_16;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_16 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_Warning );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_Warning, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_17;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_17 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_Error );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_Error, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_18;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_18 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_InterfaceError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_InterfaceError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_19;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_19 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_DatabaseError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_DatabaseError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_20;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_20 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_DataError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_DataError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_21;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_21 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_OperationalError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_OperationalError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_22;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_22 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_IntegrityError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_IntegrityError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_23;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_23 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_InternalError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_InternalError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_24;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_24 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_ProgrammingError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_ProgrammingError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        {
            PyObject *tmp_import_name_from_25;
            CHECK_OBJECT( tmp_BaseCursor$import_from_1__module );
            tmp_import_name_from_25 = tmp_BaseCursor$import_from_1__module;
            tmp_dictset_value = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_NotSupportedError );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_NotSupportedError, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_5;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_BaseCursor$import_from_1__module );
        Py_DECREF( tmp_BaseCursor$import_from_1__module );
        tmp_BaseCursor$import_from_1__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:
        try_end_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_73aa317c9300b5b481d7cd5b9928bb30_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_73aa317c9300b5b481d7cd5b9928bb30_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_73aa317c9300b5b481d7cd5b9928bb30_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_73aa317c9300b5b481d7cd5b9928bb30_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_73aa317c9300b5b481d7cd5b9928bb30_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_73aa317c9300b5b481d7cd5b9928bb30_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_73aa317c9300b5b481d7cd5b9928bb30_2 == cache_frame_73aa317c9300b5b481d7cd5b9928bb30_2 )
        {
            Py_DECREF( frame_73aa317c9300b5b481d7cd5b9928bb30_2 );
        }
        cache_frame_73aa317c9300b5b481d7cd5b9928bb30_2 = NULL;

        assertFrameObject( frame_73aa317c9300b5b481d7cd5b9928bb30_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        CHECK_OBJECT( (PyObject *)tmp_BaseCursor$import_from_1__module );
        Py_DECREF( tmp_BaseCursor$import_from_1__module );
        tmp_BaseCursor$import_from_1__module = NULL;

        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_connection, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_1___init__(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_2_close(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_3___enter__(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain___enter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_4___exit__(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain___exit__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_5__escape_args(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__escape_args, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_6__check_executed(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__check_executed, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_7_nextset(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_nextset, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_8__do_get_result(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__do_get_result, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_9__post_get_result(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__post_get_result, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_10_setinputsizes(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_setinputsizes, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_11_setoutputsizes(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_setoutputsizes, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_12__get_db(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__get_db, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_13_execute( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_execute, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_14_executemany(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_executemany, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_15__do_execute_many(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__do_execute_many, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_tuple_empty_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_16_callproc( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_callproc, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_17__query(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__query, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_int_pos_1_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_18__fetch_row( tmp_defaults_3 );



            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain__fetch_row, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_19___iter__(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain___iter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_Warning );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Warning" );
            exception_tb = NULL;

            exception_lineno = 327;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_Warning, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_Error );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Error" );
            exception_tb = NULL;

            exception_lineno = 328;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_Error, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_InterfaceError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "InterfaceError" );
            exception_tb = NULL;

            exception_lineno = 329;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_InterfaceError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_DatabaseError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DatabaseError" );
            exception_tb = NULL;

            exception_lineno = 330;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_DatabaseError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_DataError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "DataError" );
            exception_tb = NULL;

            exception_lineno = 331;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_DataError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_OperationalError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OperationalError" );
            exception_tb = NULL;

            exception_lineno = 332;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 332;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_OperationalError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_IntegrityError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "IntegrityError" );
            exception_tb = NULL;

            exception_lineno = 333;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_IntegrityError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_InternalError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "InternalError" );
            exception_tb = NULL;

            exception_lineno = 334;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 334;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_InternalError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_ProgrammingError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ProgrammingError" );
            exception_tb = NULL;

            exception_lineno = 335;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_ProgrammingError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_28, const_str_plain_NotSupportedError );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "NotSupportedError" );
            exception_tb = NULL;

            exception_lineno = 336;

            goto try_except_handler_4;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_28, const_str_plain_NotSupportedError, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_22 = locals_MySQLdb$cursors_28;
        Py_INCREF( tmp_assign_source_22 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_MySQLdb$cursors_28 );
        locals_MySQLdb$cursors_28 = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_MySQLdb$cursors_28 );
        locals_MySQLdb$cursors_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 28;
        goto try_except_handler_3;
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_24;
        nuitka_bool tmp_condition_result_1;
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


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_24 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_24 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_2 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain_BaseCursor;
        tmp_args_element_name_4 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_25;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_26 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_BaseCursor, tmp_assign_source_26 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    {
        PyObject *tmp_assign_source_27;
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = MAKE_FUNCTION_MySQLdb$cursors$$$function_20__get_result(  );



            assert( tmp_locals_MySQLdb$cursors_339_key__get_result == NULL );
            tmp_locals_MySQLdb$cursors_339_key__get_result = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_FUNCTION_MySQLdb$cursors$$$function_21__post_get_result(  );



            assert( tmp_locals_MySQLdb$cursors_339_key__post_get_result == NULL );
            tmp_locals_MySQLdb$cursors_339_key__post_get_result = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = MAKE_FUNCTION_MySQLdb$cursors$$$function_22_fetchone(  );



            assert( tmp_locals_MySQLdb$cursors_339_key_fetchone == NULL );
            tmp_locals_MySQLdb$cursors_339_key_fetchone = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_assign_source_31 = MAKE_FUNCTION_MySQLdb$cursors$$$function_23_fetchmany( tmp_defaults_4 );



            assert( tmp_locals_MySQLdb$cursors_339_key_fetchmany == NULL );
            tmp_locals_MySQLdb$cursors_339_key_fetchmany = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            tmp_assign_source_32 = MAKE_FUNCTION_MySQLdb$cursors$$$function_24_fetchall(  );



            assert( tmp_locals_MySQLdb$cursors_339_key_fetchall == NULL );
            tmp_locals_MySQLdb$cursors_339_key_fetchall = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_str_plain_relative_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_assign_source_33 = MAKE_FUNCTION_MySQLdb$cursors$$$function_25_scroll( tmp_defaults_5 );



            assert( tmp_locals_MySQLdb$cursors_339_key_scroll == NULL );
            tmp_locals_MySQLdb$cursors_339_key_scroll = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_FUNCTION_MySQLdb$cursors$$$function_26___iter__(  );



            assert( tmp_locals_MySQLdb$cursors_339_key___iter__ == NULL );
            tmp_locals_MySQLdb$cursors_339_key___iter__ = tmp_assign_source_34;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_value_1 = const_str_digest_9af57228efcb185f135bd455a60c6685;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_27 = _PyDict_NewPresized( 9 );
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_c50201d3a8f64628aae4ab3f4e8a836e;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_MySQLdb$cursors_339_key__get_result );
            tmp_dict_value_3 = tmp_locals_MySQLdb$cursors_339_key__get_result;
            tmp_dict_key_3 = const_str_plain__get_result;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_MySQLdb$cursors_339_key__post_get_result );
            tmp_dict_value_4 = tmp_locals_MySQLdb$cursors_339_key__post_get_result;
            tmp_dict_key_4 = const_str_plain__post_get_result;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_MySQLdb$cursors_339_key_fetchone );
            tmp_dict_value_5 = tmp_locals_MySQLdb$cursors_339_key_fetchone;
            tmp_dict_key_5 = const_str_plain_fetchone;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_MySQLdb$cursors_339_key_fetchmany );
            tmp_dict_value_6 = tmp_locals_MySQLdb$cursors_339_key_fetchmany;
            tmp_dict_key_6 = const_str_plain_fetchmany;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_6, tmp_dict_value_6 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_MySQLdb$cursors_339_key_fetchall );
            tmp_dict_value_7 = tmp_locals_MySQLdb$cursors_339_key_fetchall;
            tmp_dict_key_7 = const_str_plain_fetchall;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_MySQLdb$cursors_339_key_scroll );
            tmp_dict_value_8 = tmp_locals_MySQLdb$cursors_339_key_scroll;
            tmp_dict_key_8 = const_str_plain_scroll;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_MySQLdb$cursors_339_key___iter__ );
            tmp_dict_value_9 = tmp_locals_MySQLdb$cursors_339_key___iter__;
            tmp_dict_key_9 = const_str_plain___iter__;
            tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_locals_MySQLdb$cursors_339_key__get_result );
        Py_DECREF( tmp_locals_MySQLdb$cursors_339_key__get_result );
        tmp_locals_MySQLdb$cursors_339_key__get_result = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_MySQLdb$cursors_339_key__post_get_result );
        Py_DECREF( tmp_locals_MySQLdb$cursors_339_key__post_get_result );
        tmp_locals_MySQLdb$cursors_339_key__post_get_result = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_MySQLdb$cursors_339_key_fetchone );
        Py_DECREF( tmp_locals_MySQLdb$cursors_339_key_fetchone );
        tmp_locals_MySQLdb$cursors_339_key_fetchone = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_MySQLdb$cursors_339_key_fetchmany );
        Py_DECREF( tmp_locals_MySQLdb$cursors_339_key_fetchmany );
        tmp_locals_MySQLdb$cursors_339_key_fetchmany = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_MySQLdb$cursors_339_key_fetchall );
        Py_DECREF( tmp_locals_MySQLdb$cursors_339_key_fetchall );
        tmp_locals_MySQLdb$cursors_339_key_fetchall = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_MySQLdb$cursors_339_key_scroll );
        Py_DECREF( tmp_locals_MySQLdb$cursors_339_key_scroll );
        tmp_locals_MySQLdb$cursors_339_key_scroll = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_MySQLdb$cursors_339_key___iter__ );
        Py_DECREF( tmp_locals_MySQLdb$cursors_339_key___iter__ );
        tmp_locals_MySQLdb$cursors_339_key___iter__ = NULL;

        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_dict_name_3 = tmp_class_creation_2__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;

            goto try_except_handler_7;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_dict;
        tmp_key_name_4 = const_str_plain___metaclass__;
        tmp_assign_source_35 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_35 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_35 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_3 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_6 = const_str_plain_CursorStoreResultMixIn;
        tmp_args_element_name_7 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_8 = tmp_class_creation_2__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 339;
        {
            PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_36;
    }
    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_37 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorStoreResultMixIn, tmp_assign_source_37 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_MySQLdb$cursors_405 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_9af57228efcb185f135bd455a60c6685;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_536cd0495e4d1731daccc1286d48ecd4;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_27__get_result(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain__get_result, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_28_fetchone(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain_fetchone, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_29_fetchmany( tmp_defaults_6 );



            tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain_fetchmany, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_30_fetchall(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain_fetchall, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_31___iter__(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain___iter__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_MySQLdb$cursors$$$function_32_next(  );



        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain_next, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = PyDict_GetItem( locals_MySQLdb$cursors_405, const_str_plain_next );

        if ( tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "next" );
            exception_tb = NULL;

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }

        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_405, const_str_plain___next__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_38 = locals_MySQLdb$cursors_405;
        Py_INCREF( tmp_assign_source_38 );
        goto try_return_handler_8;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF( locals_MySQLdb$cursors_405 );
        locals_MySQLdb$cursors_405 = NULL;
        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_5;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_dict_name_6;
        PyObject *tmp_key_name_6;
        tmp_key_name_5 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_dict_name_5 = tmp_class_creation_3__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;

            goto try_except_handler_9;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_dict_name_6 = tmp_class_creation_3__class_dict;
        tmp_key_name_6 = const_str_plain___metaclass__;
        tmp_assign_source_39 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_39 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_39 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_4 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_9 = const_str_plain_CursorUseResultMixIn;
        tmp_args_element_name_10 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_11 = tmp_class_creation_3__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 405;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_40;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_41 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorUseResultMixIn, tmp_assign_source_41 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = PyDict_Copy( const_dict_872fa47b80d99002b1a72b3559cecf5e );
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_42;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        tmp_key_name_7 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_dict_name_7 = tmp_class_creation_4__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;

            goto try_except_handler_10;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_dict_name_8 = tmp_class_creation_4__class_dict;
        tmp_key_name_8 = const_str_plain___metaclass__;
        tmp_assign_source_43 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_43 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_43 );
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_5 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_12 = const_str_plain_CursorTupleRowsMixIn;
        tmp_args_element_name_13 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_14 = tmp_class_creation_4__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 452;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_44;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_45 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorTupleRowsMixIn, tmp_assign_source_45 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_Copy( const_dict_877a77047ad2bc410744261f070dd574 );
        assert( tmp_class_creation_5__class_dict == NULL );
        tmp_class_creation_5__class_dict = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_key_name_10;
        tmp_key_name_9 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_dict_name_9 = tmp_class_creation_5__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;

            goto try_except_handler_11;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_dict_name_10 = tmp_class_creation_5__class_dict;
        tmp_key_name_10 = const_str_plain___metaclass__;
        tmp_assign_source_47 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;

            goto try_except_handler_11;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_assign_source_47 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_47 );
        condexpr_end_5:;
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_called_name_6 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_15 = const_str_plain_CursorDictRowsMixIn;
        tmp_args_element_name_16 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_args_element_name_17 = tmp_class_creation_5__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 459;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_48;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_assign_source_49 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorDictRowsMixIn, tmp_assign_source_49 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorStoreResultMixIn );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorStoreResultMixIn );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorStoreResultMixIn" );
            exception_tb = NULL;

            exception_lineno = 466;

            goto try_except_handler_12;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        tmp_assign_source_50 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_50, 0, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorTupleRowsMixIn );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorTupleRowsMixIn );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_assign_source_50 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorTupleRowsMixIn" );
            exception_tb = NULL;

            exception_lineno = 466;

            goto try_except_handler_12;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_50, 1, tmp_tuple_element_1 );
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_BaseCursor );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseCursor );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_assign_source_50 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseCursor" );
            exception_tb = NULL;

            exception_lineno = 467;

            goto try_except_handler_12;
        }

        tmp_tuple_element_1 = tmp_mvar_value_6;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_50, 2, tmp_tuple_element_1 );
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_MySQLdb$cursors_467 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_9af57228efcb185f135bd455a60c6685;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_467, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_26652b588eac6f5469699bf2e7d7dc79;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_467, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_51 = locals_MySQLdb$cursors_467;
        Py_INCREF( tmp_assign_source_51 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_MySQLdb$cursors_467 );
        locals_MySQLdb$cursors_467 = NULL;
        goto outline_result_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        assert( tmp_class_creation_6__class_dict == NULL );
        tmp_class_creation_6__class_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_key_name_11;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_dict_name_12;
        PyObject *tmp_key_name_12;
        tmp_key_name_11 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_dict_name_11 = tmp_class_creation_6__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;

            goto try_except_handler_12;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_dict_name_12 = tmp_class_creation_6__class_dict;
        tmp_key_name_12 = const_str_plain___metaclass__;
        tmp_assign_source_52 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;

            goto try_except_handler_12;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_subscribed_name_1 = tmp_class_creation_6__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_53 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;

                goto try_except_handler_12;
            }
            assert( tmp_select_metaclass_6__base == NULL );
            tmp_select_metaclass_6__base = tmp_assign_source_53;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_source_name_4 = tmp_select_metaclass_6__base;
            tmp_assign_source_52 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;

                goto try_except_handler_15;
            }
            goto try_return_handler_14;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_10 );
            Py_XDECREF( exception_keeper_value_10 );
            Py_XDECREF( exception_keeper_tb_10 );
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_type_arg_1 = tmp_select_metaclass_6__base;
            tmp_assign_source_52 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_52 == NULL) );
            goto try_return_handler_14;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        goto outline_result_5;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
        condexpr_end_6:;
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_called_name_7 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_18 = const_str_plain_Cursor;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_args_element_name_19 = tmp_class_creation_6__bases;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_args_element_name_20 = tmp_class_creation_6__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 467;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_6__class == NULL );
        tmp_class_creation_6__class = tmp_assign_source_54;
    }
    goto try_end_9;
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

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_class_creation_6__class );
        tmp_assign_source_55 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_Cursor, tmp_assign_source_55 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorStoreResultMixIn );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorStoreResultMixIn );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorStoreResultMixIn" );
            exception_tb = NULL;

            exception_lineno = 472;

            goto try_except_handler_16;
        }

        tmp_tuple_element_2 = tmp_mvar_value_7;
        tmp_assign_source_56 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_56, 0, tmp_tuple_element_2 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorDictRowsMixIn );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorDictRowsMixIn );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_assign_source_56 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorDictRowsMixIn" );
            exception_tb = NULL;

            exception_lineno = 472;

            goto try_except_handler_16;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_56, 1, tmp_tuple_element_2 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_BaseCursor );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseCursor );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_assign_source_56 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseCursor" );
            exception_tb = NULL;

            exception_lineno = 473;

            goto try_except_handler_16;
        }

        tmp_tuple_element_2 = tmp_mvar_value_9;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_56, 2, tmp_tuple_element_2 );
        assert( tmp_class_creation_7__bases == NULL );
        tmp_class_creation_7__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_MySQLdb$cursors_473 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_9af57228efcb185f135bd455a60c6685;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_473, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_330003ec112f68bf16e884df92ffe147;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_473, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_57 = locals_MySQLdb$cursors_473;
        Py_INCREF( tmp_assign_source_57 );
        goto try_return_handler_17;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF( locals_MySQLdb$cursors_473 );
        locals_MySQLdb$cursors_473 = NULL;
        goto outline_result_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
        assert( tmp_class_creation_7__class_dict == NULL );
        tmp_class_creation_7__class_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_13;
        PyObject *tmp_dict_name_13;
        PyObject *tmp_dict_name_14;
        PyObject *tmp_key_name_14;
        tmp_key_name_13 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_dict_name_13 = tmp_class_creation_7__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;

            goto try_except_handler_16;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_7;
        }
        else
        {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_dict_name_14 = tmp_class_creation_7__class_dict;
        tmp_key_name_14 = const_str_plain___metaclass__;
        tmp_assign_source_58 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;

            goto try_except_handler_16;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_7__bases );
            tmp_subscribed_name_2 = tmp_class_creation_7__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_59 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;

                goto try_except_handler_16;
            }
            assert( tmp_select_metaclass_7__base == NULL );
            tmp_select_metaclass_7__base = tmp_assign_source_59;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( tmp_select_metaclass_7__base );
            tmp_source_name_5 = tmp_select_metaclass_7__base;
            tmp_assign_source_58 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;

                goto try_except_handler_19;
            }
            goto try_return_handler_18;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_12 );
            Py_XDECREF( exception_keeper_value_12 );
            Py_XDECREF( exception_keeper_tb_12 );
            CHECK_OBJECT( tmp_select_metaclass_7__base );
            tmp_type_arg_2 = tmp_select_metaclass_7__base;
            tmp_assign_source_58 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_58 == NULL) );
            goto try_return_handler_18;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
        Py_DECREF( tmp_select_metaclass_7__base );
        tmp_select_metaclass_7__base = NULL;

        goto outline_result_7;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_7__base );
        Py_DECREF( tmp_select_metaclass_7__base );
        tmp_select_metaclass_7__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
        condexpr_end_7:;
        assert( tmp_class_creation_7__metaclass == NULL );
        tmp_class_creation_7__metaclass = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        CHECK_OBJECT( tmp_class_creation_7__metaclass );
        tmp_called_name_8 = tmp_class_creation_7__metaclass;
        tmp_args_element_name_21 = const_str_plain_DictCursor;
        CHECK_OBJECT( tmp_class_creation_7__bases );
        tmp_args_element_name_22 = tmp_class_creation_7__bases;
        CHECK_OBJECT( tmp_class_creation_7__class_dict );
        tmp_args_element_name_23 = tmp_class_creation_7__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 473;
        {
            PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
        }

        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 473;

            goto try_except_handler_16;
        }
        assert( tmp_class_creation_7__class == NULL );
        tmp_class_creation_7__class = tmp_assign_source_60;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT( tmp_class_creation_7__class );
        tmp_assign_source_61 = tmp_class_creation_7__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_DictCursor, tmp_assign_source_61 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorUseResultMixIn );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorUseResultMixIn );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorUseResultMixIn" );
            exception_tb = NULL;

            exception_lineno = 478;

            goto try_except_handler_20;
        }

        tmp_tuple_element_3 = tmp_mvar_value_10;
        tmp_assign_source_62 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_62, 0, tmp_tuple_element_3 );
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorTupleRowsMixIn );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorTupleRowsMixIn );
        }

        if ( tmp_mvar_value_11 == NULL )
        {
            Py_DECREF( tmp_assign_source_62 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorTupleRowsMixIn" );
            exception_tb = NULL;

            exception_lineno = 478;

            goto try_except_handler_20;
        }

        tmp_tuple_element_3 = tmp_mvar_value_11;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_62, 1, tmp_tuple_element_3 );
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_BaseCursor );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseCursor );
        }

        if ( tmp_mvar_value_12 == NULL )
        {
            Py_DECREF( tmp_assign_source_62 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseCursor" );
            exception_tb = NULL;

            exception_lineno = 479;

            goto try_except_handler_20;
        }

        tmp_tuple_element_3 = tmp_mvar_value_12;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_62, 2, tmp_tuple_element_3 );
        assert( tmp_class_creation_8__bases == NULL );
        tmp_class_creation_8__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_MySQLdb$cursors_479 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_9af57228efcb185f135bd455a60c6685;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_479, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_494e592af6a7d8894f8b7fa923fb4561;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_479, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_63 = locals_MySQLdb$cursors_479;
        Py_INCREF( tmp_assign_source_63 );
        goto try_return_handler_21;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF( locals_MySQLdb$cursors_479 );
        locals_MySQLdb$cursors_479 = NULL;
        goto outline_result_8;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_8:;
        assert( tmp_class_creation_8__class_dict == NULL );
        tmp_class_creation_8__class_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_15;
        PyObject *tmp_dict_name_15;
        PyObject *tmp_dict_name_16;
        PyObject *tmp_key_name_16;
        tmp_key_name_15 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_dict_name_15 = tmp_class_creation_8__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;

            goto try_except_handler_20;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_8;
        }
        else
        {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_dict_name_16 = tmp_class_creation_8__class_dict;
        tmp_key_name_16 = const_str_plain___metaclass__;
        tmp_assign_source_64 = DICT_GET_ITEM( tmp_dict_name_16, tmp_key_name_16 );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;

            goto try_except_handler_20;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( tmp_class_creation_8__bases );
            tmp_subscribed_name_3 = tmp_class_creation_8__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_65 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 479;

                goto try_except_handler_20;
            }
            assert( tmp_select_metaclass_8__base == NULL );
            tmp_select_metaclass_8__base = tmp_assign_source_65;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_select_metaclass_8__base );
            tmp_source_name_6 = tmp_select_metaclass_8__base;
            tmp_assign_source_64 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
            if ( tmp_assign_source_64 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 479;

                goto try_except_handler_23;
            }
            goto try_return_handler_22;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF( exception_keeper_type_14 );
            Py_XDECREF( exception_keeper_value_14 );
            Py_XDECREF( exception_keeper_tb_14 );
            CHECK_OBJECT( tmp_select_metaclass_8__base );
            tmp_type_arg_3 = tmp_select_metaclass_8__base;
            tmp_assign_source_64 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_64 == NULL) );
            goto try_return_handler_22;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
        Py_DECREF( tmp_select_metaclass_8__base );
        tmp_select_metaclass_8__base = NULL;

        goto outline_result_9;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_8__base );
        Py_DECREF( tmp_select_metaclass_8__base );
        tmp_select_metaclass_8__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_9:;
        condexpr_end_8:;
        assert( tmp_class_creation_8__metaclass == NULL );
        tmp_class_creation_8__metaclass = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_args_element_name_26;
        CHECK_OBJECT( tmp_class_creation_8__metaclass );
        tmp_called_name_9 = tmp_class_creation_8__metaclass;
        tmp_args_element_name_24 = const_str_plain_SSCursor;
        CHECK_OBJECT( tmp_class_creation_8__bases );
        tmp_args_element_name_25 = tmp_class_creation_8__bases;
        CHECK_OBJECT( tmp_class_creation_8__class_dict );
        tmp_args_element_name_26 = tmp_class_creation_8__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26 };
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
        }

        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 479;

            goto try_except_handler_20;
        }
        assert( tmp_class_creation_8__class == NULL );
        tmp_class_creation_8__class = tmp_assign_source_66;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT( tmp_class_creation_8__class );
        tmp_assign_source_67 = tmp_class_creation_8__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_SSCursor, tmp_assign_source_67 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class );
    Py_DECREF( tmp_class_creation_8__class );
    tmp_class_creation_8__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_dict );
    Py_DECREF( tmp_class_creation_8__class_dict );
    tmp_class_creation_8__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_mvar_value_15;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorUseResultMixIn );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorUseResultMixIn );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorUseResultMixIn" );
            exception_tb = NULL;

            exception_lineno = 484;

            goto try_except_handler_24;
        }

        tmp_tuple_element_4 = tmp_mvar_value_13;
        tmp_assign_source_68 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_68, 0, tmp_tuple_element_4 );
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_CursorDictRowsMixIn );

        if (unlikely( tmp_mvar_value_14 == NULL ))
        {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CursorDictRowsMixIn );
        }

        if ( tmp_mvar_value_14 == NULL )
        {
            Py_DECREF( tmp_assign_source_68 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "CursorDictRowsMixIn" );
            exception_tb = NULL;

            exception_lineno = 484;

            goto try_except_handler_24;
        }

        tmp_tuple_element_4 = tmp_mvar_value_14;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_68, 1, tmp_tuple_element_4 );
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_BaseCursor );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseCursor );
        }

        if ( tmp_mvar_value_15 == NULL )
        {
            Py_DECREF( tmp_assign_source_68 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseCursor" );
            exception_tb = NULL;

            exception_lineno = 485;

            goto try_except_handler_24;
        }

        tmp_tuple_element_4 = tmp_mvar_value_15;
        Py_INCREF( tmp_tuple_element_4 );
        PyTuple_SET_ITEM( tmp_assign_source_68, 2, tmp_tuple_element_4 );
        assert( tmp_class_creation_9__bases == NULL );
        tmp_class_creation_9__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_6;
            tmp_set_locals_6 = PyDict_New();
            locals_MySQLdb$cursors_485 = tmp_set_locals_6;
        }
        tmp_dictset_value = const_str_digest_9af57228efcb185f135bd455a60c6685;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_485, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_88a41bdc523e6426722c322c9f8503ae;
        tmp_res = PyDict_SetItem( locals_MySQLdb$cursors_485, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_69 = locals_MySQLdb$cursors_485;
        Py_INCREF( tmp_assign_source_69 );
        goto try_return_handler_25;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF( locals_MySQLdb$cursors_485 );
        locals_MySQLdb$cursors_485 = NULL;
        goto outline_result_10;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_10:;
        assert( tmp_class_creation_9__class_dict == NULL );
        tmp_class_creation_9__class_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_17;
        PyObject *tmp_dict_name_17;
        PyObject *tmp_dict_name_18;
        PyObject *tmp_key_name_18;
        tmp_key_name_17 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_dict_name_17 = tmp_class_creation_9__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_17, tmp_key_name_17 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;

            goto try_except_handler_24;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_9;
        }
        else
        {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_dict_name_18 = tmp_class_creation_9__class_dict;
        tmp_key_name_18 = const_str_plain___metaclass__;
        tmp_assign_source_70 = DICT_GET_ITEM( tmp_dict_name_18, tmp_key_name_18 );
        if ( tmp_assign_source_70 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;

            goto try_except_handler_24;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( tmp_class_creation_9__bases );
            tmp_subscribed_name_4 = tmp_class_creation_9__bases;
            tmp_subscript_name_4 = const_int_0;
            tmp_assign_source_71 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            if ( tmp_assign_source_71 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 485;

                goto try_except_handler_24;
            }
            assert( tmp_select_metaclass_9__base == NULL );
            tmp_select_metaclass_9__base = tmp_assign_source_71;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_select_metaclass_9__base );
            tmp_source_name_7 = tmp_select_metaclass_9__base;
            tmp_assign_source_70 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
            if ( tmp_assign_source_70 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 485;

                goto try_except_handler_27;
            }
            goto try_return_handler_26;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_4;
            Py_DECREF( exception_keeper_type_16 );
            Py_XDECREF( exception_keeper_value_16 );
            Py_XDECREF( exception_keeper_tb_16 );
            CHECK_OBJECT( tmp_select_metaclass_9__base );
            tmp_type_arg_4 = tmp_select_metaclass_9__base;
            tmp_assign_source_70 = BUILTIN_TYPE1( tmp_type_arg_4 );
            assert( !(tmp_assign_source_70 == NULL) );
            goto try_return_handler_26;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
        Py_DECREF( tmp_select_metaclass_9__base );
        tmp_select_metaclass_9__base = NULL;

        goto outline_result_11;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_9__base );
        Py_DECREF( tmp_select_metaclass_9__base );
        tmp_select_metaclass_9__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( MySQLdb$cursors );
        return MOD_RETURN_VALUE( NULL );
        outline_result_11:;
        condexpr_end_9:;
        assert( tmp_class_creation_9__metaclass == NULL );
        tmp_class_creation_9__metaclass = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_args_element_name_29;
        CHECK_OBJECT( tmp_class_creation_9__metaclass );
        tmp_called_name_10 = tmp_class_creation_9__metaclass;
        tmp_args_element_name_27 = const_str_plain_SSDictCursor;
        CHECK_OBJECT( tmp_class_creation_9__bases );
        tmp_args_element_name_28 = tmp_class_creation_9__bases;
        CHECK_OBJECT( tmp_class_creation_9__class_dict );
        tmp_args_element_name_29 = tmp_class_creation_9__class_dict;
        frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame.f_lineno = 485;
        {
            PyObject *call_args[] = { tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29 };
            tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
        }

        if ( tmp_assign_source_72 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 485;

            goto try_except_handler_24;
        }
        assert( tmp_class_creation_9__class == NULL );
        tmp_class_creation_9__class = tmp_assign_source_72;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc8ec83757b3215d14b8c4e58e42feff );
#endif
    popFrameStack();

    assertFrameObject( frame_fc8ec83757b3215d14b8c4e58e42feff );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc8ec83757b3215d14b8c4e58e42feff );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc8ec83757b3215d14b8c4e58e42feff, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc8ec83757b3215d14b8c4e58e42feff->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc8ec83757b3215d14b8c4e58e42feff, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT( tmp_class_creation_9__class );
        tmp_assign_source_73 = tmp_class_creation_9__class;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain_SSDictCursor, tmp_assign_source_73 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class );
    Py_DECREF( tmp_class_creation_9__class );
    tmp_class_creation_9__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_dict );
    Py_DECREF( tmp_class_creation_9__class_dict );
    tmp_class_creation_9__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_MySQLdb$cursors, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_MySQLdb$cursors );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
