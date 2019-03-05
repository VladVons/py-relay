/* Generated code for Python module 'prctl'
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

/* The "_module_prctl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prctl;
PyDictObject *moduledict_prctl;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_plain_CAP_;
static PyObject *const_str_plain_securebits;
static PyObject *const_tuple_str_plain_self_str_plain_val_str_plain_cap_tuple;
static PyObject *const_str_plain_SECURE_;
static PyObject *const_str_plain_capb_wrapper;
static PyObject *const_str_digest_2276aa55860e5898abfe2e9951e0f0d4;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_ef;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_property;
static PyObject *const_tuple_str_plain_PR__tuple;
static PyObject *const_tuple_str_plain_self_str_plain_caps_str_plain_x_str_plain_cap_tuple;
static PyObject *const_str_plain_PR_CAPBSET;
static PyObject *const_tuple_str_plain_PR_CAPBSET_tuple;
static PyObject *const_tuple_b8f12329cfa35521a2cf5eea8f7455e2_tuple;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_CAP_INHERITABLE;
static PyObject *const_tuple_str_plain_cap_str_plain_getter_str_plain_setter_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_et;
static PyObject *const_tuple_str_plain_bit_str_plain_getter_str_plain_setter_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_has_value;
static PyObject *const_str_plain_val;
static PyObject *const_str_plain_if_;
static PyObject *const_str_plain_Securebits;
static PyObject *const_str_plain_upper;
static PyObject *const_str_plain_ALL_FLAG_NAMES;
static PyObject *const_str_plain_CAP_PERMITTED;
static PyObject *const_str_plain_PR_SET;
static PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_PR_CAPBSET_READ;
static PyObject *const_tuple_str_plain_self_str_plain_caps_str_plain_x_tuple;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_plain_limit;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_self_str_plain_value_str_plain_cap_tuple;
static PyObject *const_str_plain_drop;
static PyObject *const_tuple_str_plain_arg_str_plain_option_tuple;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_prctl_wrapper;
static PyObject *const_str_plain_friendly_name;
static PyObject *const_tuple_str_plain_CAP__tuple;
static PyObject *const_tuple_str_plain_self_str_plain_caps_str_plain_cap_tuple;
static PyObject *const_str_plain_sec_wrapper;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_plain_cap_wrapper;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_modules;
extern PyObject *const_int_pos_3;
static PyObject *const_tuple_str_plain_self_str_plain_value_str_plain_bits_str_plain_bit_tuple;
static PyObject *const_tuple_str_plain_PR_GET_tuple;
static PyObject *const_str_plain_ALL_FLAGS;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_Capbset;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain___slots__;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_arg;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_plain_caps_str_plain_cap_str_plain_ret_tuple;
static PyObject *const_tuple_str_plain_SECURE__tuple;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_plain_capbset;
static PyObject *const_str_plain_bits;
static PyObject *const_str_plain_setter;
static PyObject *const_str_plain_cap_effective;
static PyObject *const_str_plain_ALL_CAPS;
static PyObject *const_str_plain__prctl;
static PyObject *const_str_plain__parse_caps_simple;
static PyObject *const_str_plain__parse_caps;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_PR_GET_SECUREBITS;
static PyObject *const_str_plain_cap_inheritable;
static PyObject *const_str_plain_PR_CAPBSET_DROP;
static PyObject *const_str_plain_it;
static PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain_Capset;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_SECBIT__tuple;
static PyObject *const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple;
static PyObject *const_tuple_str_plain_args_tuple;
static PyObject *const_str_digest_600562763863fc9c35068200d681479d;
static PyObject *const_str_plain_flag;
static PyObject *const_str_digest_53638a51c638e7d451e828cfa0216fde;
static PyObject *const_str_plain_ret;
static PyObject *const_str_plain_option;
static PyObject *const_str_plain_call_prctl;
static PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_prctl;
static PyObject *const_str_plain_p;
static PyObject *const_str_plain_ALL_CAP_NAMES;
extern PyObject *const_str_plain_i;
static PyObject *const_str_plain_caps;
static PyObject *const_str_plain__ALL_FLAG_NAMES;
static PyObject *const_str_plain_CAP_EFFECTIVE;
static PyObject *const_str_plain_bit;
static PyObject *const_tuple_str_plain_self_str_plain_cap_tuple;
static PyObject *const_tuple_str_plain_option_str_plain_call_prctl_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_caps_tuple;
static PyObject *const_str_plain_PR_GET;
static PyObject *const_tuple_str_plain_self_str_plain_bit_tuple;
static PyObject *const_str_digest_9281e6d84754a576f9db2d372e5354f3;
static PyObject *const_str_plain_pf;
static PyObject *const_tuple_3a6a1cbd4f5b2b5447175c8ff65e5933_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
static PyObject *const_str_plain_set_caps;
static PyObject *const_str_plain_new_args;
static PyObject *const_str_plain__ALL_CAP_NAMES;
static PyObject *const_str_plain_PR_;
static PyObject *const_str_plain_SECBIT_;
static PyObject *const_list_str_plain_flag_list;
static PyObject *const_str_plain_pt;
static PyObject *const_str_plain_set_proctitle;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_self_str_plain_friendly_name_str_plain_name_tuple;
static PyObject *const_str_plain_PR_SET_SECUREBITS;
static PyObject *const_str_plain_getter;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_cap;
static PyObject *const_str_plain_get_caps;
static PyObject *const_tuple_str_plain_PR_SET_tuple;
static PyObject *const_str_plain_cap_permitted;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_CAP_ = UNSTREAM_STRING( &constant_bin[ 41599 ], 4, 1 );
    const_str_plain_securebits = UNSTREAM_STRING( &constant_bin[ 41603 ], 10, 1 );
    const_tuple_str_plain_self_str_plain_val_str_plain_cap_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_cap_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_val = UNSTREAM_STRING( &constant_bin[ 8675 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_cap_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_plain_cap = UNSTREAM_STRING( &constant_bin[ 23141 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_cap_tuple, 2, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    const_str_plain_SECURE_ = UNSTREAM_STRING( &constant_bin[ 31715 ], 7, 1 );
    const_str_plain_capb_wrapper = UNSTREAM_STRING( &constant_bin[ 41613 ], 12, 1 );
    const_str_digest_2276aa55860e5898abfe2e9951e0f0d4 = UNSTREAM_STRING( &constant_bin[ 41625 ], 66, 0 );
    const_str_plain_ef = UNSTREAM_STRING( &constant_bin[ 1958 ], 2, 1 );
    const_tuple_str_plain_PR__tuple = PyTuple_New( 1 );
    const_str_plain_PR_ = UNSTREAM_STRING( &constant_bin[ 41691 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PR__tuple, 0, const_str_plain_PR_ ); Py_INCREF( const_str_plain_PR_ );
    const_tuple_str_plain_self_str_plain_caps_str_plain_x_str_plain_cap_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_x_str_plain_cap_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_caps = UNSTREAM_STRING( &constant_bin[ 41694 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_x_str_plain_cap_tuple, 1, const_str_plain_caps ); Py_INCREF( const_str_plain_caps );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_x_str_plain_cap_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_x_str_plain_cap_tuple, 3, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    const_str_plain_PR_CAPBSET = UNSTREAM_STRING( &constant_bin[ 41698 ], 10, 1 );
    const_tuple_str_plain_PR_CAPBSET_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PR_CAPBSET_tuple, 0, const_str_plain_PR_CAPBSET ); Py_INCREF( const_str_plain_PR_CAPBSET );
    const_tuple_b8f12329cfa35521a2cf5eea8f7455e2_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_b8f12329cfa35521a2cf5eea8f7455e2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_flag = UNSTREAM_STRING( &constant_bin[ 26343 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_b8f12329cfa35521a2cf5eea8f7455e2_tuple, 1, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    const_str_plain_friendly_name = UNSTREAM_STRING( &constant_bin[ 41708 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_b8f12329cfa35521a2cf5eea8f7455e2_tuple, 2, const_str_plain_friendly_name ); Py_INCREF( const_str_plain_friendly_name );
    PyTuple_SET_ITEM( const_tuple_b8f12329cfa35521a2cf5eea8f7455e2_tuple, 3, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_CAP_INHERITABLE = UNSTREAM_STRING( &constant_bin[ 41721 ], 15, 1 );
    const_tuple_str_plain_cap_str_plain_getter_str_plain_setter_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cap_str_plain_getter_str_plain_setter_tuple, 0, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    const_str_plain_getter = UNSTREAM_STRING( &constant_bin[ 41736 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cap_str_plain_getter_str_plain_setter_tuple, 1, const_str_plain_getter ); Py_INCREF( const_str_plain_getter );
    const_str_plain_setter = UNSTREAM_STRING( &constant_bin[ 41742 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cap_str_plain_getter_str_plain_setter_tuple, 2, const_str_plain_setter ); Py_INCREF( const_str_plain_setter );
    const_str_plain_et = UNSTREAM_STRING( &constant_bin[ 270 ], 2, 1 );
    const_tuple_str_plain_bit_str_plain_getter_str_plain_setter_tuple = PyTuple_New( 3 );
    const_str_plain_bit = UNSTREAM_STRING( &constant_bin[ 4043 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bit_str_plain_getter_str_plain_setter_tuple, 0, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    PyTuple_SET_ITEM( const_tuple_str_plain_bit_str_plain_getter_str_plain_setter_tuple, 1, const_str_plain_getter ); Py_INCREF( const_str_plain_getter );
    PyTuple_SET_ITEM( const_tuple_str_plain_bit_str_plain_getter_str_plain_setter_tuple, 2, const_str_plain_setter ); Py_INCREF( const_str_plain_setter );
    const_str_plain_has_value = UNSTREAM_STRING( &constant_bin[ 41748 ], 9, 1 );
    const_str_plain_if_ = UNSTREAM_STRING( &constant_bin[ 41757 ], 3, 1 );
    const_str_plain_Securebits = UNSTREAM_STRING( &constant_bin[ 41760 ], 10, 1 );
    const_str_plain_upper = UNSTREAM_STRING( &constant_bin[ 41770 ], 5, 1 );
    const_str_plain_ALL_FLAG_NAMES = UNSTREAM_STRING( &constant_bin[ 41775 ], 14, 1 );
    const_str_plain_CAP_PERMITTED = UNSTREAM_STRING( &constant_bin[ 41789 ], 13, 1 );
    const_str_plain_PR_SET = UNSTREAM_STRING( &constant_bin[ 41802 ], 6, 1 );
    const_str_plain_flags = UNSTREAM_STRING( &constant_bin[ 26343 ], 5, 1 );
    const_str_plain_PR_CAPBSET_READ = UNSTREAM_STRING( &constant_bin[ 41808 ], 15, 1 );
    const_tuple_str_plain_self_str_plain_caps_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_x_tuple, 1, const_str_plain_caps ); Py_INCREF( const_str_plain_caps );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_limit = UNSTREAM_STRING( &constant_bin[ 41823 ], 5, 1 );
    const_tuple_str_plain_self_str_plain_value_str_plain_cap_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_cap_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_cap_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_cap_tuple, 2, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    const_str_plain_drop = UNSTREAM_STRING( &constant_bin[ 41634 ], 4, 1 );
    const_tuple_str_plain_arg_str_plain_option_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg_str_plain_option_tuple, 0, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    const_str_plain_option = UNSTREAM_STRING( &constant_bin[ 30664 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arg_str_plain_option_tuple, 1, const_str_plain_option ); Py_INCREF( const_str_plain_option );
    const_str_plain_prctl_wrapper = UNSTREAM_STRING( &constant_bin[ 41828 ], 13, 1 );
    const_tuple_str_plain_CAP__tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CAP__tuple, 0, const_str_plain_CAP_ ); Py_INCREF( const_str_plain_CAP_ );
    const_tuple_str_plain_self_str_plain_caps_str_plain_cap_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_cap_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_cap_tuple, 1, const_str_plain_caps ); Py_INCREF( const_str_plain_caps );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_str_plain_cap_tuple, 2, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    const_str_plain_sec_wrapper = UNSTREAM_STRING( &constant_bin[ 41841 ], 11, 1 );
    const_str_plain_cap_wrapper = UNSTREAM_STRING( &constant_bin[ 41852 ], 11, 1 );
    const_str_plain_modules = UNSTREAM_STRING( &constant_bin[ 2801 ], 7, 1 );
    const_tuple_str_plain_self_str_plain_value_str_plain_bits_str_plain_bit_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_bits_str_plain_bit_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_bits_str_plain_bit_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_bits = UNSTREAM_STRING( &constant_bin[ 6959 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_bits_str_plain_bit_tuple, 2, const_str_plain_bits ); Py_INCREF( const_str_plain_bits );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_str_plain_bits_str_plain_bit_tuple, 3, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    const_tuple_str_plain_PR_GET_tuple = PyTuple_New( 1 );
    const_str_plain_PR_GET = UNSTREAM_STRING( &constant_bin[ 41863 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PR_GET_tuple, 0, const_str_plain_PR_GET ); Py_INCREF( const_str_plain_PR_GET );
    const_str_plain_ALL_FLAGS = UNSTREAM_STRING( &constant_bin[ 41869 ], 9, 1 );
    const_str_plain_Capbset = UNSTREAM_STRING( &constant_bin[ 41878 ], 7, 1 );
    const_str_plain___slots__ = UNSTREAM_STRING( &constant_bin[ 41885 ], 9, 1 );
    const_tuple_str_plain_caps_str_plain_cap_str_plain_ret_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_caps_str_plain_cap_str_plain_ret_tuple, 0, const_str_plain_caps ); Py_INCREF( const_str_plain_caps );
    PyTuple_SET_ITEM( const_tuple_str_plain_caps_str_plain_cap_str_plain_ret_tuple, 1, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    const_str_plain_ret = UNSTREAM_STRING( &constant_bin[ 2889 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_caps_str_plain_cap_str_plain_ret_tuple, 2, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_tuple_str_plain_SECURE__tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SECURE__tuple, 0, const_str_plain_SECURE_ ); Py_INCREF( const_str_plain_SECURE_ );
    const_str_plain_capbset = UNSTREAM_STRING( &constant_bin[ 41894 ], 7, 1 );
    const_str_plain_cap_effective = UNSTREAM_STRING( &constant_bin[ 41901 ], 13, 1 );
    const_str_plain_ALL_CAPS = UNSTREAM_STRING( &constant_bin[ 41914 ], 8, 1 );
    const_str_plain__prctl = UNSTREAM_STRING( &constant_bin[ 41922 ], 6, 1 );
    const_str_plain__parse_caps_simple = UNSTREAM_STRING( &constant_bin[ 41928 ], 18, 1 );
    const_str_plain__parse_caps = UNSTREAM_STRING( &constant_bin[ 41928 ], 11, 1 );
    const_str_plain_PR_GET_SECUREBITS = UNSTREAM_STRING( &constant_bin[ 41946 ], 17, 1 );
    const_str_plain_cap_inheritable = UNSTREAM_STRING( &constant_bin[ 41963 ], 15, 1 );
    const_str_plain_PR_CAPBSET_DROP = UNSTREAM_STRING( &constant_bin[ 41978 ], 15, 1 );
    const_str_plain_it = UNSTREAM_STRING( &constant_bin[ 105 ], 2, 1 );
    const_str_plain___getitem__ = UNSTREAM_STRING( &constant_bin[ 41993 ], 11, 1 );
    const_str_plain_Capset = UNSTREAM_STRING( &constant_bin[ 42004 ], 6, 1 );
    const_tuple_str_plain_SECBIT__tuple = PyTuple_New( 1 );
    const_str_plain_SECBIT_ = UNSTREAM_STRING( &constant_bin[ 42010 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SECBIT__tuple, 0, const_str_plain_SECBIT_ ); Py_INCREF( const_str_plain_SECBIT_ );
    const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 0, const_str_plain_has_value ); Py_INCREF( const_str_plain_has_value );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_plain_pf = UNSTREAM_STRING( &constant_bin[ 42017 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 2, const_str_plain_pf ); Py_INCREF( const_str_plain_pf );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 3, const_str_plain_if_ ); Py_INCREF( const_str_plain_if_ );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 4, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 5, const_str_plain_ef ); Py_INCREF( const_str_plain_ef );
    const_str_plain_pt = UNSTREAM_STRING( &constant_bin[ 283 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 6, const_str_plain_pt ); Py_INCREF( const_str_plain_pt );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 7, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 8, const_str_plain_it ); Py_INCREF( const_str_plain_it );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 9, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 10, const_str_plain_caps ); Py_INCREF( const_str_plain_caps );
    const_str_plain_p = UNSTREAM_CHAR( 112, 1 );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 11, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 12, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 13, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 14, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 15, const_str_plain_et ); Py_INCREF( const_str_plain_et );
    const_str_plain_new_args = UNSTREAM_STRING( &constant_bin[ 42019 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 16, const_str_plain_new_args ); Py_INCREF( const_str_plain_new_args );
    PyTuple_SET_ITEM( const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 17, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_str_plain_args_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_digest_600562763863fc9c35068200d681479d = UNSTREAM_STRING( &constant_bin[ 42027 ], 22, 0 );
    const_str_digest_53638a51c638e7d451e828cfa0216fde = UNSTREAM_STRING( &constant_bin[ 42049 ], 41, 0 );
    const_str_plain_call_prctl = UNSTREAM_STRING( &constant_bin[ 42090 ], 10, 1 );
    const_str_plain_basestring = UNSTREAM_STRING( &constant_bin[ 42100 ], 10, 1 );
    const_str_plain_ALL_CAP_NAMES = UNSTREAM_STRING( &constant_bin[ 42110 ], 13, 1 );
    const_str_plain__ALL_FLAG_NAMES = UNSTREAM_STRING( &constant_bin[ 42123 ], 15, 1 );
    const_str_plain_CAP_EFFECTIVE = UNSTREAM_STRING( &constant_bin[ 42138 ], 13, 1 );
    const_tuple_str_plain_self_str_plain_cap_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cap_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_cap_tuple, 1, const_str_plain_cap ); Py_INCREF( const_str_plain_cap );
    const_tuple_str_plain_option_str_plain_call_prctl_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_option_str_plain_call_prctl_tuple, 0, const_str_plain_option ); Py_INCREF( const_str_plain_option );
    PyTuple_SET_ITEM( const_tuple_str_plain_option_str_plain_call_prctl_tuple, 1, const_str_plain_call_prctl ); Py_INCREF( const_str_plain_call_prctl );
    const_tuple_str_plain_self_str_plain_caps_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_caps_tuple, 1, const_str_plain_caps ); Py_INCREF( const_str_plain_caps );
    const_tuple_str_plain_self_str_plain_bit_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bit_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bit_tuple, 1, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    const_str_digest_9281e6d84754a576f9db2d372e5354f3 = UNSTREAM_STRING( &constant_bin[ 42151 ], 14, 0 );
    const_tuple_3a6a1cbd4f5b2b5447175c8ff65e5933_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_3a6a1cbd4f5b2b5447175c8ff65e5933_tuple, 0, const_str_plain_CAP_EFFECTIVE ); Py_INCREF( const_str_plain_CAP_EFFECTIVE );
    PyTuple_SET_ITEM( const_tuple_3a6a1cbd4f5b2b5447175c8ff65e5933_tuple, 1, const_str_plain_CAP_INHERITABLE ); Py_INCREF( const_str_plain_CAP_INHERITABLE );
    PyTuple_SET_ITEM( const_tuple_3a6a1cbd4f5b2b5447175c8ff65e5933_tuple, 2, const_str_plain_CAP_PERMITTED ); Py_INCREF( const_str_plain_CAP_PERMITTED );
    const_str_plain_set_caps = UNSTREAM_STRING( &constant_bin[ 42165 ], 8, 1 );
    const_str_plain__ALL_CAP_NAMES = UNSTREAM_STRING( &constant_bin[ 42173 ], 14, 1 );
    const_list_str_plain_flag_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_flag_list, 0, const_str_plain_flag ); Py_INCREF( const_str_plain_flag );
    const_str_plain_set_proctitle = UNSTREAM_STRING( &constant_bin[ 42187 ], 13, 1 );
    const_tuple_str_plain_self_str_plain_friendly_name_str_plain_name_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_friendly_name_str_plain_name_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_friendly_name_str_plain_name_tuple, 1, const_str_plain_friendly_name ); Py_INCREF( const_str_plain_friendly_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_friendly_name_str_plain_name_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_PR_SET_SECUREBITS = UNSTREAM_STRING( &constant_bin[ 42200 ], 17, 1 );
    const_str_plain_get_caps = UNSTREAM_STRING( &constant_bin[ 42217 ], 8, 1 );
    const_tuple_str_plain_PR_SET_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PR_SET_tuple, 0, const_str_plain_PR_SET ); Py_INCREF( const_str_plain_PR_SET );
    const_str_plain_cap_permitted = UNSTREAM_STRING( &constant_bin[ 42225 ], 13, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_prctl( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_13473377e15edae5933d2cd365e9b604;
static PyCodeObject *codeobj_270854e65e751c1b61e5ca33a93e94b4;
static PyCodeObject *codeobj_9e61268ba9dd262729e6b8465d0b269f;
static PyCodeObject *codeobj_12ab8df35cef08c60ba0d7dcc0ddf6bc;
static PyCodeObject *codeobj_736ed6cb5118899136ff91a70ce29ea5;
static PyCodeObject *codeobj_de0dfebd21d79f6724e52b7e4206d793;
static PyCodeObject *codeobj_8802744bb77442f7fc135e08fa75712e;
static PyCodeObject *codeobj_c13cc18f732aa33e97f55223050f93d8;
static PyCodeObject *codeobj_353e306ed2ffa8a93af2aefdfe4f1611;
static PyCodeObject *codeobj_c6c33fbaae36b8ecc960e893ad827dc1;
static PyCodeObject *codeobj_10ee251875b3ffbf9a30eff5c35db7bd;
static PyCodeObject *codeobj_76d06a31e3dc0321d2a39cbea05a894e;
static PyCodeObject *codeobj_1141addf0c6acc8934796ec64746d43d;
static PyCodeObject *codeobj_91513449975eb9e0e145075b9a88b3e2;
static PyCodeObject *codeobj_e4bae68165987cc6c9ef9a42c94c3c83;
static PyCodeObject *codeobj_b1cc08bd54ce0ff093a712aaa888ac0a;
static PyCodeObject *codeobj_8c89de92821b113f9aa6487f16c63946;
static PyCodeObject *codeobj_6daca1231d8ee2ea036b379db2dae6af;
static PyCodeObject *codeobj_4c08006107a8391f832a7723d0b911aa;
static PyCodeObject *codeobj_0c5e4e15b996191ce988334e30eee051;
static PyCodeObject *codeobj_b8ed98845717ef898bb8ffb2920f8569;
static PyCodeObject *codeobj_6a172f757415021d7af3de7a91b71d99;
static PyCodeObject *codeobj_ca310216665f47a1c936bf80369fc6fe;
static PyCodeObject *codeobj_c7e8cace4d782e1e764401dfc3741b71;
static PyCodeObject *codeobj_cdff3f3d1769a03ccc68630bb3708921;
static PyCodeObject *codeobj_c4bfc5f7a6cd8c52b1ae735e67839508;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_53638a51c638e7d451e828cfa0216fde;
    codeobj_13473377e15edae5933d2cd365e9b604 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9281e6d84754a576f9db2d372e5354f3, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_270854e65e751c1b61e5ca33a93e94b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Capbset, 54, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e61268ba9dd262729e6b8465d0b269f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Capset, 71, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_12ab8df35cef08c60ba0d7dcc0ddf6bc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Securebits, 89, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_736ed6cb5118899136ff91a70ce29ea5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 56, const_tuple_str_plain_self_str_plain_friendly_name_str_plain_name_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de0dfebd21d79f6724e52b7e4206d793 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 73, const_tuple_b8f12329cfa35521a2cf5eea8f7455e2_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8802744bb77442f7fc135e08fa75712e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 91, const_tuple_str_plain_self_str_plain_friendly_name_str_plain_name_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c13cc18f732aa33e97f55223050f93d8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_caps, 131, const_tuple_64e4bb5b6de649fd5dcb9a11b8be8869_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_353e306ed2ffa8a93af2aefdfe4f1611 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_caps_simple, 117, const_tuple_str_plain_caps_str_plain_cap_str_plain_ret_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6c33fbaae36b8ecc960e893ad827dc1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_call_prctl, 14, const_tuple_str_plain_arg_str_plain_option_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_10ee251875b3ffbf9a30eff5c35db7bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cap_wrapper, 27, const_tuple_str_plain_cap_str_plain_getter_str_plain_setter_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_76d06a31e3dc0321d2a39cbea05a894e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_capb_wrapper, 18, const_tuple_str_plain_cap_str_plain_getter_str_plain_setter_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1141addf0c6acc8934796ec64746d43d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drop, 61, const_tuple_str_plain_self_str_plain_caps_str_plain_cap_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_91513449975eb9e0e145075b9a88b3e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_drop, 79, const_tuple_str_plain_self_str_plain_caps_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_e4bae68165987cc6c9ef9a42c94c3c83 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_caps, 174, const_tuple_str_plain_args_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_b1cc08bd54ce0ff093a712aaa888ac0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getter, 19, const_tuple_str_plain_self_str_plain_cap_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_8c89de92821b113f9aa6487f16c63946 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getter, 28, const_tuple_str_plain_self_str_plain_cap_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_6daca1231d8ee2ea036b379db2dae6af = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getter, 35, const_tuple_str_plain_self_str_plain_bit_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_4c08006107a8391f832a7723d0b911aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_limit, 65, const_tuple_str_plain_self_str_plain_caps_str_plain_x_str_plain_cap_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_0c5e4e15b996191ce988334e30eee051 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_limit, 82, const_tuple_str_plain_self_str_plain_caps_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_b8ed98845717ef898bb8ffb2920f8569 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_prctl_wrapper, 13, const_tuple_str_plain_option_str_plain_call_prctl_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6a172f757415021d7af3de7a91b71d99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sec_wrapper, 34, const_tuple_str_plain_bit_str_plain_getter_str_plain_setter_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ca310216665f47a1c936bf80369fc6fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_caps, 177, const_tuple_str_plain_args_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_c7e8cace4d782e1e764401dfc3741b71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setter, 21, const_tuple_str_plain_self_str_plain_value_str_plain_cap_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_cdff3f3d1769a03ccc68630bb3708921 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setter, 30, const_tuple_str_plain_self_str_plain_val_str_plain_cap_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_c4bfc5f7a6cd8c52b1ae735e67839508 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_setter, 37, const_tuple_str_plain_self_str_plain_value_str_plain_bits_str_plain_bit_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_prctl$$$function_10_limit(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_11___init__(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_12__parse_caps_simple(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_13__parse_caps(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_14_get_caps(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_15_set_caps(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_1_prctl_wrapper(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_1_prctl_wrapper$$$function_1_call_prctl( PyObject *defaults );


static PyObject *MAKE_FUNCTION_prctl$$$function_2_capb_wrapper(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_2_capb_wrapper$$$function_1_getter(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_2_capb_wrapper$$$function_2_setter(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_3_cap_wrapper(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_3_cap_wrapper$$$function_1_getter(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_3_cap_wrapper$$$function_2_setter(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_4_sec_wrapper(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_4_sec_wrapper$$$function_1_getter(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_4_sec_wrapper$$$function_2_setter(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_5___init__(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_6_drop(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_7_limit(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_prctl$$$function_9_drop(  );


// The module function definitions.
static PyObject *impl_prctl$$$function_1_prctl_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_option = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_call_prctl = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_0_tuple;
        Py_INCREF( tmp_defaults_1 );
        tmp_assign_source_1 = MAKE_FUNCTION_prctl$$$function_1_prctl_wrapper$$$function_1_call_prctl( tmp_defaults_1 );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_option;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_call_prctl == NULL );
        var_call_prctl = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT( var_call_prctl );
    tmp_return_value = var_call_prctl;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_1_prctl_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_option );
    Py_DECREF( par_option );
    par_option = NULL;

    CHECK_OBJECT( (PyObject *)var_call_prctl );
    Py_DECREF( var_call_prctl );
    var_call_prctl = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_1_prctl_wrapper );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_prctl$$$function_1_prctl_wrapper$$$function_1_call_prctl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arg = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c6c33fbaae36b8ecc960e893ad827dc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c6c33fbaae36b8ecc960e893ad827dc1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c6c33fbaae36b8ecc960e893ad827dc1, codeobj_c6c33fbaae36b8ecc960e893ad827dc1, module_prctl, sizeof(void *)+sizeof(void *) );
    frame_c6c33fbaae36b8ecc960e893ad827dc1 = cache_frame_c6c33fbaae36b8ecc960e893ad827dc1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c6c33fbaae36b8ecc960e893ad827dc1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c6c33fbaae36b8ecc960e893ad827dc1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 15;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prctl );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "option" );
            exception_tb = NULL;

            exception_lineno = 15;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_arg );
        tmp_args_element_name_2 = par_arg;
        frame_c6c33fbaae36b8ecc960e893ad827dc1->m_frame.f_lineno = 15;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6c33fbaae36b8ecc960e893ad827dc1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6c33fbaae36b8ecc960e893ad827dc1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c6c33fbaae36b8ecc960e893ad827dc1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c6c33fbaae36b8ecc960e893ad827dc1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c6c33fbaae36b8ecc960e893ad827dc1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c6c33fbaae36b8ecc960e893ad827dc1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c6c33fbaae36b8ecc960e893ad827dc1,
        type_description_1,
        par_arg,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c6c33fbaae36b8ecc960e893ad827dc1 == cache_frame_c6c33fbaae36b8ecc960e893ad827dc1 )
    {
        Py_DECREF( frame_c6c33fbaae36b8ecc960e893ad827dc1 );
    }
    cache_frame_c6c33fbaae36b8ecc960e893ad827dc1 = NULL;

    assertFrameObject( frame_c6c33fbaae36b8ecc960e893ad827dc1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_1_prctl_wrapper$$$function_1_call_prctl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_1_prctl_wrapper$$$function_1_call_prctl );
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


static PyObject *impl_prctl$$$function_2_capb_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cap = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_getter = NULL;
    PyObject *var_setter = NULL;
    struct Nuitka_FrameObject *frame_76d06a31e3dc0321d2a39cbea05a894e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76d06a31e3dc0321d2a39cbea05a894e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_prctl$$$function_2_capb_wrapper$$$function_1_getter(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_cap;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_getter == NULL );
        var_getter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_prctl$$$function_2_capb_wrapper$$$function_2_setter(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_cap;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );


        assert( var_setter == NULL );
        var_setter = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76d06a31e3dc0321d2a39cbea05a894e, codeobj_76d06a31e3dc0321d2a39cbea05a894e, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_76d06a31e3dc0321d2a39cbea05a894e = cache_frame_76d06a31e3dc0321d2a39cbea05a894e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76d06a31e3dc0321d2a39cbea05a894e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76d06a31e3dc0321d2a39cbea05a894e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyProperty_Type;
        CHECK_OBJECT( var_getter );
        tmp_args_element_name_1 = var_getter;
        CHECK_OBJECT( var_setter );
        tmp_args_element_name_2 = var_setter;
        frame_76d06a31e3dc0321d2a39cbea05a894e->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d06a31e3dc0321d2a39cbea05a894e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d06a31e3dc0321d2a39cbea05a894e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d06a31e3dc0321d2a39cbea05a894e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76d06a31e3dc0321d2a39cbea05a894e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76d06a31e3dc0321d2a39cbea05a894e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76d06a31e3dc0321d2a39cbea05a894e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76d06a31e3dc0321d2a39cbea05a894e,
        type_description_1,
        par_cap,
        var_getter,
        var_setter
    );


    // Release cached frame.
    if ( frame_76d06a31e3dc0321d2a39cbea05a894e == cache_frame_76d06a31e3dc0321d2a39cbea05a894e )
    {
        Py_DECREF( frame_76d06a31e3dc0321d2a39cbea05a894e );
    }
    cache_frame_76d06a31e3dc0321d2a39cbea05a894e = NULL;

    assertFrameObject( frame_76d06a31e3dc0321d2a39cbea05a894e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_2_capb_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_getter );
    Py_DECREF( var_getter );
    var_getter = NULL;

    CHECK_OBJECT( (PyObject *)par_cap );
    Py_DECREF( par_cap );
    par_cap = NULL;

    CHECK_OBJECT( (PyObject *)var_setter );
    Py_DECREF( var_setter );
    var_setter = NULL;

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

    CHECK_OBJECT( (PyObject *)var_getter );
    Py_DECREF( var_getter );
    var_getter = NULL;

    CHECK_OBJECT( (PyObject *)par_cap );
    Py_DECREF( par_cap );
    par_cap = NULL;

    CHECK_OBJECT( (PyObject *)var_setter );
    Py_DECREF( var_setter );
    var_setter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_2_capb_wrapper );
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


static PyObject *impl_prctl$$$function_2_capb_wrapper$$$function_1_getter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_b1cc08bd54ce0ff093a712aaa888ac0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1cc08bd54ce0ff093a712aaa888ac0a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b1cc08bd54ce0ff093a712aaa888ac0a, codeobj_b1cc08bd54ce0ff093a712aaa888ac0a, module_prctl, sizeof(void *)+sizeof(void *) );
    frame_b1cc08bd54ce0ff093a712aaa888ac0a = cache_frame_b1cc08bd54ce0ff093a712aaa888ac0a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b1cc08bd54ce0ff093a712aaa888ac0a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b1cc08bd54ce0ff093a712aaa888ac0a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prctl );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PR_CAPBSET_READ );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cap" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
        frame_b1cc08bd54ce0ff093a712aaa888ac0a->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1cc08bd54ce0ff093a712aaa888ac0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1cc08bd54ce0ff093a712aaa888ac0a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b1cc08bd54ce0ff093a712aaa888ac0a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b1cc08bd54ce0ff093a712aaa888ac0a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b1cc08bd54ce0ff093a712aaa888ac0a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b1cc08bd54ce0ff093a712aaa888ac0a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b1cc08bd54ce0ff093a712aaa888ac0a,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_b1cc08bd54ce0ff093a712aaa888ac0a == cache_frame_b1cc08bd54ce0ff093a712aaa888ac0a )
    {
        Py_DECREF( frame_b1cc08bd54ce0ff093a712aaa888ac0a );
    }
    cache_frame_b1cc08bd54ce0ff093a712aaa888ac0a = NULL;

    assertFrameObject( frame_b1cc08bd54ce0ff093a712aaa888ac0a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_2_capb_wrapper$$$function_1_getter );
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
    NUITKA_CANNOT_GET_HERE( prctl$$$function_2_capb_wrapper$$$function_1_getter );
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


static PyObject *impl_prctl$$$function_2_capb_wrapper$$$function_2_setter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c7e8cace4d782e1e764401dfc3741b71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c7e8cace4d782e1e764401dfc3741b71 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c7e8cace4d782e1e764401dfc3741b71, codeobj_c7e8cace4d782e1e764401dfc3741b71, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c7e8cace4d782e1e764401dfc3741b71 = cache_frame_c7e8cace4d782e1e764401dfc3741b71;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c7e8cace4d782e1e764401dfc3741b71 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c7e8cace4d782e1e764401dfc3741b71 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_value );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_value );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ooc";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_2276aa55860e5898abfe2e9951e0f0d4;
            frame_c7e8cace4d782e1e764401dfc3741b71->m_frame.f_lineno = 23;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 23;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prctl );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PR_CAPBSET_DROP );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cap" );
            exception_tb = NULL;

            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET( self->m_closure[0] );
        frame_c7e8cace4d782e1e764401dfc3741b71->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7e8cace4d782e1e764401dfc3741b71 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c7e8cace4d782e1e764401dfc3741b71 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c7e8cace4d782e1e764401dfc3741b71, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c7e8cace4d782e1e764401dfc3741b71->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c7e8cace4d782e1e764401dfc3741b71, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c7e8cace4d782e1e764401dfc3741b71,
        type_description_1,
        par_self,
        par_value,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c7e8cace4d782e1e764401dfc3741b71 == cache_frame_c7e8cace4d782e1e764401dfc3741b71 )
    {
        Py_DECREF( frame_c7e8cace4d782e1e764401dfc3741b71 );
    }
    cache_frame_c7e8cace4d782e1e764401dfc3741b71 = NULL;

    assertFrameObject( frame_c7e8cace4d782e1e764401dfc3741b71 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_2_capb_wrapper$$$function_2_setter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( prctl$$$function_2_capb_wrapper$$$function_2_setter );
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


static PyObject *impl_prctl$$$function_3_cap_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cap = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_getter = NULL;
    PyObject *var_setter = NULL;
    struct Nuitka_FrameObject *frame_10ee251875b3ffbf9a30eff5c35db7bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10ee251875b3ffbf9a30eff5c35db7bd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_prctl$$$function_3_cap_wrapper$$$function_1_getter(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_cap;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_getter == NULL );
        var_getter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_prctl$$$function_3_cap_wrapper$$$function_2_setter(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_cap;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );


        assert( var_setter == NULL );
        var_setter = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10ee251875b3ffbf9a30eff5c35db7bd, codeobj_10ee251875b3ffbf9a30eff5c35db7bd, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10ee251875b3ffbf9a30eff5c35db7bd = cache_frame_10ee251875b3ffbf9a30eff5c35db7bd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10ee251875b3ffbf9a30eff5c35db7bd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10ee251875b3ffbf9a30eff5c35db7bd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyProperty_Type;
        CHECK_OBJECT( var_getter );
        tmp_args_element_name_1 = var_getter;
        CHECK_OBJECT( var_setter );
        tmp_args_element_name_2 = var_setter;
        frame_10ee251875b3ffbf9a30eff5c35db7bd->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ee251875b3ffbf9a30eff5c35db7bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ee251875b3ffbf9a30eff5c35db7bd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10ee251875b3ffbf9a30eff5c35db7bd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10ee251875b3ffbf9a30eff5c35db7bd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10ee251875b3ffbf9a30eff5c35db7bd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10ee251875b3ffbf9a30eff5c35db7bd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10ee251875b3ffbf9a30eff5c35db7bd,
        type_description_1,
        par_cap,
        var_getter,
        var_setter
    );


    // Release cached frame.
    if ( frame_10ee251875b3ffbf9a30eff5c35db7bd == cache_frame_10ee251875b3ffbf9a30eff5c35db7bd )
    {
        Py_DECREF( frame_10ee251875b3ffbf9a30eff5c35db7bd );
    }
    cache_frame_10ee251875b3ffbf9a30eff5c35db7bd = NULL;

    assertFrameObject( frame_10ee251875b3ffbf9a30eff5c35db7bd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_3_cap_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_getter );
    Py_DECREF( var_getter );
    var_getter = NULL;

    CHECK_OBJECT( (PyObject *)par_cap );
    Py_DECREF( par_cap );
    par_cap = NULL;

    CHECK_OBJECT( (PyObject *)var_setter );
    Py_DECREF( var_setter );
    var_setter = NULL;

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

    CHECK_OBJECT( (PyObject *)var_getter );
    Py_DECREF( var_getter );
    var_getter = NULL;

    CHECK_OBJECT( (PyObject *)par_cap );
    Py_DECREF( par_cap );
    par_cap = NULL;

    CHECK_OBJECT( (PyObject *)var_setter );
    Py_DECREF( var_setter );
    var_setter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_3_cap_wrapper );
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


static PyObject *impl_prctl$$$function_3_cap_wrapper$$$function_1_getter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8c89de92821b113f9aa6487f16c63946;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8c89de92821b113f9aa6487f16c63946 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8c89de92821b113f9aa6487f16c63946, codeobj_8c89de92821b113f9aa6487f16c63946, module_prctl, sizeof(void *)+sizeof(void *) );
    frame_8c89de92821b113f9aa6487f16c63946 = cache_frame_8c89de92821b113f9aa6487f16c63946;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8c89de92821b113f9aa6487f16c63946 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8c89de92821b113f9aa6487f16c63946 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_get_caps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_caps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_caps" );
            exception_tb = NULL;

            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cap" );
            exception_tb = NULL;

            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flag );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        frame_8c89de92821b113f9aa6487f16c63946->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_subscript_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_flag );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscribed_name_2 );

            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_2 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_subscribed_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cap" );
            exception_tb = NULL;

            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_2 = PyCell_GET( self->m_closure[0] );
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c89de92821b113f9aa6487f16c63946 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c89de92821b113f9aa6487f16c63946 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8c89de92821b113f9aa6487f16c63946 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8c89de92821b113f9aa6487f16c63946, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8c89de92821b113f9aa6487f16c63946->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8c89de92821b113f9aa6487f16c63946, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8c89de92821b113f9aa6487f16c63946,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_8c89de92821b113f9aa6487f16c63946 == cache_frame_8c89de92821b113f9aa6487f16c63946 )
    {
        Py_DECREF( frame_8c89de92821b113f9aa6487f16c63946 );
    }
    cache_frame_8c89de92821b113f9aa6487f16c63946 = NULL;

    assertFrameObject( frame_8c89de92821b113f9aa6487f16c63946 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_3_cap_wrapper$$$function_1_getter );
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
    NUITKA_CANNOT_GET_HERE( prctl$$$function_3_cap_wrapper$$$function_1_getter );
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


static PyObject *impl_prctl$$$function_3_cap_wrapper$$$function_2_setter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_cdff3f3d1769a03ccc68630bb3708921;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cdff3f3d1769a03ccc68630bb3708921 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cdff3f3d1769a03ccc68630bb3708921, codeobj_cdff3f3d1769a03ccc68630bb3708921, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cdff3f3d1769a03ccc68630bb3708921 = cache_frame_cdff3f3d1769a03ccc68630bb3708921;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cdff3f3d1769a03ccc68630bb3708921 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cdff3f3d1769a03ccc68630bb3708921 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_set_caps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_caps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "set_caps" );
            exception_tb = NULL;

            exception_lineno = 31;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cap" );
            exception_tb = NULL;

            exception_lineno = 31;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flag );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 31;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_val );
        tmp_tuple_element_1 = par_val;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 2, tmp_tuple_element_1 );
        frame_cdff3f3d1769a03ccc68630bb3708921->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdff3f3d1769a03ccc68630bb3708921 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cdff3f3d1769a03ccc68630bb3708921 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cdff3f3d1769a03ccc68630bb3708921, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cdff3f3d1769a03ccc68630bb3708921->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cdff3f3d1769a03ccc68630bb3708921, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cdff3f3d1769a03ccc68630bb3708921,
        type_description_1,
        par_self,
        par_val,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_cdff3f3d1769a03ccc68630bb3708921 == cache_frame_cdff3f3d1769a03ccc68630bb3708921 )
    {
        Py_DECREF( frame_cdff3f3d1769a03ccc68630bb3708921 );
    }
    cache_frame_cdff3f3d1769a03ccc68630bb3708921 = NULL;

    assertFrameObject( frame_cdff3f3d1769a03ccc68630bb3708921 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_3_cap_wrapper$$$function_2_setter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_3_cap_wrapper$$$function_2_setter );
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


static PyObject *impl_prctl$$$function_4_sec_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_bit = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_getter = NULL;
    PyObject *var_setter = NULL;
    struct Nuitka_FrameObject *frame_6a172f757415021d7af3de7a91b71d99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a172f757415021d7af3de7a91b71d99 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_prctl$$$function_4_sec_wrapper$$$function_1_getter(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_bit;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_getter == NULL );
        var_getter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_prctl$$$function_4_sec_wrapper$$$function_2_setter(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_bit;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );


        assert( var_setter == NULL );
        var_setter = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a172f757415021d7af3de7a91b71d99, codeobj_6a172f757415021d7af3de7a91b71d99, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6a172f757415021d7af3de7a91b71d99 = cache_frame_6a172f757415021d7af3de7a91b71d99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a172f757415021d7af3de7a91b71d99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a172f757415021d7af3de7a91b71d99 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyProperty_Type;
        CHECK_OBJECT( var_getter );
        tmp_args_element_name_1 = var_getter;
        CHECK_OBJECT( var_setter );
        tmp_args_element_name_2 = var_setter;
        frame_6a172f757415021d7af3de7a91b71d99->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;
            type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a172f757415021d7af3de7a91b71d99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a172f757415021d7af3de7a91b71d99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a172f757415021d7af3de7a91b71d99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a172f757415021d7af3de7a91b71d99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a172f757415021d7af3de7a91b71d99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a172f757415021d7af3de7a91b71d99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a172f757415021d7af3de7a91b71d99,
        type_description_1,
        par_bit,
        var_getter,
        var_setter
    );


    // Release cached frame.
    if ( frame_6a172f757415021d7af3de7a91b71d99 == cache_frame_6a172f757415021d7af3de7a91b71d99 )
    {
        Py_DECREF( frame_6a172f757415021d7af3de7a91b71d99 );
    }
    cache_frame_6a172f757415021d7af3de7a91b71d99 = NULL;

    assertFrameObject( frame_6a172f757415021d7af3de7a91b71d99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_4_sec_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bit );
    Py_DECREF( par_bit );
    par_bit = NULL;

    CHECK_OBJECT( (PyObject *)var_getter );
    Py_DECREF( var_getter );
    var_getter = NULL;

    CHECK_OBJECT( (PyObject *)var_setter );
    Py_DECREF( var_setter );
    var_setter = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bit );
    Py_DECREF( par_bit );
    par_bit = NULL;

    CHECK_OBJECT( (PyObject *)var_getter );
    Py_DECREF( var_getter );
    var_getter = NULL;

    CHECK_OBJECT( (PyObject *)var_setter );
    Py_DECREF( var_setter );
    var_setter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_4_sec_wrapper );
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


static PyObject *impl_prctl$$$function_4_sec_wrapper$$$function_1_getter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_6daca1231d8ee2ea036b379db2dae6af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_6daca1231d8ee2ea036b379db2dae6af = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6daca1231d8ee2ea036b379db2dae6af, codeobj_6daca1231d8ee2ea036b379db2dae6af, module_prctl, sizeof(void *)+sizeof(void *) );
    frame_6daca1231d8ee2ea036b379db2dae6af = cache_frame_6daca1231d8ee2ea036b379db2dae6af;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6daca1231d8ee2ea036b379db2dae6af );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6daca1231d8ee2ea036b379db2dae6af ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prctl );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PR_GET_SECUREBITS );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_6daca1231d8ee2ea036b379db2dae6af->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "bit" );
            exception_tb = NULL;

            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_value_name_1 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6daca1231d8ee2ea036b379db2dae6af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6daca1231d8ee2ea036b379db2dae6af );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6daca1231d8ee2ea036b379db2dae6af );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6daca1231d8ee2ea036b379db2dae6af, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6daca1231d8ee2ea036b379db2dae6af->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6daca1231d8ee2ea036b379db2dae6af, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6daca1231d8ee2ea036b379db2dae6af,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_6daca1231d8ee2ea036b379db2dae6af == cache_frame_6daca1231d8ee2ea036b379db2dae6af )
    {
        Py_DECREF( frame_6daca1231d8ee2ea036b379db2dae6af );
    }
    cache_frame_6daca1231d8ee2ea036b379db2dae6af = NULL;

    assertFrameObject( frame_6daca1231d8ee2ea036b379db2dae6af );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_4_sec_wrapper$$$function_1_getter );
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
    NUITKA_CANNOT_GET_HERE( prctl$$$function_4_sec_wrapper$$$function_1_getter );
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


static PyObject *impl_prctl$$$function_4_sec_wrapper$$$function_2_setter( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *var_bits = NULL;
    struct Nuitka_FrameObject *frame_c4bfc5f7a6cd8c52b1ae735e67839508;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c4bfc5f7a6cd8c52b1ae735e67839508 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c4bfc5f7a6cd8c52b1ae735e67839508, codeobj_c4bfc5f7a6cd8c52b1ae735e67839508, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c4bfc5f7a6cd8c52b1ae735e67839508 = cache_frame_c4bfc5f7a6cd8c52b1ae735e67839508;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c4bfc5f7a6cd8c52b1ae735e67839508 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c4bfc5f7a6cd8c52b1ae735e67839508 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 38;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prctl );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 38;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PR_GET_SECUREBITS );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 38;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_c4bfc5f7a6cd8c52b1ae735e67839508->m_frame.f_lineno = 38;
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


            exception_lineno = 38;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert( var_bits == NULL );
        var_bits = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_value );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_value );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;
            type_description_1 = "oooc";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_bits );
            tmp_left_name_1 = var_bits;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "bit" );
                exception_tb = NULL;

                exception_lineno = 40;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }

            tmp_right_name_1 = PyCell_GET( self->m_closure[0] );
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceOr, &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = tmp_left_name_1;
            var_bits = tmp_assign_source_2;

        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( var_bits );
            tmp_left_name_2 = var_bits;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "bit" );
                exception_tb = NULL;

                exception_lineno = 42;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }

            tmp_operand_name_1 = PyCell_GET( self->m_closure[0] );
            tmp_right_name_2 = UNARY_OPERATION( PyNumber_Invert, tmp_operand_name_1 );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceAnd, &tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_2;
            var_bits = tmp_assign_source_3;

        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_prctl );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_PR_SET_SECUREBITS );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_bits );
        tmp_args_element_name_3 = var_bits;
        frame_c4bfc5f7a6cd8c52b1ae735e67839508->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4bfc5f7a6cd8c52b1ae735e67839508 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4bfc5f7a6cd8c52b1ae735e67839508 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c4bfc5f7a6cd8c52b1ae735e67839508, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c4bfc5f7a6cd8c52b1ae735e67839508->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c4bfc5f7a6cd8c52b1ae735e67839508, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c4bfc5f7a6cd8c52b1ae735e67839508,
        type_description_1,
        par_self,
        par_value,
        var_bits,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c4bfc5f7a6cd8c52b1ae735e67839508 == cache_frame_c4bfc5f7a6cd8c52b1ae735e67839508 )
    {
        Py_DECREF( frame_c4bfc5f7a6cd8c52b1ae735e67839508 );
    }
    cache_frame_c4bfc5f7a6cd8c52b1ae735e67839508 = NULL;

    assertFrameObject( frame_c4bfc5f7a6cd8c52b1ae735e67839508 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_4_sec_wrapper$$$function_2_setter );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_bits );
    Py_DECREF( var_bits );
    var_bits = NULL;

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

    Py_XDECREF( var_bits );
    var_bits = NULL;

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
    NUITKA_CANNOT_GET_HERE( prctl$$$function_4_sec_wrapper$$$function_2_setter );
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


static PyObject *impl_prctl$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_friendly_name = NULL;
    PyObject *var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_736ed6cb5118899136ff91a70ce29ea5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_736ed6cb5118899136ff91a70ce29ea5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_736ed6cb5118899136ff91a70ce29ea5, codeobj_736ed6cb5118899136ff91a70ce29ea5, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_736ed6cb5118899136ff91a70ce29ea5 = cache_frame_736ed6cb5118899136ff91a70ce29ea5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_736ed6cb5118899136ff91a70ce29ea5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_736ed6cb5118899136ff91a70ce29ea5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ALL_CAP_NAMES" );
            exception_tb = NULL;

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = tmp_mvar_value_1;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 57;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_3;
            Py_INCREF( var_name );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        tmp_sliceslicedel_index_lower_1 = 4;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT( var_name );
        tmp_slice_source_1 = var_name;
        tmp_called_instance_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_736ed6cb5118899136ff91a70ce29ea5->m_frame.f_lineno = 58;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_friendly_name;
            var_friendly_name = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_setattr_target_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_setattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_friendly_name );
        tmp_setattr_attr_1 = var_friendly_name;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_capb_wrapper );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_capb_wrapper );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_setattr_target_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "capb_wrapper" );
            exception_tb = NULL;

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_setattr_target_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_name );
        tmp_getattr_attr_1 = var_name;
        tmp_args_element_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_setattr_target_1 );

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_736ed6cb5118899136ff91a70ce29ea5->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_setattr_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_setattr_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_setattr_target_1 );

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
        Py_DECREF( tmp_setattr_target_1 );
        Py_DECREF( tmp_setattr_value_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_736ed6cb5118899136ff91a70ce29ea5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_736ed6cb5118899136ff91a70ce29ea5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_736ed6cb5118899136ff91a70ce29ea5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_736ed6cb5118899136ff91a70ce29ea5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_736ed6cb5118899136ff91a70ce29ea5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_736ed6cb5118899136ff91a70ce29ea5,
        type_description_1,
        par_self,
        var_friendly_name,
        var_name
    );


    // Release cached frame.
    if ( frame_736ed6cb5118899136ff91a70ce29ea5 == cache_frame_736ed6cb5118899136ff91a70ce29ea5 )
    {
        Py_DECREF( frame_736ed6cb5118899136ff91a70ce29ea5 );
    }
    cache_frame_736ed6cb5118899136ff91a70ce29ea5 = NULL;

    assertFrameObject( frame_736ed6cb5118899136ff91a70ce29ea5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_friendly_name );
    var_friendly_name = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_friendly_name );
    var_friendly_name = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_5___init__ );
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


static PyObject *impl_prctl$$$function_6_drop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_caps = python_pars[ 1 ];
    PyObject *var_cap = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1141addf0c6acc8934796ec64746d43d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_1141addf0c6acc8934796ec64746d43d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1141addf0c6acc8934796ec64746d43d, codeobj_1141addf0c6acc8934796ec64746d43d, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1141addf0c6acc8934796ec64746d43d = cache_frame_1141addf0c6acc8934796ec64746d43d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1141addf0c6acc8934796ec64746d43d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1141addf0c6acc8934796ec64746d43d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_caps_simple" );
            exception_tb = NULL;

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_caps );
        tmp_args_element_name_1 = par_caps;
        frame_1141addf0c6acc8934796ec64746d43d->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 62;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cap;
            var_cap = tmp_assign_source_3;
            Py_INCREF( var_cap );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 63;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prctl );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 63;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PR_CAPBSET_DROP );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 63;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_cap );
        tmp_args_element_name_3 = var_cap;
        frame_1141addf0c6acc8934796ec64746d43d->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1141addf0c6acc8934796ec64746d43d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1141addf0c6acc8934796ec64746d43d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1141addf0c6acc8934796ec64746d43d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1141addf0c6acc8934796ec64746d43d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1141addf0c6acc8934796ec64746d43d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1141addf0c6acc8934796ec64746d43d,
        type_description_1,
        par_self,
        par_caps,
        var_cap
    );


    // Release cached frame.
    if ( frame_1141addf0c6acc8934796ec64746d43d == cache_frame_1141addf0c6acc8934796ec64746d43d )
    {
        Py_DECREF( frame_1141addf0c6acc8934796ec64746d43d );
    }
    cache_frame_1141addf0c6acc8934796ec64746d43d = NULL;

    assertFrameObject( frame_1141addf0c6acc8934796ec64746d43d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_6_drop );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cap );
    var_cap = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

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

    Py_XDECREF( var_cap );
    var_cap = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_6_drop );
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


static PyObject *impl_prctl$$$function_7_limit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_caps = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *var_cap = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4c08006107a8391f832a7723d0b911aa;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_4c08006107a8391f832a7723d0b911aa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c08006107a8391f832a7723d0b911aa, codeobj_4c08006107a8391f832a7723d0b911aa, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4c08006107a8391f832a7723d0b911aa = cache_frame_4c08006107a8391f832a7723d0b911aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c08006107a8391f832a7723d0b911aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c08006107a8391f832a7723d0b911aa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_CAPS );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ALL_CAPS );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ALL_CAPS" );
                exception_tb = NULL;

                exception_lineno = 66;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_iter_arg_2 = tmp_mvar_value_1;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_3;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooo";
                    exception_lineno = 66;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_5;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( var_x );
            tmp_compexpr_left_1 = var_x;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_caps_simple" );
                exception_tb = NULL;

                exception_lineno = 66;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_caps );
            tmp_args_element_name_1 = par_caps;
            frame_4c08006107a8391f832a7723d0b911aa->m_frame.f_lineno = 66;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_compexpr_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            if ( tmp_compexpr_right_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 66;
                type_description_1 = "oooo";
                goto try_except_handler_2;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                CHECK_OBJECT( var_x );
                tmp_append_value_1 = var_x;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 66;
                    type_description_1 = "oooo";
                    goto try_except_handler_2;
                }
            }
            branch_no_1:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_iter_arg_1 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_iter_arg_1 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl$$$function_7_limit );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
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
        try_except_handler_2:;
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
        NUITKA_CANNOT_GET_HERE( prctl$$$function_7_limit );
        return NULL;
        outline_result_1:;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 66;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cap;
            var_cap = tmp_assign_source_7;
            Py_INCREF( var_cap );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_prctl );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_source_name_2 = tmp_mvar_value_4;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PR_CAPBSET_DROP );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( var_cap );
        tmp_args_element_name_3 = var_cap;
        frame_4c08006107a8391f832a7723d0b911aa->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c08006107a8391f832a7723d0b911aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c08006107a8391f832a7723d0b911aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c08006107a8391f832a7723d0b911aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c08006107a8391f832a7723d0b911aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c08006107a8391f832a7723d0b911aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c08006107a8391f832a7723d0b911aa,
        type_description_1,
        par_self,
        par_caps,
        var_x,
        var_cap
    );


    // Release cached frame.
    if ( frame_4c08006107a8391f832a7723d0b911aa == cache_frame_4c08006107a8391f832a7723d0b911aa )
    {
        Py_DECREF( frame_4c08006107a8391f832a7723d0b911aa );
    }
    cache_frame_4c08006107a8391f832a7723d0b911aa = NULL;

    assertFrameObject( frame_4c08006107a8391f832a7723d0b911aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_7_limit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cap );
    var_cap = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cap );
    var_cap = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_7_limit );
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


static PyObject *impl_prctl$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_flag = python_pars[ 1 ];
    PyObject *var_friendly_name = NULL;
    PyObject *var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_de0dfebd21d79f6724e52b7e4206d793;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_de0dfebd21d79f6724e52b7e4206d793 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de0dfebd21d79f6724e52b7e4206d793, codeobj_de0dfebd21d79f6724e52b7e4206d793, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_de0dfebd21d79f6724e52b7e4206d793 = cache_frame_de0dfebd21d79f6724e52b7e4206d793;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de0dfebd21d79f6724e52b7e4206d793 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de0dfebd21d79f6724e52b7e4206d793 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_flag );
        tmp_assattr_name_1 = par_flag;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_flag, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ALL_CAP_NAMES" );
            exception_tb = NULL;

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = tmp_mvar_value_1;
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 75;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_3;
            Py_INCREF( var_name );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        tmp_sliceslicedel_index_lower_1 = 4;
        tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
        CHECK_OBJECT( var_name );
        tmp_slice_source_1 = var_name;
        tmp_called_instance_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_de0dfebd21d79f6724e52b7e4206d793->m_frame.f_lineno = 76;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_friendly_name;
            var_friendly_name = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_setattr_target_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
        if ( tmp_setattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( var_friendly_name );
        tmp_setattr_attr_1 = var_friendly_name;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_cap_wrapper );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cap_wrapper );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_setattr_target_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "cap_wrapper" );
            exception_tb = NULL;

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_setattr_target_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_getattr_target_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_name );
        tmp_getattr_attr_1 = var_name;
        tmp_args_element_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_setattr_target_1 );

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_de0dfebd21d79f6724e52b7e4206d793->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_setattr_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_setattr_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_setattr_target_1 );

            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
        Py_DECREF( tmp_setattr_target_1 );
        Py_DECREF( tmp_setattr_value_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de0dfebd21d79f6724e52b7e4206d793 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de0dfebd21d79f6724e52b7e4206d793 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de0dfebd21d79f6724e52b7e4206d793, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de0dfebd21d79f6724e52b7e4206d793->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de0dfebd21d79f6724e52b7e4206d793, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de0dfebd21d79f6724e52b7e4206d793,
        type_description_1,
        par_self,
        par_flag,
        var_friendly_name,
        var_name
    );


    // Release cached frame.
    if ( frame_de0dfebd21d79f6724e52b7e4206d793 == cache_frame_de0dfebd21d79f6724e52b7e4206d793 )
    {
        Py_DECREF( frame_de0dfebd21d79f6724e52b7e4206d793 );
    }
    cache_frame_de0dfebd21d79f6724e52b7e4206d793 = NULL;

    assertFrameObject( frame_de0dfebd21d79f6724e52b7e4206d793 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_friendly_name );
    var_friendly_name = NULL;

    CHECK_OBJECT( (PyObject *)par_flag );
    Py_DECREF( par_flag );
    par_flag = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_friendly_name );
    var_friendly_name = NULL;

    CHECK_OBJECT( (PyObject *)par_flag );
    Py_DECREF( par_flag );
    par_flag = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_8___init__ );
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


static PyObject *impl_prctl$$$function_9_drop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_caps = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_91513449975eb9e0e145075b9a88b3e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91513449975eb9e0e145075b9a88b3e2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_91513449975eb9e0e145075b9a88b3e2, codeobj_91513449975eb9e0e145075b9a88b3e2, module_prctl, sizeof(void *)+sizeof(void *) );
    frame_91513449975eb9e0e145075b9a88b3e2 = cache_frame_91513449975eb9e0e145075b9a88b3e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_91513449975eb9e0e145075b9a88b3e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_91513449975eb9e0e145075b9a88b3e2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_set_caps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_caps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "set_caps" );
            exception_tb = NULL;

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_caps_simple" );
            exception_tb = NULL;

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_caps );
        tmp_args_element_name_2 = par_caps;
        frame_91513449975eb9e0e145075b9a88b3e2->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flag );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 2, tmp_tuple_element_1 );
        frame_91513449975eb9e0e145075b9a88b3e2->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91513449975eb9e0e145075b9a88b3e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_91513449975eb9e0e145075b9a88b3e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_91513449975eb9e0e145075b9a88b3e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_91513449975eb9e0e145075b9a88b3e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_91513449975eb9e0e145075b9a88b3e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_91513449975eb9e0e145075b9a88b3e2,
        type_description_1,
        par_self,
        par_caps
    );


    // Release cached frame.
    if ( frame_91513449975eb9e0e145075b9a88b3e2 == cache_frame_91513449975eb9e0e145075b9a88b3e2 )
    {
        Py_DECREF( frame_91513449975eb9e0e145075b9a88b3e2 );
    }
    cache_frame_91513449975eb9e0e145075b9a88b3e2 = NULL;

    assertFrameObject( frame_91513449975eb9e0e145075b9a88b3e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_9_drop );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

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

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_9_drop );
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


static PyObject *impl_prctl$$$function_10_limit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_caps = python_pars[ 1 ];
    PyObject *var_x = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_0c5e4e15b996191ce988334e30eee051;
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
    static struct Nuitka_FrameObject *cache_frame_0c5e4e15b996191ce988334e30eee051 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0c5e4e15b996191ce988334e30eee051, codeobj_0c5e4e15b996191ce988334e30eee051, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0c5e4e15b996191ce988334e30eee051 = cache_frame_0c5e4e15b996191ce988334e30eee051;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0c5e4e15b996191ce988334e30eee051 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0c5e4e15b996191ce988334e30eee051 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_set_caps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_set_caps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "set_caps" );
            exception_tb = NULL;

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_CAPS );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ALL_CAPS );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ALL_CAPS" );
                exception_tb = NULL;

                exception_lineno = 83;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_iter_arg_1 = tmp_mvar_value_2;
            tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_2;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooo";
                    exception_lineno = 83;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_x;
                var_x = tmp_assign_source_4;
                Py_INCREF( var_x );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_x );
            tmp_compexpr_left_1 = var_x;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_caps_simple" );
                exception_tb = NULL;

                exception_lineno = 83;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT( par_caps );
            tmp_args_element_name_2 = par_caps;
            frame_0c5e4e15b996191ce988334e30eee051->m_frame.f_lineno = 83;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_compexpr_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_compexpr_right_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 83;
                type_description_1 = "ooo";
                goto try_except_handler_2;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                CHECK_OBJECT( var_x );
                tmp_append_value_1 = var_x;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 83;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
            }
            branch_no_1:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_tuple_element_1 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_tuple_element_1 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl$$$function_10_limit );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
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
        try_except_handler_2:;
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
        NUITKA_CANNOT_GET_HERE( prctl$$$function_10_limit );
        return NULL;
        outline_result_1:;
        tmp_args_element_name_1 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flag );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
        tmp_tuple_element_1 = Py_False;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_1, 2, tmp_tuple_element_1 );
        frame_0c5e4e15b996191ce988334e30eee051->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c5e4e15b996191ce988334e30eee051 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c5e4e15b996191ce988334e30eee051 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0c5e4e15b996191ce988334e30eee051, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0c5e4e15b996191ce988334e30eee051->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0c5e4e15b996191ce988334e30eee051, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0c5e4e15b996191ce988334e30eee051,
        type_description_1,
        par_self,
        par_caps,
        var_x
    );


    // Release cached frame.
    if ( frame_0c5e4e15b996191ce988334e30eee051 == cache_frame_0c5e4e15b996191ce988334e30eee051 )
    {
        Py_DECREF( frame_0c5e4e15b996191ce988334e30eee051 );
    }
    cache_frame_0c5e4e15b996191ce988334e30eee051 = NULL;

    assertFrameObject( frame_0c5e4e15b996191ce988334e30eee051 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_10_limit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

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

    Py_XDECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_10_limit );
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


static PyObject *impl_prctl$$$function_11___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_friendly_name = NULL;
    PyObject *var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8802744bb77442f7fc135e08fa75712e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_8802744bb77442f7fc135e08fa75712e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8802744bb77442f7fc135e08fa75712e, codeobj_8802744bb77442f7fc135e08fa75712e, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8802744bb77442f7fc135e08fa75712e = cache_frame_8802744bb77442f7fc135e08fa75712e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8802744bb77442f7fc135e08fa75712e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8802744bb77442f7fc135e08fa75712e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dir_arg_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dir_arg_1 = tmp_mvar_value_1;
        tmp_iter_arg_1 = PyObject_Dir( tmp_dir_arg_1 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 92;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_3;
            Py_INCREF( var_name );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_name );
        tmp_called_instance_1 = var_name;
        frame_8802744bb77442f7fc135e08fa75712e->m_frame.f_lineno = 93;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_SECBIT__tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 93;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_2;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            tmp_sliceslicedel_index_lower_1 = 7;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT( var_name );
            tmp_slice_source_1 = var_name;
            tmp_called_instance_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_8802744bb77442f7fc135e08fa75712e->m_frame.f_lineno = 94;
            tmp_assign_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_friendly_name;
                var_friendly_name = tmp_assign_source_4;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_setattr_target_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_setattr_attr_1;
            PyObject *tmp_setattr_value_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_capi_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_setattr_target_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_setattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( var_friendly_name );
            tmp_setattr_attr_1 = var_friendly_name;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_sec_wrapper );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sec_wrapper );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_setattr_target_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "sec_wrapper" );
                exception_tb = NULL;

                exception_lineno = 95;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_setattr_target_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 95;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_getattr_target_1 = tmp_mvar_value_3;
            CHECK_OBJECT( var_name );
            tmp_getattr_attr_1 = var_name;
            tmp_args_element_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_setattr_target_1 );

                exception_lineno = 95;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_8802744bb77442f7fc135e08fa75712e->m_frame.f_lineno = 95;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_setattr_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_setattr_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_setattr_target_1 );

                exception_lineno = 95;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
            Py_DECREF( tmp_setattr_target_1 );
            Py_DECREF( tmp_setattr_value_1 );
            if ( tmp_capi_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8802744bb77442f7fc135e08fa75712e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8802744bb77442f7fc135e08fa75712e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8802744bb77442f7fc135e08fa75712e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8802744bb77442f7fc135e08fa75712e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8802744bb77442f7fc135e08fa75712e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8802744bb77442f7fc135e08fa75712e,
        type_description_1,
        par_self,
        var_friendly_name,
        var_name
    );


    // Release cached frame.
    if ( frame_8802744bb77442f7fc135e08fa75712e == cache_frame_8802744bb77442f7fc135e08fa75712e )
    {
        Py_DECREF( frame_8802744bb77442f7fc135e08fa75712e );
    }
    cache_frame_8802744bb77442f7fc135e08fa75712e = NULL;

    assertFrameObject( frame_8802744bb77442f7fc135e08fa75712e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_11___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_friendly_name );
    var_friendly_name = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_friendly_name );
    var_friendly_name = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_11___init__ );
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


static PyObject *impl_prctl$$$function_12__parse_caps_simple( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_caps = python_pars[ 0 ];
    PyObject *var_cap = NULL;
    PyObject *var_ret = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_353e306ed2ffa8a93af2aefdfe4f1611;
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
    static struct Nuitka_FrameObject *cache_frame_353e306ed2ffa8a93af2aefdfe4f1611 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New( 0 );
        assert( var_ret == NULL );
        var_ret = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_353e306ed2ffa8a93af2aefdfe4f1611, codeobj_353e306ed2ffa8a93af2aefdfe4f1611, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_353e306ed2ffa8a93af2aefdfe4f1611 = cache_frame_353e306ed2ffa8a93af2aefdfe4f1611;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_353e306ed2ffa8a93af2aefdfe4f1611 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_353e306ed2ffa8a93af2aefdfe4f1611 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_caps );
        tmp_iter_arg_1 = par_caps;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                exception_lineno = 119;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cap;
            var_cap = tmp_assign_source_4;
            Py_INCREF( var_cap );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( var_cap );
        tmp_isinstance_inst_1 = var_cap;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_basestring );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
            exception_tb = NULL;

            exception_lineno = 120;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            tmp_left_name_1 = const_str_plain_CAP_;
            CHECK_OBJECT( var_cap );
            tmp_called_instance_1 = var_cap;
            frame_353e306ed2ffa8a93af2aefdfe4f1611->m_frame.f_lineno = 121;
            tmp_right_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_upper );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_compexpr_left_1 = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ALL_CAP_NAMES" );
                exception_tb = NULL;

                exception_lineno = 121;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_compexpr_right_1 = tmp_mvar_value_2;
            tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "ooo";
                goto try_except_handler_2;
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
                PyObject *tmp_assign_source_5;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_instance_2;
                tmp_left_name_2 = const_str_plain_CAP_;
                CHECK_OBJECT( var_cap );
                tmp_called_instance_2 = var_cap;
                frame_353e306ed2ffa8a93af2aefdfe4f1611->m_frame.f_lineno = 122;
                tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_upper );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_5 = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_assign_source_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 122;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = var_cap;
                    assert( old != NULL );
                    var_cap = tmp_assign_source_5;
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_mvar_value_3;
                CHECK_OBJECT( var_cap );
                tmp_compexpr_left_2 = var_cap;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ALL_CAP_NAMES" );
                    exception_tb = NULL;

                    exception_lineno = 123;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }

                tmp_compexpr_right_2 = tmp_mvar_value_3;
                tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 123;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
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
                    PyObject *tmp_make_exception_arg_1;
                    PyObject *tmp_left_name_3;
                    PyObject *tmp_right_name_3;
                    tmp_left_name_3 = const_str_digest_600562763863fc9c35068200d681479d;
                    CHECK_OBJECT( var_cap );
                    tmp_right_name_3 = var_cap;
                    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                    if ( tmp_make_exception_arg_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 124;
                        type_description_1 = "ooo";
                        goto try_except_handler_2;
                    }
                    frame_353e306ed2ffa8a93af2aefdfe4f1611->m_frame.f_lineno = 124;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_1 };
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    Py_DECREF( tmp_make_exception_arg_1 );
                    assert( !(tmp_raise_type_1 == NULL) );
                    exception_type = tmp_raise_type_1;
                    exception_lineno = 124;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_getattr_attr_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 125;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_getattr_target_1 = tmp_mvar_value_4;
            CHECK_OBJECT( var_cap );
            tmp_getattr_attr_1 = var_cap;
            tmp_assign_source_6 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_cap;
                assert( old != NULL );
                var_cap = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT( var_cap );
            tmp_compexpr_left_3 = var_cap;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_CAPS );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ALL_CAPS );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ALL_CAPS" );
                exception_tb = NULL;

                exception_lineno = 126;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }

            tmp_compexpr_right_3 = tmp_mvar_value_5;
            tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 126;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_str_arg_1;
                tmp_left_name_4 = const_str_digest_600562763863fc9c35068200d681479d;
                CHECK_OBJECT( var_cap );
                tmp_str_arg_1 = var_cap;
                tmp_right_name_4 = PyObject_Str( tmp_str_arg_1 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_make_exception_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 127;
                    type_description_1 = "ooo";
                    goto try_except_handler_2;
                }
                frame_353e306ed2ffa8a93af2aefdfe4f1611->m_frame.f_lineno = 127;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_2 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 127;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            branch_no_4:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_ret );
        tmp_called_instance_3 = var_ret;
        CHECK_OBJECT( var_cap );
        tmp_args_element_name_1 = var_cap;
        frame_353e306ed2ffa8a93af2aefdfe4f1611->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_append, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 128;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_353e306ed2ffa8a93af2aefdfe4f1611 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_353e306ed2ffa8a93af2aefdfe4f1611 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_353e306ed2ffa8a93af2aefdfe4f1611, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_353e306ed2ffa8a93af2aefdfe4f1611->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_353e306ed2ffa8a93af2aefdfe4f1611, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_353e306ed2ffa8a93af2aefdfe4f1611,
        type_description_1,
        par_caps,
        var_cap,
        var_ret
    );


    // Release cached frame.
    if ( frame_353e306ed2ffa8a93af2aefdfe4f1611 == cache_frame_353e306ed2ffa8a93af2aefdfe4f1611 )
    {
        Py_DECREF( frame_353e306ed2ffa8a93af2aefdfe4f1611 );
    }
    cache_frame_353e306ed2ffa8a93af2aefdfe4f1611 = NULL;

    assertFrameObject( frame_353e306ed2ffa8a93af2aefdfe4f1611 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT( var_ret );
    tmp_return_value = var_ret;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_12__parse_caps_simple );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_cap );
    var_cap = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

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

    Py_XDECREF( var_cap );
    var_cap = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

    CHECK_OBJECT( (PyObject *)par_caps );
    Py_DECREF( par_caps );
    par_caps = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_12__parse_caps_simple );
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


static PyObject *impl_prctl$$$function_13__parse_caps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_has_value = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *var_pf = NULL;
    PyObject *var_if_ = NULL;
    PyObject *var_cap = NULL;
    PyObject *var_ef = NULL;
    PyObject *var_pt = NULL;
    PyObject *var_i = NULL;
    PyObject *var_it = NULL;
    PyObject *var_value = NULL;
    PyObject *var_caps = NULL;
    PyObject *var_p = NULL;
    PyObject *var_flag = NULL;
    PyObject *var_flags = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_et = NULL;
    PyObject *var_new_args = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c13cc18f732aa33e97f55223050f93d8;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c13cc18f732aa33e97f55223050f93d8 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c13cc18f732aa33e97f55223050f93d8, codeobj_c13cc18f732aa33e97f55223050f93d8, module_prctl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c13cc18f732aa33e97f55223050f93d8 = cache_frame_c13cc18f732aa33e97f55223050f93d8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c13cc18f732aa33e97f55223050f93d8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c13cc18f732aa33e97f55223050f93d8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_has_value );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_has_value );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooooooooooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_6;
            tmp_dict_value_1 = PyList_New( 0 );
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_dict_value_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CAP_PERMITTED );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dict_value_1 );

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_dict_key_1, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = Py_True;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_dict_key_1, 1, tmp_tuple_element_1 );
            tmp_assign_source_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            Py_DECREF( tmp_dict_key_1 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_2 = PyList_New( 0 );
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 134;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CAP_INHERITABLE );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_2 );

                exception_lineno = 134;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_dict_key_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_True;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dict_key_2, 1, tmp_tuple_element_2 );
            tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            Py_DECREF( tmp_dict_key_2 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_3 = PyList_New( 0 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_3 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 135;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CAP_EFFECTIVE );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_3 );

                exception_lineno = 135;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_dict_key_3, 0, tmp_tuple_element_3 );
            tmp_tuple_element_3 = Py_True;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_dict_key_3, 1, tmp_tuple_element_3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3 );
            Py_DECREF( tmp_dict_value_3 );
            Py_DECREF( tmp_dict_key_3 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_4 = PyList_New( 0 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 136;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_4;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CAP_PERMITTED );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_4 );

                exception_lineno = 136;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_4 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_dict_key_4, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_False;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_dict_key_4, 1, tmp_tuple_element_4 );
            tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4 );
            Py_DECREF( tmp_dict_value_4 );
            Py_DECREF( tmp_dict_key_4 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_5 = PyList_New( 0 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_5 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 137;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_5;
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CAP_INHERITABLE );
            if ( tmp_tuple_element_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_5 );

                exception_lineno = 137;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_5 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_dict_key_5, 0, tmp_tuple_element_5 );
            tmp_tuple_element_5 = Py_False;
            Py_INCREF( tmp_tuple_element_5 );
            PyTuple_SET_ITEM( tmp_dict_key_5, 1, tmp_tuple_element_5 );
            tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5 );
            Py_DECREF( tmp_dict_value_5 );
            Py_DECREF( tmp_dict_key_5 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_6 = PyList_New( 0 );
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 138;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_6 = tmp_mvar_value_6;
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CAP_EFFECTIVE );
            if ( tmp_tuple_element_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );
                Py_DECREF( tmp_dict_value_6 );

                exception_lineno = 138;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_6 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_dict_key_6, 0, tmp_tuple_element_6 );
            tmp_tuple_element_6 = Py_False;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_dict_key_6, 1, tmp_tuple_element_6 );
            tmp_res = PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6 );
            Py_DECREF( tmp_dict_value_6 );
            Py_DECREF( tmp_dict_key_6 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_1 );

                exception_lineno = 133;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_new_args == NULL );
            var_new_args = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_9;
            tmp_dict_value_7 = PyList_New( 0 );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_dict_value_7 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_7;
            tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CAP_PERMITTED );
            if ( tmp_dict_key_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_dict_value_7 );

                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_7, tmp_dict_value_7 );
            Py_DECREF( tmp_dict_value_7 );
            Py_DECREF( tmp_dict_key_7 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_8 = PyList_New( 0 );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_assign_source_2 );
                Py_DECREF( tmp_dict_value_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 141;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_8;
            tmp_dict_key_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_CAP_INHERITABLE );
            if ( tmp_dict_key_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );
                Py_DECREF( tmp_dict_value_8 );

                exception_lineno = 141;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_8, tmp_dict_value_8 );
            Py_DECREF( tmp_dict_value_8 );
            Py_DECREF( tmp_dict_key_8 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_9 = PyList_New( 0 );
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_assign_source_2 );
                Py_DECREF( tmp_dict_value_9 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 142;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_9;
            tmp_dict_key_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_CAP_EFFECTIVE );
            if ( tmp_dict_key_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );
                Py_DECREF( tmp_dict_value_9 );

                exception_lineno = 142;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem( tmp_assign_source_2, tmp_dict_key_9, tmp_dict_value_9 );
            Py_DECREF( tmp_dict_value_9 );
            Py_DECREF( tmp_dict_key_9 );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_2 );

                exception_lineno = 140;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_new_args == NULL );
            var_new_args = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( par_args );
        tmp_iter_arg_1 = par_args;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 143;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_5;
            Py_INCREF( var_arg );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_has_value );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_has_value );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_arg );
            tmp_iter_arg_2 = var_arg;
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 145;
                type_description_1 = "oooooooooooooooooo";
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


                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 145;
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


                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 145;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_2;
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 145;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_tuple_unpack_1__element_3;
                tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
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

                        type_description_1 = "oooooooooooooooooo";
                        exception_lineno = 145;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 145;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

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
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
            {
                PyObject *old = var_caps;
                var_caps = tmp_assign_source_10;
                Py_INCREF( var_caps );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
            {
                PyObject *old = var_flags;
                var_flags = tmp_assign_source_11;
                Py_INCREF( var_flags );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_3 );
            tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
            {
                PyObject *old = var_value;
                var_value = tmp_assign_source_12;
                Py_INCREF( var_value );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_1__element_3 );
        tmp_tuple_unpack_1__element_3 = NULL;

        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( var_arg );
            tmp_iter_arg_3 = var_arg;
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_4, 0 );
            if ( tmp_assign_source_14 == NULL )
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


                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 147;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_5, 1 );
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


                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 147;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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

                        type_description_1 = "oooooooooooooooooo";
                        exception_lineno = 147;
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

                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 147;
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_caps;
                var_caps = tmp_assign_source_16;
                Py_INCREF( var_caps );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_flags;
                var_flags = tmp_assign_source_17;
                Py_INCREF( var_flags );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_source_name_10;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_11;
        PyObject *tmp_attribute_name_2;
        CHECK_OBJECT( var_caps );
        tmp_source_name_10 = var_caps;
        tmp_attribute_name_1 = const_str_plain___iter__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_10, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
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
        CHECK_OBJECT( var_caps );
        tmp_source_name_11 = var_caps;
        tmp_attribute_name_2 = const_str_plain___getitem__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_11, tmp_attribute_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_assign_source_18;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT( var_caps );
            tmp_list_element_1 = var_caps;
            tmp_assign_source_18 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_18, 0, tmp_list_element_1 );
            {
                PyObject *old = var_caps;
                assert( old != NULL );
                var_caps = tmp_assign_source_18;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_caps_simple );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_caps_simple" );
            exception_tb = NULL;

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_10;
        if ( var_caps == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "caps" );
            exception_tb = NULL;

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_name_1 = var_caps;
        frame_c13cc18f732aa33e97f55223050f93d8->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_caps;
            var_caps = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_source_name_12;
        PyObject *tmp_attribute_name_3;
        PyObject *tmp_source_name_13;
        PyObject *tmp_attribute_name_4;
        CHECK_OBJECT( var_flags );
        tmp_source_name_12 = var_flags;
        tmp_attribute_name_3 = const_str_plain___iter__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_12, tmp_attribute_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT( var_flags );
        tmp_source_name_13 = var_flags;
        tmp_attribute_name_4 = const_str_plain___getitem__;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_13, tmp_attribute_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_operand_name_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_operand_name_2 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_20;
            PyObject *tmp_list_element_2;
            CHECK_OBJECT( var_flags );
            tmp_list_element_2 = var_flags;
            tmp_assign_source_20 = PyList_New( 1 );
            Py_INCREF( tmp_list_element_2 );
            PyList_SET_ITEM( tmp_assign_source_20, 0, tmp_list_element_2 );
            {
                PyObject *old = var_flags;
                assert( old != NULL );
                var_flags = tmp_assign_source_20;
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT( var_caps );
        tmp_iter_arg_4 = var_caps;
        tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_4 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_22 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 154;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_22;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_23 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_cap;
            var_cap = tmp_assign_source_23;
            Py_INCREF( var_cap );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_5;
        if ( var_flags == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "flags" );
            exception_tb = NULL;

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_iter_arg_5 = var_flags;
        tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_5 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_25 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooooooooooo";
                exception_lineno = 155;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_26 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_flag;
            var_flag = tmp_assign_source_26;
            Py_INCREF( var_flag );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_has_value );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_has_value );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_dict_name_1;
            PyObject *tmp_key_name_1;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_1 = var_new_args;
            CHECK_OBJECT( var_flag );
            tmp_tuple_element_7 = var_flag;
            tmp_key_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_key_name_1, 0, tmp_tuple_element_7 );
            if ( var_value == NULL )
            {
                Py_DECREF( tmp_key_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "value" );
                exception_tb = NULL;

                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_8;
            }

            tmp_tuple_element_7 = var_value;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_key_name_1, 1, tmp_tuple_element_7 );
            tmp_called_instance_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
            Py_DECREF( tmp_key_name_1 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_cap );
            tmp_args_element_name_2 = var_cap;
            frame_c13cc18f732aa33e97f55223050f93d8->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_dict_name_2;
            PyObject *tmp_key_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_2 = var_new_args;
            CHECK_OBJECT( var_flag );
            tmp_key_name_2 = var_flag;
            tmp_called_instance_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_8;
            }
            CHECK_OBJECT( var_cap );
            tmp_args_element_name_3 = var_cap;
            frame_c13cc18f732aa33e97f55223050f93d8->m_frame.f_lineno = 159;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "oooooooooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_end_5:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        CHECK_OBJECT( par_has_value );
        tmp_truth_name_4 = CHECK_IF_TRUE( par_has_value );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_27;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_set_arg_1;
            PyObject *tmp_dict_name_3;
            PyObject *tmp_key_name_3;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_11;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_3 = var_new_args;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_11;
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_CAP_EFFECTIVE );
            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_key_name_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_key_name_3, 0, tmp_tuple_element_8 );
            tmp_tuple_element_8 = Py_True;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_key_name_3, 1, tmp_tuple_element_8 );
            tmp_set_arg_1 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
            Py_DECREF( tmp_key_name_3 );
            if ( tmp_set_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_1 = PySet_New( tmp_set_arg_1 );
            Py_DECREF( tmp_set_arg_1 );
            if ( tmp_list_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_27 = PySequence_List( tmp_list_arg_1 );
            Py_DECREF( tmp_list_arg_1 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_et == NULL );
            var_et = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_list_arg_2;
            PyObject *tmp_set_arg_2;
            PyObject *tmp_dict_name_4;
            PyObject *tmp_key_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_source_name_15;
            PyObject *tmp_mvar_value_12;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_4 = var_new_args;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_15 = tmp_mvar_value_12;
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_CAP_PERMITTED );
            if ( tmp_tuple_element_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_key_name_4 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_key_name_4, 0, tmp_tuple_element_9 );
            tmp_tuple_element_9 = Py_True;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_key_name_4, 1, tmp_tuple_element_9 );
            tmp_set_arg_2 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
            Py_DECREF( tmp_key_name_4 );
            if ( tmp_set_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_2 = PySet_New( tmp_set_arg_2 );
            Py_DECREF( tmp_set_arg_2 );
            if ( tmp_list_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_28 = PySequence_List( tmp_list_arg_2 );
            Py_DECREF( tmp_list_arg_2 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pt == NULL );
            var_pt = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_list_arg_3;
            PyObject *tmp_set_arg_3;
            PyObject *tmp_dict_name_5;
            PyObject *tmp_key_name_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_13;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_5 = var_new_args;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_13 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_13;
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_CAP_INHERITABLE );
            if ( tmp_tuple_element_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_key_name_5 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_key_name_5, 0, tmp_tuple_element_10 );
            tmp_tuple_element_10 = Py_True;
            Py_INCREF( tmp_tuple_element_10 );
            PyTuple_SET_ITEM( tmp_key_name_5, 1, tmp_tuple_element_10 );
            tmp_set_arg_3 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
            Py_DECREF( tmp_key_name_5 );
            if ( tmp_set_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_3 = PySet_New( tmp_set_arg_3 );
            Py_DECREF( tmp_set_arg_3 );
            if ( tmp_list_arg_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_29 = PySequence_List( tmp_list_arg_3 );
            Py_DECREF( tmp_list_arg_3 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_it == NULL );
            var_it = tmp_assign_source_29;
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_list_arg_4;
            PyObject *tmp_set_arg_4;
            PyObject *tmp_dict_name_6;
            PyObject *tmp_key_name_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_14;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_6 = var_new_args;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 164;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_14;
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_CAP_EFFECTIVE );
            if ( tmp_tuple_element_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_key_name_6 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_key_name_6, 0, tmp_tuple_element_11 );
            tmp_tuple_element_11 = Py_False;
            Py_INCREF( tmp_tuple_element_11 );
            PyTuple_SET_ITEM( tmp_key_name_6, 1, tmp_tuple_element_11 );
            tmp_set_arg_4 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
            Py_DECREF( tmp_key_name_6 );
            if ( tmp_set_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_4 = PySet_New( tmp_set_arg_4 );
            Py_DECREF( tmp_set_arg_4 );
            if ( tmp_list_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_30 = PySequence_List( tmp_list_arg_4 );
            Py_DECREF( tmp_list_arg_4 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ef == NULL );
            var_ef = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_list_arg_5;
            PyObject *tmp_set_arg_5;
            PyObject *tmp_dict_name_7;
            PyObject *tmp_key_name_7;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_15;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_7 = var_new_args;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 165;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_15;
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_CAP_PERMITTED );
            if ( tmp_tuple_element_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_key_name_7 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_key_name_7, 0, tmp_tuple_element_12 );
            tmp_tuple_element_12 = Py_False;
            Py_INCREF( tmp_tuple_element_12 );
            PyTuple_SET_ITEM( tmp_key_name_7, 1, tmp_tuple_element_12 );
            tmp_set_arg_5 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
            Py_DECREF( tmp_key_name_7 );
            if ( tmp_set_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_5 = PySet_New( tmp_set_arg_5 );
            Py_DECREF( tmp_set_arg_5 );
            if ( tmp_list_arg_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_31 = PySequence_List( tmp_list_arg_5 );
            Py_DECREF( tmp_list_arg_5 );
            if ( tmp_assign_source_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pf == NULL );
            var_pf = tmp_assign_source_31;
        }
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_list_arg_6;
            PyObject *tmp_set_arg_6;
            PyObject *tmp_dict_name_8;
            PyObject *tmp_key_name_8;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_source_name_19;
            PyObject *tmp_mvar_value_16;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_8 = var_new_args;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 166;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_19 = tmp_mvar_value_16;
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_CAP_INHERITABLE );
            if ( tmp_tuple_element_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_key_name_8 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_key_name_8, 0, tmp_tuple_element_13 );
            tmp_tuple_element_13 = Py_False;
            Py_INCREF( tmp_tuple_element_13 );
            PyTuple_SET_ITEM( tmp_key_name_8, 1, tmp_tuple_element_13 );
            tmp_set_arg_6 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
            Py_DECREF( tmp_key_name_8 );
            if ( tmp_set_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_6 = PySet_New( tmp_set_arg_6 );
            Py_DECREF( tmp_set_arg_6 );
            if ( tmp_list_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_32 = PySequence_List( tmp_list_arg_6 );
            Py_DECREF( tmp_list_arg_6 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_if_ == NULL );
            var_if_ = tmp_assign_source_32;
        }
        {
            PyObject *tmp_tuple_element_14;
            CHECK_OBJECT( var_et );
            tmp_tuple_element_14 = var_et;
            tmp_return_value = PyTuple_New( 6 );
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_14 );
            CHECK_OBJECT( var_pt );
            tmp_tuple_element_14 = var_pt;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_14 );
            CHECK_OBJECT( var_it );
            tmp_tuple_element_14 = var_it;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_14 );
            CHECK_OBJECT( var_ef );
            tmp_tuple_element_14 = var_ef;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_14 );
            CHECK_OBJECT( var_pf );
            tmp_tuple_element_14 = var_pf;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_14 );
            CHECK_OBJECT( var_if_ );
            tmp_tuple_element_14 = var_if_;
            Py_INCREF( tmp_tuple_element_14 );
            PyTuple_SET_ITEM( tmp_return_value, 5, tmp_tuple_element_14 );
            goto frame_return_exit_1;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_list_arg_7;
            PyObject *tmp_set_arg_7;
            PyObject *tmp_dict_name_9;
            PyObject *tmp_key_name_9;
            PyObject *tmp_source_name_20;
            PyObject *tmp_mvar_value_17;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_9 = var_new_args;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 169;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_20 = tmp_mvar_value_17;
            tmp_key_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_CAP_EFFECTIVE );
            if ( tmp_key_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_set_arg_7 = DICT_GET_ITEM( tmp_dict_name_9, tmp_key_name_9 );
            Py_DECREF( tmp_key_name_9 );
            if ( tmp_set_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_7 = PySet_New( tmp_set_arg_7 );
            Py_DECREF( tmp_set_arg_7 );
            if ( tmp_list_arg_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_33 = PySequence_List( tmp_list_arg_7 );
            Py_DECREF( tmp_list_arg_7 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_e == NULL );
            var_e = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_list_arg_8;
            PyObject *tmp_set_arg_8;
            PyObject *tmp_dict_name_10;
            PyObject *tmp_key_name_10;
            PyObject *tmp_source_name_21;
            PyObject *tmp_mvar_value_18;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_10 = var_new_args;
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_18 == NULL ))
            {
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_18 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 170;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_21 = tmp_mvar_value_18;
            tmp_key_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_CAP_PERMITTED );
            if ( tmp_key_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_set_arg_8 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
            Py_DECREF( tmp_key_name_10 );
            if ( tmp_set_arg_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_8 = PySet_New( tmp_set_arg_8 );
            Py_DECREF( tmp_set_arg_8 );
            if ( tmp_list_arg_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_34 = PySequence_List( tmp_list_arg_8 );
            Py_DECREF( tmp_list_arg_8 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 170;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_p == NULL );
            var_p = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_list_arg_9;
            PyObject *tmp_set_arg_9;
            PyObject *tmp_dict_name_11;
            PyObject *tmp_key_name_11;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_19;
            CHECK_OBJECT( var_new_args );
            tmp_dict_name_11 = var_new_args;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_22 = tmp_mvar_value_19;
            tmp_key_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_CAP_INHERITABLE );
            if ( tmp_key_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_set_arg_9 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
            Py_DECREF( tmp_key_name_11 );
            if ( tmp_set_arg_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_list_arg_9 = PySet_New( tmp_set_arg_9 );
            Py_DECREF( tmp_set_arg_9 );
            if ( tmp_list_arg_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_35 = PySequence_List( tmp_list_arg_9 );
            Py_DECREF( tmp_list_arg_9 );
            if ( tmp_assign_source_35 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 171;
                type_description_1 = "oooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_i == NULL );
            var_i = tmp_assign_source_35;
        }
        {
            PyObject *tmp_tuple_element_15;
            CHECK_OBJECT( var_e );
            tmp_tuple_element_15 = var_e;
            tmp_return_value = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_15 );
            CHECK_OBJECT( var_p );
            tmp_tuple_element_15 = var_p;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_15 );
            CHECK_OBJECT( var_i );
            tmp_tuple_element_15 = var_i;
            Py_INCREF( tmp_tuple_element_15 );
            PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_15 );
            goto frame_return_exit_1;
        }
        branch_end_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c13cc18f732aa33e97f55223050f93d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c13cc18f732aa33e97f55223050f93d8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c13cc18f732aa33e97f55223050f93d8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c13cc18f732aa33e97f55223050f93d8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c13cc18f732aa33e97f55223050f93d8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c13cc18f732aa33e97f55223050f93d8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c13cc18f732aa33e97f55223050f93d8,
        type_description_1,
        par_has_value,
        par_args,
        var_pf,
        var_if_,
        var_cap,
        var_ef,
        var_pt,
        var_i,
        var_it,
        var_value,
        var_caps,
        var_p,
        var_flag,
        var_flags,
        var_arg,
        var_et,
        var_new_args,
        var_e
    );


    // Release cached frame.
    if ( frame_c13cc18f732aa33e97f55223050f93d8 == cache_frame_c13cc18f732aa33e97f55223050f93d8 )
    {
        Py_DECREF( frame_c13cc18f732aa33e97f55223050f93d8 );
    }
    cache_frame_c13cc18f732aa33e97f55223050f93d8 = NULL;

    assertFrameObject( frame_c13cc18f732aa33e97f55223050f93d8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_13__parse_caps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_pf );
    var_pf = NULL;

    Py_XDECREF( var_if_ );
    var_if_ = NULL;

    Py_XDECREF( var_cap );
    var_cap = NULL;

    Py_XDECREF( var_ef );
    var_ef = NULL;

    Py_XDECREF( var_pt );
    var_pt = NULL;

    CHECK_OBJECT( (PyObject *)par_has_value );
    Py_DECREF( par_has_value );
    par_has_value = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_it );
    var_it = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_caps );
    var_caps = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_et );
    var_et = NULL;

    CHECK_OBJECT( (PyObject *)var_new_args );
    Py_DECREF( var_new_args );
    var_new_args = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_pf );
    var_pf = NULL;

    Py_XDECREF( var_cap );
    var_cap = NULL;

    Py_XDECREF( var_ef );
    var_ef = NULL;

    Py_XDECREF( var_pt );
    var_pt = NULL;

    CHECK_OBJECT( (PyObject *)par_has_value );
    Py_DECREF( par_has_value );
    par_has_value = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_it );
    var_it = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_caps );
    var_caps = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_flag );
    var_flag = NULL;

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_et );
    var_et = NULL;

    Py_XDECREF( var_new_args );
    var_new_args = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_13__parse_caps );
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


static PyObject *impl_prctl$$$function_14_get_caps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_e4bae68165987cc6c9ef9a42c94c3c83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e4bae68165987cc6c9ef9a42c94c3c83 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e4bae68165987cc6c9ef9a42c94c3c83, codeobj_e4bae68165987cc6c9ef9a42c94c3c83, module_prctl, sizeof(void *) );
    frame_e4bae68165987cc6c9ef9a42c94c3c83 = cache_frame_e4bae68165987cc6c9ef9a42c94c3c83;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e4bae68165987cc6c9ef9a42c94c3c83 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e4bae68165987cc6c9ef9a42c94c3c83 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_caps );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_caps );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_caps" );
            exception_tb = NULL;

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_2;
        tmp_dircall_arg2_2 = const_tuple_false_tuple;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg2_2 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
            tmp_dircall_arg2_1 = impl___internal__$$$function_5_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4bae68165987cc6c9ef9a42c94c3c83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4bae68165987cc6c9ef9a42c94c3c83 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4bae68165987cc6c9ef9a42c94c3c83 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e4bae68165987cc6c9ef9a42c94c3c83, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e4bae68165987cc6c9ef9a42c94c3c83->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e4bae68165987cc6c9ef9a42c94c3c83, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e4bae68165987cc6c9ef9a42c94c3c83,
        type_description_1,
        par_args
    );


    // Release cached frame.
    if ( frame_e4bae68165987cc6c9ef9a42c94c3c83 == cache_frame_e4bae68165987cc6c9ef9a42c94c3c83 )
    {
        Py_DECREF( frame_e4bae68165987cc6c9ef9a42c94c3c83 );
    }
    cache_frame_e4bae68165987cc6c9ef9a42c94c3c83 = NULL;

    assertFrameObject( frame_e4bae68165987cc6c9ef9a42c94c3c83 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_14_get_caps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_14_get_caps );
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


static PyObject *impl_prctl$$$function_15_set_caps( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ca310216665f47a1c936bf80369fc6fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ca310216665f47a1c936bf80369fc6fe = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ca310216665f47a1c936bf80369fc6fe, codeobj_ca310216665f47a1c936bf80369fc6fe, module_prctl, sizeof(void *) );
    frame_ca310216665f47a1c936bf80369fc6fe = cache_frame_ca310216665f47a1c936bf80369fc6fe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ca310216665f47a1c936bf80369fc6fe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ca310216665f47a1c936bf80369fc6fe ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_caps );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__parse_caps );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_parse_caps" );
            exception_tb = NULL;

            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_2;
        tmp_dircall_arg2_2 = const_tuple_true_tuple;
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg2_2 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
            tmp_dircall_arg2_1 = impl___internal__$$$function_5_complex_call_helper_pos_star_list( dir_call_args );
        }
        if ( tmp_dircall_arg2_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca310216665f47a1c936bf80369fc6fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca310216665f47a1c936bf80369fc6fe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ca310216665f47a1c936bf80369fc6fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ca310216665f47a1c936bf80369fc6fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ca310216665f47a1c936bf80369fc6fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ca310216665f47a1c936bf80369fc6fe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ca310216665f47a1c936bf80369fc6fe,
        type_description_1,
        par_args
    );


    // Release cached frame.
    if ( frame_ca310216665f47a1c936bf80369fc6fe == cache_frame_ca310216665f47a1c936bf80369fc6fe )
    {
        Py_DECREF( frame_ca310216665f47a1c936bf80369fc6fe );
    }
    cache_frame_ca310216665f47a1c936bf80369fc6fe = NULL;

    assertFrameObject( frame_ca310216665f47a1c936bf80369fc6fe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( prctl$$$function_15_set_caps );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( prctl$$$function_15_set_caps );
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



static PyObject *MAKE_FUNCTION_prctl$$$function_10_limit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_10_limit,
        const_str_plain_limit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c5e4e15b996191ce988334e30eee051,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_11___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8802744bb77442f7fc135e08fa75712e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_12__parse_caps_simple(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_12__parse_caps_simple,
        const_str_plain__parse_caps_simple,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_353e306ed2ffa8a93af2aefdfe4f1611,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_13__parse_caps(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_13__parse_caps,
        const_str_plain__parse_caps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c13cc18f732aa33e97f55223050f93d8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_14_get_caps(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_14_get_caps,
        const_str_plain_get_caps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e4bae68165987cc6c9ef9a42c94c3c83,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_15_set_caps(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_15_set_caps,
        const_str_plain_set_caps,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ca310216665f47a1c936bf80369fc6fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_1_prctl_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_1_prctl_wrapper,
        const_str_plain_prctl_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b8ed98845717ef898bb8ffb2920f8569,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_1_prctl_wrapper$$$function_1_call_prctl( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_1_prctl_wrapper$$$function_1_call_prctl,
        const_str_plain_call_prctl,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c6c33fbaae36b8ecc960e893ad827dc1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_2_capb_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_2_capb_wrapper,
        const_str_plain_capb_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_76d06a31e3dc0321d2a39cbea05a894e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_2_capb_wrapper$$$function_1_getter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_2_capb_wrapper$$$function_1_getter,
        const_str_plain_getter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b1cc08bd54ce0ff093a712aaa888ac0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_2_capb_wrapper$$$function_2_setter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_2_capb_wrapper$$$function_2_setter,
        const_str_plain_setter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c7e8cace4d782e1e764401dfc3741b71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_3_cap_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_3_cap_wrapper,
        const_str_plain_cap_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10ee251875b3ffbf9a30eff5c35db7bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_3_cap_wrapper$$$function_1_getter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_3_cap_wrapper$$$function_1_getter,
        const_str_plain_getter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8c89de92821b113f9aa6487f16c63946,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_3_cap_wrapper$$$function_2_setter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_3_cap_wrapper$$$function_2_setter,
        const_str_plain_setter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cdff3f3d1769a03ccc68630bb3708921,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_4_sec_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_4_sec_wrapper,
        const_str_plain_sec_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6a172f757415021d7af3de7a91b71d99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_4_sec_wrapper$$$function_1_getter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_4_sec_wrapper$$$function_1_getter,
        const_str_plain_getter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6daca1231d8ee2ea036b379db2dae6af,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_4_sec_wrapper$$$function_2_setter(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_4_sec_wrapper$$$function_2_setter,
        const_str_plain_setter,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c4bfc5f7a6cd8c52b1ae735e67839508,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_5___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_736ed6cb5118899136ff91a70ce29ea5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_6_drop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_6_drop,
        const_str_plain_drop,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1141addf0c6acc8934796ec64746d43d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_7_limit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_7_limit,
        const_str_plain_limit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4c08006107a8391f832a7723d0b911aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_de0dfebd21d79f6724e52b7e4206d793,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prctl$$$function_9_drop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prctl$$$function_9_drop,
        const_str_plain_drop,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_91513449975eb9e0e145075b9a88b3e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_prctl,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_prctl =
{
    PyModuleDef_HEAD_INIT,
    "prctl",
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

MOD_INIT_DECL( prctl )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_prctl );
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
    puts("prctl: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("prctl: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("prctl: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initprctl" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_prctl = Py_InitModule4(
        "prctl",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_prctl = PyModule_Create( &mdef_prctl );
#endif

    moduledict_prctl = MODULE_DICT( module_prctl );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_prctl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_prctl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_prctl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_prctl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_prctl );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_prctl, module_prctl );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_Securebits$list_contraction_1__$0 = NULL;
    PyObject *tmp_Securebits$list_contraction_1__contraction_result = NULL;
    PyObject *tmp_Securebits$list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_3__$0 = NULL;
    PyObject *tmp_list_contraction_3__contraction_result = NULL;
    PyObject *tmp_list_contraction_3__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_4__$0 = NULL;
    PyObject *tmp_list_contraction_4__contraction_result = NULL;
    PyObject *tmp_list_contraction_4__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_5__$0 = NULL;
    PyObject *tmp_list_contraction_5__contraction_result = NULL;
    PyObject *tmp_list_contraction_5__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_13473377e15edae5933d2cd365e9b604;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_prctl_54 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_270854e65e751c1b61e5ca33a93e94b4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_270854e65e751c1b61e5ca33a93e94b4_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_prctl_71 = NULL;
    struct Nuitka_FrameObject *frame_9e61268ba9dd262729e6b8465d0b269f_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e61268ba9dd262729e6b8465d0b269f_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_prctl_89 = NULL;
    struct Nuitka_FrameObject *frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    bool tmp_result;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_53638a51c638e7d451e828cfa0216fde;
        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_13473377e15edae5933d2cd365e9b604 = MAKE_MODULE_FRAME( codeobj_13473377e15edae5933d2cd365e9b604, module_prctl );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_13473377e15edae5933d2cd365e9b604 );
    assert( Py_REFCNT( frame_13473377e15edae5933d2cd365e9b604 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain__prctl;
        tmp_globals_name_1 = (PyObject *)moduledict_prctl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 5;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_prctl;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = (PyObject *)&PyString_Type;
            UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_5 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_prctl$$$function_1_prctl_wrapper(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_prctl_wrapper, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_prctl$$$function_2_capb_wrapper(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_capb_wrapper, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_prctl$$$function_3_cap_wrapper(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_cap_wrapper, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_prctl$$$function_4_sec_wrapper(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_sec_wrapper, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_tuple_3a6a1cbd4f5b2b5447175c8ff65e5933_tuple;
        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_FLAG_NAMES, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_dir_arg_1;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 48;

                goto try_except_handler_1;
            }

            tmp_dir_arg_1 = tmp_mvar_value_2;
            tmp_iter_arg_1 = PyObject_Dir( tmp_dir_arg_1 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;

                goto try_except_handler_1;
            }
            tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;

                goto try_except_handler_1;
            }
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_13;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    exception_lineno = 48;
                    goto try_except_handler_1;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_15 = tmp_list_contraction_1__iter_value_0;
            UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x, tmp_assign_source_15 );
        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x );
            }

            CHECK_OBJECT( tmp_mvar_value_3 );
            tmp_called_instance_1 = tmp_mvar_value_3;
            frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 48;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_CAP__tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;

                goto try_except_handler_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 48;

                goto try_except_handler_1;
            }
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "x" );
                exception_tb = NULL;

                exception_lineno = 48;

                goto try_except_handler_1;
            }

            tmp_compexpr_left_2 = tmp_mvar_value_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_FLAG_NAMES );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_FLAG_NAMES );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_ALL_FLAG_NAMES" );
                exception_tb = NULL;

                exception_lineno = 48;

                goto try_except_handler_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_5;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 48;

                goto try_except_handler_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_2 = tmp_and_left_value_1;
            and_end_1:;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_mvar_value_6;
                CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "x" );
                    exception_tb = NULL;

                    exception_lineno = 48;

                    goto try_except_handler_1;
                }

                tmp_append_value_1 = tmp_mvar_value_6;
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 48;

                    goto try_except_handler_1;
                }
            }
            branch_no_2:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto try_except_handler_1;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_assign_source_11 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_assign_source_11 );
        goto try_return_handler_1;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
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
        try_except_handler_1:;
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
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_16;
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_FLAG_NAMES );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_FLAG_NAMES );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_ALL_FLAG_NAMES" );
                exception_tb = NULL;

                exception_lineno = 49;

                goto try_except_handler_2;
            }

            tmp_iter_arg_2 = tmp_mvar_value_7;
            tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;

                goto try_except_handler_2;
            }
            assert( tmp_list_contraction_2__$0 == NULL );
            tmp_list_contraction_2__$0 = tmp_assign_source_17;
        }
        {
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = PyList_New( 0 );
            assert( tmp_list_contraction_2__contraction_result == NULL );
            tmp_list_contraction_2__contraction_result = tmp_assign_source_18;
        }
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT( tmp_list_contraction_2__$0 );
            tmp_next_source_2 = tmp_list_contraction_2__$0;
            tmp_assign_source_19 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    exception_lineno = 49;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_list_contraction_2__iter_value_0;
                tmp_list_contraction_2__iter_value_0 = tmp_assign_source_19;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( tmp_list_contraction_2__iter_value_0 );
            tmp_assign_source_20 = tmp_list_contraction_2__iter_value_0;
            UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x, tmp_assign_source_20 );
        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_2;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_mvar_value_8;
            CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
            tmp_append_list_2 = tmp_list_contraction_2__contraction_result;
            tmp_sliceslicedel_index_lower_1 = 4;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x );
            }

            CHECK_OBJECT( tmp_mvar_value_8 );
            tmp_slice_source_1 = tmp_mvar_value_8;
            tmp_called_instance_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;

                goto try_except_handler_2;
            }
            frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 49;
            tmp_append_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_append_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;

                goto try_except_handler_2;
            }
            assert( PyList_Check( tmp_append_list_2 ) );
            tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
            Py_DECREF( tmp_append_value_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;

                goto try_except_handler_2;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto try_except_handler_2;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT( tmp_list_contraction_2__contraction_result );
        tmp_assign_source_16 = tmp_list_contraction_2__contraction_result;
        Py_INCREF( tmp_assign_source_16 );
        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
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
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
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
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_FLAG_NAMES, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_21;
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_ALL_CAP_NAMES" );
                exception_tb = NULL;

                exception_lineno = 50;

                goto try_except_handler_3;
            }

            tmp_iter_arg_3 = tmp_mvar_value_9;
            tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_22 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_3;
            }
            assert( tmp_list_contraction_3__$0 == NULL );
            tmp_list_contraction_3__$0 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = PyList_New( 0 );
            assert( tmp_list_contraction_3__contraction_result == NULL );
            tmp_list_contraction_3__contraction_result = tmp_assign_source_23;
        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT( tmp_list_contraction_3__$0 );
            tmp_next_source_3 = tmp_list_contraction_3__$0;
            tmp_assign_source_24 = ITERATOR_NEXT( tmp_next_source_3 );
            if ( tmp_assign_source_24 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_3;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    exception_lineno = 50;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_list_contraction_3__iter_value_0;
                tmp_list_contraction_3__iter_value_0 = tmp_assign_source_24;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_list_contraction_3__iter_value_0 );
            tmp_assign_source_25 = tmp_list_contraction_3__iter_value_0;
            UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x, tmp_assign_source_25 );
        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_called_instance_3;
            Py_ssize_t tmp_sliceslicedel_index_lower_2;
            Py_ssize_t tmp_slice_index_upper_2;
            PyObject *tmp_slice_source_2;
            PyObject *tmp_mvar_value_10;
            CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
            tmp_append_list_3 = tmp_list_contraction_3__contraction_result;
            tmp_sliceslicedel_index_lower_2 = 4;
            tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x );
            }

            CHECK_OBJECT( tmp_mvar_value_10 );
            tmp_slice_source_2 = tmp_mvar_value_10;
            tmp_called_instance_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_3;
            }
            frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 50;
            tmp_append_value_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_lower );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_append_value_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_3;
            }
            assert( PyList_Check( tmp_append_list_3 ) );
            tmp_res = PyList_Append( tmp_append_list_3, tmp_append_value_3 );
            Py_DECREF( tmp_append_value_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto try_except_handler_3;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto try_except_handler_3;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT( tmp_list_contraction_3__contraction_result );
        tmp_assign_source_21 = tmp_list_contraction_3__contraction_result;
        Py_INCREF( tmp_assign_source_21 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
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
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_CAP_NAMES, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_arg_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_mvar_value_11;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_CAP_NAMES );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_ALL_CAP_NAMES" );
                exception_tb = NULL;

                exception_lineno = 51;

                goto try_except_handler_4;
            }

            tmp_iter_arg_4 = tmp_mvar_value_11;
            tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_4 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_4;
            }
            assert( tmp_list_contraction_4__$0 == NULL );
            tmp_list_contraction_4__$0 = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = PyList_New( 0 );
            assert( tmp_list_contraction_4__contraction_result == NULL );
            tmp_list_contraction_4__contraction_result = tmp_assign_source_28;
        }
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT( tmp_list_contraction_4__$0 );
            tmp_next_source_4 = tmp_list_contraction_4__$0;
            tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_4 );
            if ( tmp_assign_source_29 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_4;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    exception_lineno = 51;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_list_contraction_4__iter_value_0;
                tmp_list_contraction_4__iter_value_0 = tmp_assign_source_29;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT( tmp_list_contraction_4__iter_value_0 );
            tmp_assign_source_30 = tmp_list_contraction_4__iter_value_0;
            UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x, tmp_assign_source_30 );
        }
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_mvar_value_13;
            CHECK_OBJECT( tmp_list_contraction_4__contraction_result );
            tmp_append_list_4 = tmp_list_contraction_4__contraction_result;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 51;

                goto try_except_handler_4;
            }

            tmp_getattr_target_1 = tmp_mvar_value_12;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x );
            }

            CHECK_OBJECT( tmp_mvar_value_13 );
            tmp_getattr_attr_1 = tmp_mvar_value_13;
            tmp_append_value_4 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
            if ( tmp_append_value_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_4;
            }
            assert( PyList_Check( tmp_append_list_4 ) );
            tmp_res = PyList_Append( tmp_append_list_4, tmp_append_value_4 );
            Py_DECREF( tmp_append_value_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;

                goto try_except_handler_4;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_4;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT( tmp_list_contraction_4__contraction_result );
        tmp_tuple_arg_1 = tmp_list_contraction_4__contraction_result;
        Py_INCREF( tmp_tuple_arg_1 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_4__$0 );
        Py_DECREF( tmp_list_contraction_4__$0 );
        tmp_list_contraction_4__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_4__contraction_result );
        Py_DECREF( tmp_list_contraction_4__contraction_result );
        tmp_list_contraction_4__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_4__iter_value_0 );
        tmp_list_contraction_4__iter_value_0 = NULL;

        goto outline_result_4;
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

        Py_XDECREF( tmp_list_contraction_4__$0 );
        tmp_list_contraction_4__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_4__contraction_result );
        tmp_list_contraction_4__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_4__iter_value_0 );
        tmp_list_contraction_4__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        tmp_assign_source_26 = PySequence_Tuple( tmp_tuple_arg_1 );
        Py_DECREF( tmp_tuple_arg_1 );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_CAPS, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_arg_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__ALL_FLAG_NAMES );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ALL_FLAG_NAMES );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_ALL_FLAG_NAMES" );
                exception_tb = NULL;

                exception_lineno = 52;

                goto try_except_handler_5;
            }

            tmp_iter_arg_5 = tmp_mvar_value_14;
            tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_5 );
            if ( tmp_assign_source_32 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_5;
            }
            assert( tmp_list_contraction_5__$0 == NULL );
            tmp_list_contraction_5__$0 = tmp_assign_source_32;
        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = PyList_New( 0 );
            assert( tmp_list_contraction_5__contraction_result == NULL );
            tmp_list_contraction_5__contraction_result = tmp_assign_source_33;
        }
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT( tmp_list_contraction_5__$0 );
            tmp_next_source_5 = tmp_list_contraction_5__$0;
            tmp_assign_source_34 = ITERATOR_NEXT( tmp_next_source_5 );
            if ( tmp_assign_source_34 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_5;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    exception_lineno = 52;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_list_contraction_5__iter_value_0;
                tmp_list_contraction_5__iter_value_0 = tmp_assign_source_34;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT( tmp_list_contraction_5__iter_value_0 );
            tmp_assign_source_35 = tmp_list_contraction_5__iter_value_0;
            UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x, tmp_assign_source_35 );
        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_mvar_value_15;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_mvar_value_16;
            CHECK_OBJECT( tmp_list_contraction_5__contraction_result );
            tmp_append_list_5 = tmp_list_contraction_5__contraction_result;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 52;

                goto try_except_handler_5;
            }

            tmp_getattr_target_2 = tmp_mvar_value_15;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_x );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x );
            }

            CHECK_OBJECT( tmp_mvar_value_16 );
            tmp_getattr_attr_2 = tmp_mvar_value_16;
            tmp_append_value_5 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
            if ( tmp_append_value_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_5;
            }
            assert( PyList_Check( tmp_append_list_5 ) );
            tmp_res = PyList_Append( tmp_append_list_5, tmp_append_value_5 );
            Py_DECREF( tmp_append_value_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;

                goto try_except_handler_5;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto try_except_handler_5;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT( tmp_list_contraction_5__contraction_result );
        tmp_tuple_arg_2 = tmp_list_contraction_5__contraction_result;
        Py_INCREF( tmp_tuple_arg_2 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_5__$0 );
        Py_DECREF( tmp_list_contraction_5__$0 );
        tmp_list_contraction_5__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_5__contraction_result );
        Py_DECREF( tmp_list_contraction_5__contraction_result );
        tmp_list_contraction_5__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_5__iter_value_0 );
        tmp_list_contraction_5__iter_value_0 = NULL;

        goto outline_result_5;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_list_contraction_5__$0 );
        tmp_list_contraction_5__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_5__contraction_result );
        tmp_list_contraction_5__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_5__iter_value_0 );
        tmp_list_contraction_5__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
        tmp_assign_source_31 = PySequence_Tuple( tmp_tuple_arg_2 );
        Py_DECREF( tmp_tuple_arg_2 );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_FLAGS, tmp_assign_source_31 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_prctl_54 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_plain_prctl;
        tmp_res = PyDict_SetItem( locals_prctl_54, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_270854e65e751c1b61e5ca33a93e94b4_2, codeobj_270854e65e751c1b61e5ca33a93e94b4, module_prctl, 0 );
        frame_270854e65e751c1b61e5ca33a93e94b4_2 = cache_frame_270854e65e751c1b61e5ca33a93e94b4_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_270854e65e751c1b61e5ca33a93e94b4_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_270854e65e751c1b61e5ca33a93e94b4_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_mvar_value_17;
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_CAP_NAMES );

            if (unlikely( tmp_mvar_value_17 == NULL ))
            {
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ALL_CAP_NAMES );
            }

            if ( tmp_mvar_value_17 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "ALL_CAP_NAMES" );
                exception_tb = NULL;

                exception_lineno = 55;

                goto frame_exception_exit_2;
            }

            tmp_dictset_value = tmp_mvar_value_17;
            tmp_res = PyDict_SetItem( locals_prctl_54, const_str_plain___slots__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_270854e65e751c1b61e5ca33a93e94b4_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_270854e65e751c1b61e5ca33a93e94b4_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_270854e65e751c1b61e5ca33a93e94b4_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_270854e65e751c1b61e5ca33a93e94b4_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_270854e65e751c1b61e5ca33a93e94b4_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_270854e65e751c1b61e5ca33a93e94b4_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_270854e65e751c1b61e5ca33a93e94b4_2 == cache_frame_270854e65e751c1b61e5ca33a93e94b4_2 )
        {
            Py_DECREF( frame_270854e65e751c1b61e5ca33a93e94b4_2 );
        }
        cache_frame_270854e65e751c1b61e5ca33a93e94b4_2 = NULL;

        assertFrameObject( frame_270854e65e751c1b61e5ca33a93e94b4_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_prctl$$$function_5___init__(  );



        tmp_res = PyDict_SetItem( locals_prctl_54, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_prctl$$$function_6_drop(  );



        tmp_res = PyDict_SetItem( locals_prctl_54, const_str_plain_drop, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_prctl$$$function_7_limit(  );



        tmp_res = PyDict_SetItem( locals_prctl_54, const_str_plain_limit, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_36 = locals_prctl_54;
        Py_INCREF( tmp_assign_source_36 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_prctl_54 );
        locals_prctl_54 = NULL;
        goto outline_result_6;
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

        Py_DECREF( locals_prctl_54 );
        locals_prctl_54 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 54;
        goto try_except_handler_6;
        outline_result_6:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 54;

            goto try_except_handler_6;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_37 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_37 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_37 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_Capbset;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;

            goto try_except_handler_6;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_38;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_39 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Capbset, tmp_assign_source_39 );
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
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_18;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Capbset );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Capbset );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Capbset" );
            exception_tb = NULL;

            exception_lineno = 69;

            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_18;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 69;
        tmp_assign_source_40 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_capbset, tmp_assign_source_40 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_prctl_71 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_plain_prctl;
        tmp_res = PyDict_SetItem( locals_prctl_71, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_9e61268ba9dd262729e6b8465d0b269f_3, codeobj_9e61268ba9dd262729e6b8465d0b269f, module_prctl, 0 );
        frame_9e61268ba9dd262729e6b8465d0b269f_3 = cache_frame_9e61268ba9dd262729e6b8465d0b269f_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_9e61268ba9dd262729e6b8465d0b269f_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_9e61268ba9dd262729e6b8465d0b269f_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_mvar_value_19;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_ALL_CAP_NAMES );

            if (unlikely( tmp_mvar_value_19 == NULL ))
            {
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ALL_CAP_NAMES );
            }

            if ( tmp_mvar_value_19 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "ALL_CAP_NAMES" );
                exception_tb = NULL;

                exception_lineno = 72;

                goto frame_exception_exit_3;
            }

            tmp_left_name_1 = tmp_mvar_value_19;
            tmp_right_name_1 = LIST_COPY( const_list_str_plain_flag_list );
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_LIST( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem( locals_prctl_71, const_str_plain___slots__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9e61268ba9dd262729e6b8465d0b269f_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_9e61268ba9dd262729e6b8465d0b269f_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_9e61268ba9dd262729e6b8465d0b269f_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_9e61268ba9dd262729e6b8465d0b269f_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_9e61268ba9dd262729e6b8465d0b269f_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_9e61268ba9dd262729e6b8465d0b269f_3,
            type_description_2
        );


        // Release cached frame.
        if ( frame_9e61268ba9dd262729e6b8465d0b269f_3 == cache_frame_9e61268ba9dd262729e6b8465d0b269f_3 )
        {
            Py_DECREF( frame_9e61268ba9dd262729e6b8465d0b269f_3 );
        }
        cache_frame_9e61268ba9dd262729e6b8465d0b269f_3 = NULL;

        assertFrameObject( frame_9e61268ba9dd262729e6b8465d0b269f_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        tmp_dictset_value = MAKE_FUNCTION_prctl$$$function_8___init__(  );



        tmp_res = PyDict_SetItem( locals_prctl_71, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_prctl$$$function_9_drop(  );



        tmp_res = PyDict_SetItem( locals_prctl_71, const_str_plain_drop, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_prctl$$$function_10_limit(  );



        tmp_res = PyDict_SetItem( locals_prctl_71, const_str_plain_limit, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_41 = locals_prctl_71;
        Py_INCREF( tmp_assign_source_41 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_prctl_71 );
        locals_prctl_71 = NULL;
        goto outline_result_7;
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

        Py_DECREF( locals_prctl_71 );
        locals_prctl_71 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 71;
        goto try_except_handler_8;
        outline_result_7:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        nuitka_bool tmp_condition_result_4;
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


            exception_lineno = 71;

            goto try_except_handler_8;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_42 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_42 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_42 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_3 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_Capset;
        tmp_args_element_name_5 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_43;
    }
    goto try_end_2;
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

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_44 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Capset, tmp_assign_source_44 );
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
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Capset );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Capset );
        }

        if ( tmp_mvar_value_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Capset" );
            exception_tb = NULL;

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_20;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_21;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_CAP_EFFECTIVE );
        if ( tmp_args_element_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_cap_effective, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_23;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Capset );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Capset );
        }

        if ( tmp_mvar_value_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Capset" );
            exception_tb = NULL;

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_22;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 86;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_23;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CAP_INHERITABLE );
        if ( tmp_args_element_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = { tmp_args_element_name_8 };
            tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_8 );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_cap_inheritable, tmp_assign_source_46 );
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_25;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Capset );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Capset );
        }

        if ( tmp_mvar_value_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Capset" );
            exception_tb = NULL;

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_24;
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_25 == NULL ))
        {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_25;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CAP_PERMITTED );
        if ( tmp_args_element_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_cap_permitted, tmp_assign_source_47 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_prctl_89 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_plain_prctl;
        tmp_res = PyDict_SetItem( locals_prctl_89, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4, codeobj_12ab8df35cef08c60ba0d7dcc0ddf6bc, module_prctl, 0 );
        frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 = cache_frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 ) == 2 ); // Frame stack

        // Framed code:
        // Tried code:
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_dir_arg_2;
            PyObject *tmp_mvar_value_26;
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_26 == NULL ))
            {
                tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_26 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 90;

                goto try_except_handler_12;
            }

            tmp_dir_arg_2 = tmp_mvar_value_26;
            tmp_iter_arg_6 = PyObject_Dir( tmp_dir_arg_2 );
            if ( tmp_iter_arg_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;

                goto try_except_handler_12;
            }
            tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_6 );
            Py_DECREF( tmp_iter_arg_6 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;

                goto try_except_handler_12;
            }
            assert( tmp_Securebits$list_contraction_1__$0 == NULL );
            tmp_Securebits$list_contraction_1__$0 = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = PyList_New( 0 );
            assert( tmp_Securebits$list_contraction_1__contraction_result == NULL );
            tmp_Securebits$list_contraction_1__contraction_result = tmp_assign_source_50;
        }
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT( tmp_Securebits$list_contraction_1__$0 );
            tmp_next_source_6 = tmp_Securebits$list_contraction_1__$0;
            tmp_assign_source_51 = ITERATOR_NEXT( tmp_next_source_6 );
            if ( tmp_assign_source_51 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_6;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    exception_lineno = 90;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_Securebits$list_contraction_1__iter_value_0;
                tmp_Securebits$list_contraction_1__iter_value_0 = tmp_assign_source_51;
                Py_XDECREF( old );
            }

        }
        CHECK_OBJECT( tmp_Securebits$list_contraction_1__iter_value_0 );
        tmp_dictset_value = tmp_Securebits$list_contraction_1__iter_value_0;
        tmp_res = PyDict_SetItem( locals_prctl_89, const_str_plain_name, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_2;
            int tmp_truth_name_2;
            tmp_called_instance_4 = PyDict_GetItem( locals_prctl_89, const_str_plain_name );

            if ( tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                exception_tb = NULL;

                exception_lineno = 90;

                goto try_except_handler_12;
            }

            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;

                goto try_except_handler_12;
            }
            frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4->m_frame.f_lineno = 90;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_SECBIT__tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 90;

                goto try_except_handler_12;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_2 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_2 );

                exception_lineno = 90;

                goto try_except_handler_12;
            }
            tmp_condition_result_5 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_2 );
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_append_list_6;
                PyObject *tmp_append_value_6;
                PyObject *tmp_called_instance_5;
                Py_ssize_t tmp_sliceslicedel_index_lower_3;
                Py_ssize_t tmp_slice_index_upper_3;
                PyObject *tmp_slice_source_3;
                CHECK_OBJECT( tmp_Securebits$list_contraction_1__contraction_result );
                tmp_append_list_6 = tmp_Securebits$list_contraction_1__contraction_result;
                tmp_sliceslicedel_index_lower_3 = 7;
                tmp_slice_index_upper_3 = PY_SSIZE_T_MAX;
                tmp_slice_source_3 = PyDict_GetItem( locals_prctl_89, const_str_plain_name );

                if ( tmp_slice_source_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                    exception_tb = NULL;

                    exception_lineno = 90;

                    goto try_except_handler_12;
                }

                if ( tmp_slice_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;

                    goto try_except_handler_12;
                }
                tmp_called_instance_5 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
                if ( tmp_called_instance_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;

                    goto try_except_handler_12;
                }
                frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4->m_frame.f_lineno = 90;
                tmp_append_value_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_lower );
                Py_DECREF( tmp_called_instance_5 );
                if ( tmp_append_value_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;

                    goto try_except_handler_12;
                }
                assert( PyList_Check( tmp_append_list_6 ) );
                tmp_res = PyList_Append( tmp_append_list_6, tmp_append_value_6 );
                Py_DECREF( tmp_append_value_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 90;

                    goto try_except_handler_12;
                }
            }
            branch_no_3:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;

            goto try_except_handler_12;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT( tmp_Securebits$list_contraction_1__contraction_result );
        tmp_dictset_value = tmp_Securebits$list_contraction_1__contraction_result;
        Py_INCREF( tmp_dictset_value );
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT( (PyObject *)tmp_Securebits$list_contraction_1__$0 );
        Py_DECREF( tmp_Securebits$list_contraction_1__$0 );
        tmp_Securebits$list_contraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_Securebits$list_contraction_1__contraction_result );
        Py_DECREF( tmp_Securebits$list_contraction_1__contraction_result );
        tmp_Securebits$list_contraction_1__contraction_result = NULL;

        Py_XDECREF( tmp_Securebits$list_contraction_1__iter_value_0 );
        tmp_Securebits$list_contraction_1__iter_value_0 = NULL;

        goto outline_result_9;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_Securebits$list_contraction_1__$0 );
        tmp_Securebits$list_contraction_1__$0 = NULL;

        Py_XDECREF( tmp_Securebits$list_contraction_1__contraction_result );
        tmp_Securebits$list_contraction_1__contraction_result = NULL;

        Py_XDECREF( tmp_Securebits$list_contraction_1__iter_value_0 );
        tmp_Securebits$list_contraction_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_9:;
        tmp_res = PyDict_SetItem( locals_prctl_89, const_str_plain___slots__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;

            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4,
            type_description_2
        );


        // Release cached frame.
        if ( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 == cache_frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 )
        {
            Py_DECREF( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 );
        }
        cache_frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 = NULL;

        assertFrameObject( frame_12ab8df35cef08c60ba0d7dcc0ddf6bc_4 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        tmp_dictset_value = MAKE_FUNCTION_prctl$$$function_11___init__(  );



        tmp_res = PyDict_SetItem( locals_prctl_89, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_48 = locals_prctl_89;
        Py_INCREF( tmp_assign_source_48 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_prctl_89 );
        locals_prctl_89 = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_prctl_89 );
        locals_prctl_89 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( prctl );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_3:;
        exception_lineno = 89;
        goto try_except_handler_10;
        outline_result_8:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_52;
        nuitka_bool tmp_condition_result_6;
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


            exception_lineno = 89;

            goto try_except_handler_10;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_52 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_52 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_52 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_7 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_10 = const_str_plain_Securebits;
        tmp_args_element_name_11 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_3__class_dict;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_53 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 89;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_53;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_54 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Securebits, tmp_assign_source_54 );
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
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_Securebits );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Securebits );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "Securebits" );
            exception_tb = NULL;

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_27;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 97;
        tmp_assign_source_55 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_securebits, tmp_assign_source_55 );
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 100;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_28;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_modules );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_prctl;
        tmp_assign_source_56 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_assign_source_56 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_self, tmp_assign_source_56 );
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_dir_arg_3;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 101;

            goto frame_exception_exit_1;
        }

        tmp_dir_arg_3 = tmp_mvar_value_29;
        tmp_iter_arg_7 = PyObject_Dir( tmp_dir_arg_3 );
        if ( tmp_iter_arg_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = MAKE_ITERATOR( tmp_iter_arg_7 );
        Py_DECREF( tmp_iter_arg_7 );
        if ( tmp_assign_source_57 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_57;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_7 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_58 = ITERATOR_NEXT( tmp_next_source_7 );
        if ( tmp_assign_source_58 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_7;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                exception_lineno = 101;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_58;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_59 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name, tmp_assign_source_59 );
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_4;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_5;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_30 == NULL ))
        {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        CHECK_OBJECT( tmp_mvar_value_30 );
        tmp_called_instance_6 = tmp_mvar_value_30;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 102;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_PR_GET_tuple, 0 ) );

        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_13;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_call_result_3 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_3 );

            exception_lineno = 102;

            goto try_except_handler_13;
        }
        tmp_or_left_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_3 );
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
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        if ( tmp_mvar_value_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
            exception_tb = NULL;

            exception_lineno = 102;

            goto try_except_handler_13;
        }

        tmp_called_instance_7 = tmp_mvar_value_31;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 102;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_PR_SET_tuple, 0 ) );

        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_13;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE( tmp_call_result_4 );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_4 );

            exception_lineno = 102;

            goto try_except_handler_13;
        }
        tmp_or_left_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_4 );
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_2 == 1 )
        {
            goto or_left_2;
        }
        else
        {
            goto or_right_2;
        }
        or_right_2:;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
            exception_tb = NULL;

            exception_lineno = 102;

            goto try_except_handler_13;
        }

        tmp_called_instance_8 = tmp_mvar_value_32;
        frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 102;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_PR_CAPBSET_tuple, 0 ) );

        if ( tmp_call_result_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 102;

            goto try_except_handler_13;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE( tmp_call_result_5 );
        if ( tmp_truth_name_5 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_5 );

            exception_lineno = 102;

            goto try_except_handler_13;
        }
        tmp_or_right_value_2 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_5 );
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_7 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_7 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_getattr_target_3;
            PyObject *tmp_mvar_value_33;
            PyObject *tmp_getattr_attr_3;
            PyObject *tmp_mvar_value_34;
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

            if (unlikely( tmp_mvar_value_33 == NULL ))
            {
                tmp_mvar_value_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
            }

            if ( tmp_mvar_value_33 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
                exception_tb = NULL;

                exception_lineno = 104;

                goto try_except_handler_13;
            }

            tmp_getattr_target_3 = tmp_mvar_value_33;
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

            if (unlikely( tmp_mvar_value_34 == NULL ))
            {
                tmp_mvar_value_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
            }

            if ( tmp_mvar_value_34 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                exception_tb = NULL;

                exception_lineno = 104;

                goto try_except_handler_13;
            }

            tmp_getattr_attr_3 = tmp_mvar_value_34;
            tmp_assign_source_60 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, NULL );
            if ( tmp_assign_source_60 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_13;
            }
            UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_val, tmp_assign_source_60 );
        }
        {
            PyObject *tmp_assign_source_61;
            Py_ssize_t tmp_sliceslicedel_index_lower_4;
            Py_ssize_t tmp_slice_index_upper_4;
            PyObject *tmp_slice_source_4;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_mvar_value_35;
            tmp_sliceslicedel_index_lower_4 = 3;
            tmp_slice_index_upper_4 = PY_SSIZE_T_MAX;
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

            if (unlikely( tmp_mvar_value_35 == NULL ))
            {
                tmp_mvar_value_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
            }

            if ( tmp_mvar_value_35 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                exception_tb = NULL;

                exception_lineno = 105;

                goto try_except_handler_13;
            }

            tmp_called_instance_9 = tmp_mvar_value_35;
            frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 105;
            tmp_slice_source_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_lower );
            if ( tmp_slice_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;

                goto try_except_handler_13;
            }
            tmp_assign_source_61 = LOOKUP_INDEX_SLICE( tmp_slice_source_4, tmp_sliceslicedel_index_lower_4, tmp_slice_index_upper_4 );
            Py_DECREF( tmp_slice_source_4 );
            if ( tmp_assign_source_61 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;

                goto try_except_handler_13;
            }
            UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_friendly_name, tmp_assign_source_61 );
        }
        {
            PyObject *tmp_setattr_target_1;
            PyObject *tmp_mvar_value_36;
            PyObject *tmp_setattr_attr_1;
            PyObject *tmp_mvar_value_37;
            PyObject *tmp_setattr_value_1;
            PyObject *tmp_called_name_9;
            PyObject *tmp_mvar_value_38;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_mvar_value_39;
            PyObject *tmp_capi_result_1;
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_self );

            if (unlikely( tmp_mvar_value_36 == NULL ))
            {
                tmp_mvar_value_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_self );
            }

            if ( tmp_mvar_value_36 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "self" );
                exception_tb = NULL;

                exception_lineno = 106;

                goto try_except_handler_13;
            }

            tmp_setattr_target_1 = tmp_mvar_value_36;
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_friendly_name );

            if (unlikely( tmp_mvar_value_37 == NULL ))
            {
                tmp_mvar_value_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_friendly_name );
            }

            CHECK_OBJECT( tmp_mvar_value_37 );
            tmp_setattr_attr_1 = tmp_mvar_value_37;
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_prctl_wrapper );

            if (unlikely( tmp_mvar_value_38 == NULL ))
            {
                tmp_mvar_value_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prctl_wrapper );
            }

            if ( tmp_mvar_value_38 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "prctl_wrapper" );
                exception_tb = NULL;

                exception_lineno = 106;

                goto try_except_handler_13;
            }

            tmp_called_name_9 = tmp_mvar_value_38;
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_val );

            if (unlikely( tmp_mvar_value_39 == NULL ))
            {
                tmp_mvar_value_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_val );
            }

            if ( tmp_mvar_value_39 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "val" );
                exception_tb = NULL;

                exception_lineno = 106;

                goto try_except_handler_13;
            }

            tmp_args_element_name_13 = tmp_mvar_value_39;
            frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 106;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_setattr_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            if ( tmp_setattr_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;

                goto try_except_handler_13;
            }
            tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
            Py_DECREF( tmp_setattr_value_1 );
            if ( tmp_capi_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 106;

                goto try_except_handler_13;
            }
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_mvar_value_40;
            PyObject *tmp_call_result_6;
            int tmp_truth_name_6;
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

            if (unlikely( tmp_mvar_value_40 == NULL ))
            {
                tmp_mvar_value_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
            }

            if ( tmp_mvar_value_40 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                exception_tb = NULL;

                exception_lineno = 108;

                goto try_except_handler_13;
            }

            tmp_called_instance_10 = tmp_mvar_value_40;
            frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 108;
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_PR__tuple, 0 ) );

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_13;
            }
            tmp_truth_name_6 = CHECK_IF_TRUE( tmp_call_result_6 );
            if ( tmp_truth_name_6 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_6 );

                exception_lineno = 108;

                goto try_except_handler_13;
            }
            tmp_condition_result_8 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_6 );
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_setattr_target_2;
                PyObject *tmp_mvar_value_41;
                PyObject *tmp_setattr_attr_2;
                Py_ssize_t tmp_sliceslicedel_index_lower_5;
                Py_ssize_t tmp_slice_index_upper_5;
                PyObject *tmp_slice_source_5;
                PyObject *tmp_mvar_value_42;
                PyObject *tmp_setattr_value_2;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_mvar_value_43;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_mvar_value_44;
                PyObject *tmp_capi_result_2;
                tmp_mvar_value_41 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_self );

                if (unlikely( tmp_mvar_value_41 == NULL ))
                {
                    tmp_mvar_value_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_self );
                }

                if ( tmp_mvar_value_41 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "self" );
                    exception_tb = NULL;

                    exception_lineno = 110;

                    goto try_except_handler_13;
                }

                tmp_setattr_target_2 = tmp_mvar_value_41;
                tmp_sliceslicedel_index_lower_5 = 3;
                tmp_slice_index_upper_5 = PY_SSIZE_T_MAX;
                tmp_mvar_value_42 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

                if (unlikely( tmp_mvar_value_42 == NULL ))
                {
                    tmp_mvar_value_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
                }

                if ( tmp_mvar_value_42 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                    exception_tb = NULL;

                    exception_lineno = 110;

                    goto try_except_handler_13;
                }

                tmp_slice_source_5 = tmp_mvar_value_42;
                tmp_setattr_attr_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_5, tmp_sliceslicedel_index_lower_5, tmp_slice_index_upper_5 );
                if ( tmp_setattr_attr_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;

                    goto try_except_handler_13;
                }
                tmp_mvar_value_43 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

                if (unlikely( tmp_mvar_value_43 == NULL ))
                {
                    tmp_mvar_value_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
                }

                if ( tmp_mvar_value_43 == NULL )
                {
                    Py_DECREF( tmp_setattr_attr_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
                    exception_tb = NULL;

                    exception_lineno = 110;

                    goto try_except_handler_13;
                }

                tmp_getattr_target_4 = tmp_mvar_value_43;
                tmp_mvar_value_44 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

                if (unlikely( tmp_mvar_value_44 == NULL ))
                {
                    tmp_mvar_value_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
                }

                if ( tmp_mvar_value_44 == NULL )
                {
                    Py_DECREF( tmp_setattr_attr_2 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                    exception_tb = NULL;

                    exception_lineno = 110;

                    goto try_except_handler_13;
                }

                tmp_getattr_attr_4 = tmp_mvar_value_44;
                tmp_setattr_value_2 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, NULL );
                if ( tmp_setattr_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_setattr_attr_2 );

                    exception_lineno = 110;

                    goto try_except_handler_13;
                }
                tmp_capi_result_2 = BUILTIN_SETATTR( tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2 );
                Py_DECREF( tmp_setattr_attr_2 );
                Py_DECREF( tmp_setattr_value_2 );
                if ( tmp_capi_result_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 110;

                    goto try_except_handler_13;
                }
            }
            goto branch_end_5;
            branch_no_5:;
            {
                nuitka_bool tmp_condition_result_9;
                int tmp_or_left_truth_3;
                nuitka_bool tmp_or_left_value_3;
                nuitka_bool tmp_or_right_value_3;
                PyObject *tmp_called_instance_11;
                PyObject *tmp_mvar_value_45;
                PyObject *tmp_call_result_7;
                int tmp_truth_name_7;
                int tmp_or_left_truth_4;
                nuitka_bool tmp_or_left_value_4;
                nuitka_bool tmp_or_right_value_4;
                PyObject *tmp_called_instance_12;
                PyObject *tmp_mvar_value_46;
                PyObject *tmp_call_result_8;
                int tmp_truth_name_8;
                PyObject *tmp_called_instance_13;
                PyObject *tmp_mvar_value_47;
                PyObject *tmp_call_result_9;
                int tmp_truth_name_9;
                tmp_mvar_value_45 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

                if (unlikely( tmp_mvar_value_45 == NULL ))
                {
                    tmp_mvar_value_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
                }

                if ( tmp_mvar_value_45 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                    exception_tb = NULL;

                    exception_lineno = 112;

                    goto try_except_handler_13;
                }

                tmp_called_instance_11 = tmp_mvar_value_45;
                frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 112;
                tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_CAP__tuple, 0 ) );

                if ( tmp_call_result_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;

                    goto try_except_handler_13;
                }
                tmp_truth_name_7 = CHECK_IF_TRUE( tmp_call_result_7 );
                if ( tmp_truth_name_7 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_7 );

                    exception_lineno = 112;

                    goto try_except_handler_13;
                }
                tmp_or_left_value_3 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_7 );
                tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_or_left_truth_3 == 1 )
                {
                    goto or_left_3;
                }
                else
                {
                    goto or_right_3;
                }
                or_right_3:;
                tmp_mvar_value_46 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

                if (unlikely( tmp_mvar_value_46 == NULL ))
                {
                    tmp_mvar_value_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
                }

                if ( tmp_mvar_value_46 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                    exception_tb = NULL;

                    exception_lineno = 112;

                    goto try_except_handler_13;
                }

                tmp_called_instance_12 = tmp_mvar_value_46;
                frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 112;
                tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_SECBIT__tuple, 0 ) );

                if ( tmp_call_result_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;

                    goto try_except_handler_13;
                }
                tmp_truth_name_8 = CHECK_IF_TRUE( tmp_call_result_8 );
                if ( tmp_truth_name_8 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_8 );

                    exception_lineno = 112;

                    goto try_except_handler_13;
                }
                tmp_or_left_value_4 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_8 );
                tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
                if ( tmp_or_left_truth_4 == 1 )
                {
                    goto or_left_4;
                }
                else
                {
                    goto or_right_4;
                }
                or_right_4:;
                tmp_mvar_value_47 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

                if (unlikely( tmp_mvar_value_47 == NULL ))
                {
                    tmp_mvar_value_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
                }

                if ( tmp_mvar_value_47 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                    exception_tb = NULL;

                    exception_lineno = 112;

                    goto try_except_handler_13;
                }

                tmp_called_instance_13 = tmp_mvar_value_47;
                frame_13473377e15edae5933d2cd365e9b604->m_frame.f_lineno = 112;
                tmp_call_result_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_SECURE__tuple, 0 ) );

                if ( tmp_call_result_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 112;

                    goto try_except_handler_13;
                }
                tmp_truth_name_9 = CHECK_IF_TRUE( tmp_call_result_9 );
                if ( tmp_truth_name_9 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_call_result_9 );

                    exception_lineno = 112;

                    goto try_except_handler_13;
                }
                tmp_or_right_value_4 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_call_result_9 );
                tmp_or_right_value_3 = tmp_or_right_value_4;
                goto or_end_4;
                or_left_4:;
                tmp_or_right_value_3 = tmp_or_left_value_4;
                or_end_4:;
                tmp_condition_result_9 = tmp_or_right_value_3;
                goto or_end_3;
                or_left_3:;
                tmp_condition_result_9 = tmp_or_left_value_3;
                or_end_3:;
                if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_6;
                }
                else
                {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    PyObject *tmp_setattr_target_3;
                    PyObject *tmp_mvar_value_48;
                    PyObject *tmp_setattr_attr_3;
                    PyObject *tmp_mvar_value_49;
                    PyObject *tmp_setattr_value_3;
                    PyObject *tmp_getattr_target_5;
                    PyObject *tmp_mvar_value_50;
                    PyObject *tmp_getattr_attr_5;
                    PyObject *tmp_mvar_value_51;
                    PyObject *tmp_capi_result_3;
                    tmp_mvar_value_48 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_self );

                    if (unlikely( tmp_mvar_value_48 == NULL ))
                    {
                        tmp_mvar_value_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_self );
                    }

                    if ( tmp_mvar_value_48 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "name '%s' is not defined", "self" );
                        exception_tb = NULL;

                        exception_lineno = 115;

                        goto try_except_handler_13;
                    }

                    tmp_setattr_target_3 = tmp_mvar_value_48;
                    tmp_mvar_value_49 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

                    if (unlikely( tmp_mvar_value_49 == NULL ))
                    {
                        tmp_mvar_value_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
                    }

                    if ( tmp_mvar_value_49 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                        exception_tb = NULL;

                        exception_lineno = 115;

                        goto try_except_handler_13;
                    }

                    tmp_setattr_attr_3 = tmp_mvar_value_49;
                    tmp_mvar_value_50 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

                    if (unlikely( tmp_mvar_value_50 == NULL ))
                    {
                        tmp_mvar_value_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
                    }

                    if ( tmp_mvar_value_50 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
                        exception_tb = NULL;

                        exception_lineno = 115;

                        goto try_except_handler_13;
                    }

                    tmp_getattr_target_5 = tmp_mvar_value_50;
                    tmp_mvar_value_51 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_name );

                    if (unlikely( tmp_mvar_value_51 == NULL ))
                    {
                        tmp_mvar_value_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_name );
                    }

                    if ( tmp_mvar_value_51 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
                        exception_tb = NULL;

                        exception_lineno = 115;

                        goto try_except_handler_13;
                    }

                    tmp_getattr_attr_5 = tmp_mvar_value_51;
                    tmp_setattr_value_3 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, NULL );
                    if ( tmp_setattr_value_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;

                        goto try_except_handler_13;
                    }
                    tmp_capi_result_3 = BUILTIN_SETATTR( tmp_setattr_target_3, tmp_setattr_attr_3, tmp_setattr_value_3 );
                    Py_DECREF( tmp_setattr_value_3 );
                    if ( tmp_capi_result_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 115;

                        goto try_except_handler_13;
                    }
                }
                branch_no_6:;
            }
            branch_end_5:;
        }
        branch_end_4:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_13;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_FUNCTION_prctl$$$function_12__parse_caps_simple(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps_simple, tmp_assign_source_62 );
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_FUNCTION_prctl$$$function_13__parse_caps(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__parse_caps, tmp_assign_source_63 );
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_FUNCTION_prctl$$$function_14_get_caps(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_get_caps, tmp_assign_source_64 );
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_FUNCTION_prctl$$$function_15_set_caps(  );



        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_set_caps, tmp_assign_source_65 );
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_52;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain__prctl );

        if (unlikely( tmp_mvar_value_52 == NULL ))
        {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__prctl );
        }

        if ( tmp_mvar_value_52 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_prctl" );
            exception_tb = NULL;

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_52;
        tmp_assign_source_66 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_set_proctitle );
        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_prctl, (Nuitka_StringObject *)const_str_plain_set_proctitle, tmp_assign_source_66 );
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_self );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "self" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_friendly_name );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "friendly_name" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_name );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "name" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_prctl_wrapper );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "prctl_wrapper" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_cap_wrapper );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "cap_wrapper" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_capb_wrapper );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "capb_wrapper" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_sec_wrapper );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sec_wrapper" );
        exception_tb = NULL;

        exception_lineno = 184;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_Capbset );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Capbset" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_Capset );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Capset" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_Securebits );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "Securebits" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_sys );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_prctl, const_str_plain_val );
    tmp_result = tmp_res != -1;
    if ( tmp_result == false ) CLEAR_ERROR_OCCURRED();

    if ( tmp_result == false )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "val" );
        exception_tb = NULL;

        exception_lineno = 185;

        goto frame_exception_exit_1;
    }


    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13473377e15edae5933d2cd365e9b604 );
#endif
    popFrameStack();

    assertFrameObject( frame_13473377e15edae5933d2cd365e9b604 );

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13473377e15edae5933d2cd365e9b604 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13473377e15edae5933d2cd365e9b604, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13473377e15edae5933d2cd365e9b604->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13473377e15edae5933d2cd365e9b604, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_prctl, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_prctl );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
