/* Generated code for Python module 'MySQLdb.constants.FLAG'
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

/* The "_module_MySQLdb$constants$FLAG" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_MySQLdb$constants$FLAG;
PyDictObject *moduledict_MySQLdb$constants$FLAG;

/* The declarations of module constants used, if any. */
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_BINARY;
extern PyObject *const_int_pos_256;
extern PyObject *const_str_plain_ENUM;
extern PyObject *const_int_pos_512;
static PyObject *const_str_plain_UNSIGNED;
static PyObject *const_str_plain_UNIQUE_KEY;
extern PyObject *const_int_pos_32768;
static PyObject *const_str_plain_NUM;
extern PyObject *const_str_plain_SET;
extern PyObject *const_int_pos_32;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain_GROUP;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_PRI_KEY;
static PyObject *const_str_digest_dc4ad0fe2fcac48598396f434aa8ae43;
static PyObject *const_str_plain_NOT_NULL;
static PyObject *const_str_digest_a96d154f975ad6057517109824dbf842;
static PyObject *const_str_plain_PART_KEY;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_16384;
static PyObject *const_str_plain_MULTIPLE_KEY;
extern PyObject *const_str_plain_TIMESTAMP;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_65536;
static PyObject *const_str_plain_UNIQUE;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_BLOB;
extern PyObject *const_int_pos_1024;
extern PyObject *const_int_pos_2048;
static PyObject *const_str_plain_ZEROFILL;
extern PyObject *const_int_pos_64;
static PyObject *const_str_digest_0b981941cafcdf7d5da897ea406cfc2c;
static PyObject *const_str_plain_AUTO_INCREMENT;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_UNSIGNED = UNSTREAM_STRING( &constant_bin[ 16389 ], 8, 1 );
    const_str_plain_UNIQUE_KEY = UNSTREAM_STRING( &constant_bin[ 32486 ], 10, 1 );
    const_str_plain_NUM = UNSTREAM_STRING( &constant_bin[ 22239 ], 3, 1 );
    const_str_plain_GROUP = UNSTREAM_STRING( &constant_bin[ 32496 ], 5, 1 );
    const_str_plain_PRI_KEY = UNSTREAM_STRING( &constant_bin[ 32501 ], 7, 1 );
    const_str_digest_dc4ad0fe2fcac48598396f434aa8ae43 = UNSTREAM_STRING( &constant_bin[ 32508 ], 85, 0 );
    const_str_plain_NOT_NULL = UNSTREAM_STRING( &constant_bin[ 32593 ], 8, 1 );
    const_str_digest_a96d154f975ad6057517109824dbf842 = UNSTREAM_STRING( &constant_bin[ 32601 ], 22, 0 );
    const_str_plain_PART_KEY = UNSTREAM_STRING( &constant_bin[ 32623 ], 8, 1 );
    const_str_plain_MULTIPLE_KEY = UNSTREAM_STRING( &constant_bin[ 32631 ], 12, 1 );
    const_str_plain_UNIQUE = UNSTREAM_STRING( &constant_bin[ 32486 ], 6, 1 );
    const_str_plain_ZEROFILL = UNSTREAM_STRING( &constant_bin[ 32643 ], 8, 1 );
    const_str_digest_0b981941cafcdf7d5da897ea406cfc2c = UNSTREAM_STRING( &constant_bin[ 32651 ], 129, 0 );
    const_str_plain_AUTO_INCREMENT = UNSTREAM_STRING( &constant_bin[ 16398 ], 14, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_MySQLdb$constants$FLAG( void )
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
static struct PyModuleDef mdef_MySQLdb$constants$FLAG =
{
    PyModuleDef_HEAD_INIT,
    "MySQLdb.constants.FLAG",
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

MOD_INIT_DECL( MySQLdb$constants$FLAG )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_MySQLdb$constants$FLAG );
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
    puts("MySQLdb.constants.FLAG: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.constants.FLAG: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.constants.FLAG: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initMySQLdb$constants$FLAG" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_MySQLdb$constants$FLAG = Py_InitModule4(
        "MySQLdb.constants.FLAG",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_MySQLdb$constants$FLAG = PyModule_Create( &mdef_MySQLdb$constants$FLAG );
#endif

    moduledict_MySQLdb$constants$FLAG = MODULE_DICT( module_MySQLdb$constants$FLAG );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_MySQLdb$constants$FLAG,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_MySQLdb$constants$FLAG,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$constants$FLAG,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$constants$FLAG,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_MySQLdb$constants$FLAG );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_a96d154f975ad6057517109824dbf842, module_MySQLdb$constants$FLAG );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_0b981941cafcdf7d5da897ea406cfc2c;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_dc4ad0fe2fcac48598396f434aa8ae43;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_NOT_NULL, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_PRI_KEY, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_UNIQUE_KEY, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_MULTIPLE_KEY, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_BLOB, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_32;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_UNSIGNED, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_64;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_ZEROFILL, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_128;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_BINARY, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_256;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_ENUM, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_pos_512;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_AUTO_INCREMENT, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_1024;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_TIMESTAMP, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_pos_2048;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_SET, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_int_pos_32768;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_NUM, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_pos_16384;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_PART_KEY, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_int_pos_32768;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_GROUP, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_pos_65536;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain_UNIQUE, tmp_assign_source_18 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FLAG, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_MySQLdb$constants$FLAG );
}
