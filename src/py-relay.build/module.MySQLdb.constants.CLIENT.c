/* Generated code for Python module 'MySQLdb.constants.CLIENT'
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

/* The "_module_MySQLdb$constants$CLIENT" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_MySQLdb$constants$CLIENT;
PyDictObject *moduledict_MySQLdb$constants$CLIENT;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_CONNECT_WITH_DB;
static PyObject *const_str_plain_CHANGE_USER;
extern PyObject *const_int_pos_128;
static PyObject *const_str_plain_IGNORE_SPACE;
extern PyObject *const_int_pos_256;
extern PyObject *const_int_pos_512;
static PyObject *const_str_plain_SECURE_CONNECTION;
extern PyObject *const_str_plain_TRANSACTIONS;
static PyObject *const_str_digest_0a9472b6d2737d2f6539afe3ae35d16c;
extern PyObject *const_int_pos_32768;
static PyObject *const_str_plain_LONG_FLAG;
static PyObject *const_str_plain_COMPRESS;
extern PyObject *const_str_plain_MULTI_STATEMENTS;
static PyObject *const_str_plain_ODBC;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain_LOCAL_FILES;
static PyObject *const_str_plain_SSL;
static PyObject *const_str_plain_FOUND_ROWS;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_1503222f488775639a4c5655614054a7;
static PyObject *const_int_pos_4096;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_INTERACTIVE;
extern PyObject *const_int_pos_16384;
static PyObject *const_str_plain_IGNORE_SIGPIPE;
extern PyObject *const_int_pos_4;
static PyObject *const_int_pos_131072;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_65536;
static PyObject *const_int_pos_8192;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_NO_SCHEMA;
extern PyObject *const_int_pos_1024;
static PyObject *const_str_digest_cfa9adf3975edca86b95cb6332bf0dac;
static PyObject *const_str_plain_LONG_PASSWORD;
extern PyObject *const_int_pos_2048;
extern PyObject *const_str_plain_MULTI_RESULTS;
extern PyObject *const_int_pos_64;
static PyObject *const_str_plain_RESERVED;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_CONNECT_WITH_DB = UNSTREAM_STRING( &constant_bin[ 31677 ], 15, 1 );
    const_str_plain_CHANGE_USER = UNSTREAM_STRING( &constant_bin[ 31692 ], 11, 1 );
    const_str_plain_IGNORE_SPACE = UNSTREAM_STRING( &constant_bin[ 31703 ], 12, 1 );
    const_str_plain_SECURE_CONNECTION = UNSTREAM_STRING( &constant_bin[ 31715 ], 17, 1 );
    const_str_digest_0a9472b6d2737d2f6539afe3ae35d16c = UNSTREAM_STRING( &constant_bin[ 31732 ], 24, 0 );
    const_str_plain_LONG_FLAG = UNSTREAM_STRING( &constant_bin[ 31756 ], 9, 1 );
    const_str_plain_COMPRESS = UNSTREAM_STRING( &constant_bin[ 31765 ], 8, 1 );
    const_str_plain_ODBC = UNSTREAM_STRING( &constant_bin[ 31773 ], 4, 1 );
    const_str_plain_LOCAL_FILES = UNSTREAM_STRING( &constant_bin[ 31777 ], 11, 1 );
    const_str_plain_SSL = UNSTREAM_STRING( &constant_bin[ 29676 ], 3, 1 );
    const_str_plain_FOUND_ROWS = UNSTREAM_STRING( &constant_bin[ 31788 ], 10, 1 );
    const_str_digest_1503222f488775639a4c5655614054a7 = UNSTREAM_STRING( &constant_bin[ 31798 ], 87, 0 );
    const_int_pos_4096 = PyInt_FromLong( 4096l );
    const_str_plain_INTERACTIVE = UNSTREAM_STRING( &constant_bin[ 31885 ], 11, 1 );
    const_str_plain_IGNORE_SIGPIPE = UNSTREAM_STRING( &constant_bin[ 31896 ], 14, 1 );
    const_int_pos_131072 = PyInt_FromLong( 131072l );
    const_int_pos_8192 = PyInt_FromLong( 8192l );
    const_str_plain_NO_SCHEMA = UNSTREAM_STRING( &constant_bin[ 31910 ], 9, 1 );
    const_str_digest_cfa9adf3975edca86b95cb6332bf0dac = UNSTREAM_STRING( &constant_bin[ 31919 ], 292, 0 );
    const_str_plain_LONG_PASSWORD = UNSTREAM_STRING( &constant_bin[ 32211 ], 13, 1 );
    const_str_plain_RESERVED = UNSTREAM_STRING( &constant_bin[ 32224 ], 8, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_MySQLdb$constants$CLIENT( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_MySQLdb$constants$CLIENT =
{
    PyModuleDef_HEAD_INIT,
    "MySQLdb.constants.CLIENT",
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

MOD_INIT_DECL( MySQLdb$constants$CLIENT )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_MySQLdb$constants$CLIENT );
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
    puts("MySQLdb.constants.CLIENT: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.constants.CLIENT: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.constants.CLIENT: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initMySQLdb$constants$CLIENT" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_MySQLdb$constants$CLIENT = Py_InitModule4(
        "MySQLdb.constants.CLIENT",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_MySQLdb$constants$CLIENT = PyModule_Create( &mdef_MySQLdb$constants$CLIENT );
#endif

    moduledict_MySQLdb$constants$CLIENT = MODULE_DICT( module_MySQLdb$constants$CLIENT );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_MySQLdb$constants$CLIENT,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_MySQLdb$constants$CLIENT,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$constants$CLIENT,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$constants$CLIENT,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_MySQLdb$constants$CLIENT );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_0a9472b6d2737d2f6539afe3ae35d16c, module_MySQLdb$constants$CLIENT );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_cfa9adf3975edca86b95cb6332bf0dac;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1503222f488775639a4c5655614054a7;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_LONG_PASSWORD, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_FOUND_ROWS, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_LONG_FLAG, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_CONNECT_WITH_DB, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_NO_SCHEMA, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_32;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_COMPRESS, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_64;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_ODBC, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_128;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_LOCAL_FILES, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_256;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_IGNORE_SPACE, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_pos_512;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_CHANGE_USER, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_1024;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_INTERACTIVE, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_pos_2048;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_SSL, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_int_pos_4096;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_IGNORE_SIGPIPE, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_pos_8192;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_TRANSACTIONS, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_int_pos_16384;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_RESERVED, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_pos_32768;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_SECURE_CONNECTION, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_int_pos_65536;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_MULTI_STATEMENTS, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_int_pos_131072;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain_MULTI_RESULTS, tmp_assign_source_20 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$CLIENT, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_MySQLdb$constants$CLIENT );
}
