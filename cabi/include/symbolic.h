/* C bindings to the symbolic library */

#ifndef SYMBOLIC_H_INCLUDED
#define SYMBOLIC_H_INCLUDED

/* Generated with cbindgen:0.14.2 */

/* Warning, this file is autogenerated. Do not modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * Represents all possible error codes.
 */
enum SymbolicErrorCode {
  SYMBOLIC_ERROR_CODE_NO_ERROR = 0,
  SYMBOLIC_ERROR_CODE_PANIC = 1,
  SYMBOLIC_ERROR_CODE_UNKNOWN = 2,
  SYMBOLIC_ERROR_CODE_IO_ERROR = 101,
  SYMBOLIC_ERROR_CODE_UNKNOWN_ARCH_ERROR = 1001,
  SYMBOLIC_ERROR_CODE_UNKNOWN_LANGUAGE_ERROR = 1002,
  SYMBOLIC_ERROR_CODE_PARSE_DEBUG_ID_ERROR = 1003,
  SYMBOLIC_ERROR_CODE_UNKNOWN_OBJECT_KIND_ERROR = 2001,
  SYMBOLIC_ERROR_CODE_UNKNOWN_FILE_FORMAT_ERROR = 2002,
  SYMBOLIC_ERROR_CODE_OBJECT_ERROR_UNSUPPORTED_OBJECT = 2101,
  SYMBOLIC_ERROR_CODE_OBJECT_ERROR_BAD_BREAKPAD_OBJECT = 2102,
  SYMBOLIC_ERROR_CODE_OBJECT_ERROR_BAD_ELF_OBJECT = 2103,
  SYMBOLIC_ERROR_CODE_OBJECT_ERROR_BAD_MACH_OOBJECT = 2104,
  SYMBOLIC_ERROR_CODE_OBJECT_ERROR_BAD_PDB_OBJECT = 2105,
  SYMBOLIC_ERROR_CODE_OBJECT_ERROR_BAD_PE_OBJECT = 2106,
  SYMBOLIC_ERROR_CODE_OBJECT_ERROR_BAD_SOURCE_BUNDLE = 2107,
  SYMBOLIC_ERROR_CODE_DWARF_ERROR_INVALID_UNIT_REF = 2201,
  SYMBOLIC_ERROR_CODE_DWARF_ERROR_INVALID_FILE_REF = 2202,
  SYMBOLIC_ERROR_CODE_DWARF_ERROR_UNEXPECTED_INLINE = 2203,
  SYMBOLIC_ERROR_CODE_DWARF_ERROR_INVERTED_FUNCTION_RANGE = 2204,
  SYMBOLIC_ERROR_CODE_DWARF_ERROR_CORRUPTED_DATA = 2205,
  SYMBOLIC_ERROR_CODE_CFI_ERROR_MISSING_DEBUG_INFO = 3001,
  SYMBOLIC_ERROR_CODE_CFI_ERROR_UNSUPPORTED_DEBUG_FORMAT = 3002,
  SYMBOLIC_ERROR_CODE_CFI_ERROR_BAD_DEBUG_INFO = 3003,
  SYMBOLIC_ERROR_CODE_CFI_ERROR_UNSUPPORTED_ARCH = 3004,
  SYMBOLIC_ERROR_CODE_CFI_ERROR_WRITE_ERROR = 3005,
  SYMBOLIC_ERROR_CODE_CFI_ERROR_BAD_FILE_MAGIC = 3006,
  SYMBOLIC_ERROR_CODE_CFI_ERROR_INVALID_ADDRESS = 3007,
  SYMBOLIC_ERROR_CODE_PROCESS_MINIDUMP_ERROR_MINIDUMP_NOT_FOUND = 4001,
  SYMBOLIC_ERROR_CODE_PROCESS_MINIDUMP_ERROR_NO_MINIDUMP_HEADER = 4002,
  SYMBOLIC_ERROR_CODE_PROCESS_MINIDUMP_ERROR_NO_THREAD_LIST = 4003,
  SYMBOLIC_ERROR_CODE_PROCESS_MINIDUMP_ERROR_INVALID_THREAD_INDEX = 4004,
  SYMBOLIC_ERROR_CODE_PROCESS_MINIDUMP_ERROR_INVALID_THREAD_ID = 4005,
  SYMBOLIC_ERROR_CODE_PROCESS_MINIDUMP_ERROR_DUPLICATE_REQUESTING_THREADS = 4006,
  SYMBOLIC_ERROR_CODE_PROCESS_MINIDUMP_ERROR_SYMBOL_SUPPLIER_INTERRUPTED = 4007,
  SYMBOLIC_ERROR_CODE_PARSE_SOURCE_MAP_ERROR = 5001,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_BAD_FILE_MAGIC = 6001,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_BAD_FILE_HEADER = 6002,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_BAD_SEGMENT = 6003,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_BAD_CACHE_FILE = 6004,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_UNSUPPORTED_VERSION = 6005,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_BAD_DEBUG_FILE = 6006,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_MISSING_DEBUG_SECTION = 6007,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_MISSING_DEBUG_INFO = 6008,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_UNSUPPORTED_DEBUG_KIND = 6009,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_VALUE_TOO_LARGE = 6010,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_WRITE_FAILED = 6011,
  SYMBOLIC_ERROR_CODE_SYM_CACHE_ERROR_TOO_MANY_VALUES = 6012,
  SYMBOLIC_ERROR_CODE_UNREAL4_ERROR_EMPTY = 7002,
  SYMBOLIC_ERROR_CODE_UNREAL4_ERROR_BAD_COMPRESSION = 7004,
  SYMBOLIC_ERROR_CODE_UNREAL4_ERROR_INVALID_XML = 7005,
  SYMBOLIC_ERROR_CODE_UNREAL4_ERROR_INVALID_LOG_ENTRY = 7006,
  SYMBOLIC_ERROR_CODE_UNREAL4_ERROR_BAD_DATA = 7007,
  SYMBOLIC_ERROR_CODE_UNREAL4_ERROR_TRAILING_DATA = 7008,
  SYMBOLIC_ERROR_CODE_APPLE_CRASH_REPORT_PARSE_ERROR_IO = 8001,
  SYMBOLIC_ERROR_CODE_APPLE_CRASH_REPORT_PARSE_ERROR_INVALID_INCIDENT_IDENTIFIER = 8002,
  SYMBOLIC_ERROR_CODE_APPLE_CRASH_REPORT_PARSE_ERROR_INVALID_REPORT_VERSION = 8003,
  SYMBOLIC_ERROR_CODE_APPLE_CRASH_REPORT_PARSE_ERROR_INVALID_TIMESTAMP = 8004,
};
typedef uint32_t SymbolicErrorCode;

/**
 * Indicates how well the instruction pointer derived during stack walking is trusted.
 */
enum SymbolicFrameTrust {
  SYMBOLIC_FRAME_TRUST_NONE,
  SYMBOLIC_FRAME_TRUST_SCAN,
  SYMBOLIC_FRAME_TRUST_CFI_SCAN,
  SYMBOLIC_FRAME_TRUST_FP,
  SYMBOLIC_FRAME_TRUST_CFI,
  SYMBOLIC_FRAME_TRUST_PREWALKED,
  SYMBOLIC_FRAME_TRUST_CONTEXT,
};
typedef uint32_t SymbolicFrameTrust;

/**
 * A potential multi arch object.
 */
typedef struct SymbolicArchive SymbolicArchive;

/**
 * Contains stack frame information (CFI) for an image.
 */
typedef struct SymbolicCfiCache SymbolicCfiCache;

/**
 * A map of stack frame infos for images.
 */
typedef struct SymbolicFrameInfoMap SymbolicFrameInfoMap;

/**
 * A single arch object.
 */
typedef struct SymbolicObject SymbolicObject;

/**
 * Represents a proguard mapper.
 */
typedef struct SymbolicProguardMapper SymbolicProguardMapper;

/**
 * Represents a proguard mapping view.
 */
typedef struct SymbolicProguardMappingView SymbolicProguardMappingView;

/**
 * Represents a sourcemap view.
 */
typedef struct SymbolicSourceMapView SymbolicSourceMapView;

/**
 * Represents a source view.
 */
typedef struct SymbolicSourceView SymbolicSourceView;

/**
 * Represents a symbolic sym cache.
 */
typedef struct SymbolicSymCache SymbolicSymCache;

/**
 * An Unreal Engine 4 crash report.
 */
typedef struct SymbolicUnreal4Crash SymbolicUnreal4Crash;

/**
 * A file contained in a SymbolicUnreal4Crash.
 */
typedef struct SymbolicUnreal4File SymbolicUnreal4File;

/**
 * A length-prefixed UTF-8 string.
 *
 * As opposed to C strings, this string is not null-terminated. If the string is owned, indicated
 * by the `owned` flag, the owner must call the `free` function on this string. The convention is:
 *
 *  - When obtained as instance through return values, always free the string.
 *  - When obtained as pointer through field access, never free the string.
 */
typedef struct {
  /**
   * Pointer to the UTF-8 encoded string data.
   */
  char *data;
  /**
   * The length of the string pointed to by `data`.
   */
  uintptr_t len;
  /**
   * Indicates that the string is owned and must be freed.
   */
  bool owned;
} SymbolicStr;

/**
 * Represents an instruction info.
 */
typedef struct {
  /**
   * The address of the instruction we want to use as a base.
   */
  uint64_t addr;
  /**
   * The architecture we are dealing with.
   */
  const SymbolicStr *arch;
  /**
   * This is true if the frame is the cause of the crash.
   */
  bool crashing_frame;
  /**
   * If a signal is know that triggers the crash, it can be stored here (0 if unknown)
   */
  uint32_t signal;
  /**
   * The optional value of the IP register (0 if unknown).
   */
  uint64_t ip_reg;
} SymbolicInstructionInfo;

/**
 * Represents a single symbol after lookup.
 */
typedef struct {
  uint64_t sym_addr;
  uint64_t line_addr;
  uint64_t instr_addr;
  uint32_t line;
  SymbolicStr lang;
  SymbolicStr symbol;
  SymbolicStr filename;
  SymbolicStr base_dir;
  SymbolicStr comp_dir;
} SymbolicLineInfo;

/**
 * Represents a lookup result of one or more items.
 */
typedef struct {
  SymbolicLineInfo *items;
  uintptr_t len;
} SymbolicLookupResult;

/**
 * Features this object contains.
 */
typedef struct {
  bool symtab;
  bool debug;
  bool unwind;
  bool sources;
} SymbolicObjectFeatures;

/**
 * OS and CPU information in a minidump.
 */
typedef struct {
  SymbolicStr os_name;
  SymbolicStr os_version;
  SymbolicStr os_build;
  SymbolicStr cpu_family;
  SymbolicStr cpu_info;
  uint32_t cpu_count;
} SymbolicSystemInfo;

/**
 * Carries information about a code module loaded into the process during the crash.
 */
typedef struct {
  SymbolicStr code_id;
  SymbolicStr code_file;
  SymbolicStr debug_id;
  SymbolicStr debug_file;
  uint64_t addr;
  uint64_t size;
} SymbolicCodeModule;

/**
 * The CPU register value of a stack frame.
 */
typedef struct {
  SymbolicStr name;
  SymbolicStr value;
} SymbolicRegVal;

/**
 * Contains the absolute instruction address and image information of a stack frame.
 */
typedef struct {
  uint64_t return_address;
  uint64_t instruction;
  SymbolicFrameTrust trust;
  SymbolicCodeModule module;
  SymbolicRegVal *registers;
  uintptr_t register_count;
} SymbolicStackFrame;

/**
 * Represents a thread of the process state which holds a list of stack frames.
 */
typedef struct {
  uint32_t thread_id;
  SymbolicStackFrame *frames;
  uintptr_t frame_count;
} SymbolicCallStack;

/**
 * State of a crashed process in a minidump.
 */
typedef struct {
  int32_t requesting_thread;
  uint64_t timestamp;
  bool crashed;
  uint64_t crash_address;
  SymbolicStr crash_reason;
  SymbolicStr assertion;
  SymbolicSystemInfo system_info;
  SymbolicCallStack *threads;
  uintptr_t thread_count;
  SymbolicCodeModule *modules;
  uintptr_t module_count;
} SymbolicProcessState;

/**
 * CABI wrapper around a UUID.
 */
typedef struct {
  /**
   * UUID bytes in network byte order (big endian).
   */
  uint8_t data[16];
} SymbolicUuid;

/**
 * Represents a Java Stack Frame.
 */
typedef struct {
  SymbolicStr class_name;
  SymbolicStr method;
  SymbolicStr file;
  uintptr_t line;
} SymbolicJavaStackFrame;

/**
 * The result of remapping a Stack Frame.
 */
typedef struct {
  SymbolicJavaStackFrame *frames;
  uintptr_t len;
} SymbolicProguardRemapResult;

/**
 * Represents a single token after lookup.
 */
typedef struct {
  uint32_t src_line;
  uint32_t src_col;
  uint32_t dst_line;
  uint32_t dst_col;
  uint32_t src_id;
  SymbolicStr name;
  SymbolicStr src;
  SymbolicStr function_name;
} SymbolicTokenMatch;

/**
 * Returns the name of the instruction pointer if known.
 */
SymbolicStr symbolic_arch_ip_reg_name(const SymbolicStr *arch);

/**
 * Checks if an architecture is known.
 */
bool symbolic_arch_is_known(const SymbolicStr *arch);

/**
 * Frees the given archive.
 */
void symbolic_archive_free(SymbolicArchive *archive);

/**
 * Returns the n-th object, or a null pointer if the object does not exist.
 */
SymbolicObject *symbolic_archive_get_object(const SymbolicArchive *archive,
                                            uintptr_t index);

/**
 * Returns the number of contained objects.
 */
uintptr_t symbolic_archive_object_count(const SymbolicArchive *archive);

/**
 * Loads an archive from a given path.
 */
SymbolicArchive *symbolic_archive_open(const char *path);

/**
 * Creates an archive from a byte buffer without taking ownership of the pointer.
 */
SymbolicArchive *symbolic_archive_from_bytes(const uint8_t *bytes,
                                             uintptr_t len);

/**
 * Releases memory held by an unmanaged `SymbolicCfiCache` instance.
 */
void symbolic_cficache_free(SymbolicCfiCache *cache);

/**
 * Extracts call frame information (CFI) from an Object.
 */
SymbolicCfiCache *symbolic_cficache_from_object(const SymbolicObject *object);

/**
 * Returns a pointer to the raw buffer of the CFI cache.
 */
const uint8_t *symbolic_cficache_get_bytes(const SymbolicCfiCache *cache);

/**
 * Returns the size of the raw buffer of the CFI cache.
 */
uintptr_t symbolic_cficache_get_size(const SymbolicCfiCache *cache);

/**
 * Returns the file format version of the CFI cache.
 */
uint32_t symbolic_cficache_get_version(const SymbolicCfiCache *cache);

/**
 * Returns the latest CFI cache version.
 */
uint32_t symbolic_cficache_latest_version(void);

/**
 * Loads a CFI cache from the given path.
 */
SymbolicCfiCache *symbolic_cficache_open(const char *path);

/**
 * Demangles a given identifier.
 *
 * This demangles with the default behavior in symbolic. If no language
 * is specified, it will be auto-detected.
 */
SymbolicStr symbolic_demangle(const SymbolicStr *ident,
                              const SymbolicStr *lang);

/**
 * Demangles a given identifier.
 *
 * This is similar to `symbolic_demangle` but does not demangle the
 * arguments and instead strips them. If no language is specified, it
 * will be auto-detected.
 */
SymbolicStr symbolic_demangle_no_args(const SymbolicStr *ident,
                                      const SymbolicStr *lang);

/**
 * Clears the last error.
 */
void symbolic_err_clear(void);

/**
 * Returns the panic information as string.
 */
SymbolicStr symbolic_err_get_backtrace(void);

/**
 * Returns the last error code.
 *
 * If there is no error, 0 is returned.
 */
SymbolicErrorCode symbolic_err_get_last_code(void);

/**
 * Returns the last error message.
 *
 * If there is no error an empty string is returned.  This allocates new memory
 * that needs to be freed with `symbolic_str_free`.
 */
SymbolicStr symbolic_err_get_last_message(void);

/**
 * Return the best instruction for an isntruction info.
 */
uint64_t symbolic_find_best_instruction(const SymbolicInstructionInfo *ii);

/**
 * Adds the CfiCache for a module specified by `debug_id`. Assumes ownership over the cache.
 */
void symbolic_frame_info_map_add(SymbolicFrameInfoMap *frame_info_map,
                                 const SymbolicStr *debug_id,
                                 SymbolicCfiCache *cfi_cache);

/**
 * Frees a frame info map object.
 */
void symbolic_frame_info_map_free(SymbolicFrameInfoMap *frame_info_map);

/**
 * Creates a new frame info map.
 */
SymbolicFrameInfoMap *symbolic_frame_info_map_new(void);

/**
 * Converts a Breakpad CodeModuleId to DebugId.
 */
SymbolicStr symbolic_id_from_breakpad(const SymbolicStr *breakpad_id);

/**
 * Initializes the symbolic library.
 */
void symbolic_init(void);

/**
 * Frees a lookup result.
 */
void symbolic_lookup_result_free(SymbolicLookupResult *lookup_result);

/**
 * Normalizes an architecture name.
 */
SymbolicStr symbolic_normalize_arch(const SymbolicStr *arch);

/**
 * Normalizes a code identifier to default representation.
 */
SymbolicStr symbolic_normalize_code_id(const SymbolicStr *code_id);

/**
 * Normalizes a debug identifier to default representation.
 */
SymbolicStr symbolic_normalize_debug_id(const SymbolicStr *debug_id);

/**
 * Frees an object returned from an archive.
 */
void symbolic_object_free(SymbolicObject *object);

/**
 * Returns the architecture of the object.
 */
SymbolicStr symbolic_object_get_arch(const SymbolicObject *object);

/**
 * Returns the code identifier of the object.
 */
SymbolicStr symbolic_object_get_code_id(const SymbolicObject *object);

/**
 * Returns the debug identifier of the object.
 */
SymbolicStr symbolic_object_get_debug_id(const SymbolicObject *object);

SymbolicObjectFeatures symbolic_object_get_features(const SymbolicObject *object);

/**
 * Returns the file format of the object file (e.g. MachO, ELF, ...).
 */
SymbolicStr symbolic_object_get_file_format(const SymbolicObject *object);

/**
 * Returns the object kind (e.g. executable, debug file, library, ...).
 */
SymbolicStr symbolic_object_get_kind(const SymbolicObject *object);

/**
 * Processes a minidump with optional CFI information and returns the state
 * of the process at the time of the crash.
 */
SymbolicProcessState *symbolic_process_minidump(const char *path,
                                                const SymbolicFrameInfoMap *frame_info_map);

/**
 * Processes a minidump with optional CFI information and returns the state
 * of the process at the time of the crash.
 */
SymbolicProcessState *symbolic_process_minidump_buffer(const char *buffer,
                                                       uintptr_t length,
                                                       const SymbolicFrameInfoMap *frame_info_map);

/**
 * Frees a process state object.
 */
void symbolic_process_state_free(SymbolicProcessState *process_state);

/**
 * Frees a proguard mapping view.
 */
void symbolic_proguardmapper_free(SymbolicProguardMapper *mapper);

/**
 * Returns the UUID of a proguard mapping file.
 */
SymbolicUuid symbolic_proguardmapper_get_uuid(SymbolicProguardMapper *mapper);

/**
 * Returns true if the mapping file has line infos.
 */
bool symbolic_proguardmapper_has_line_info(const SymbolicProguardMapper *mapper);

/**
 * Creates a proguard mapping view from a path.
 */
SymbolicProguardMapper *symbolic_proguardmapper_open(const char *path);

/**
 * Remaps a class name.
 */
SymbolicStr symbolic_proguardmapper_remap_class(const SymbolicProguardMapper *mapper,
                                                const SymbolicStr *class_);

/**
 * Remaps a Stack Frame.
 */
SymbolicProguardRemapResult symbolic_proguardmapper_remap_frame(const SymbolicProguardMapper *mapper,
                                                                const SymbolicStr *class_,
                                                                const SymbolicStr *method,
                                                                uintptr_t line);

/**
 * Frees a remap result.
 */
void symbolic_proguardmapper_result_free(SymbolicProguardRemapResult *result);

/**
 * Converts a dotted path at a line number.
 *
 * @deprecated: use `symbolic_proguardmapper_remap_class` or `symbolic_proguardmapper_remap_frame` instead
 */
SymbolicStr symbolic_proguardmappingview_convert_dotted_path(const SymbolicProguardMappingView *view,
                                                             const SymbolicStr *path,
                                                             uint32_t lineno);

/**
 * Frees a proguard mapping view.
 *
 * @deprecated: use `symbolic_proguardmapper_free` instead
 */
void symbolic_proguardmappingview_free(SymbolicProguardMappingView *view);

/**
 * Creates a proguard mapping view from bytes.
 *
 * This shares the underlying memory and does not copy it.
 *
 * @deprecated: use `symbolic_proguardmapper_open` instead
 */
SymbolicProguardMappingView *symbolic_proguardmappingview_from_bytes(const char *bytes,
                                                                     uintptr_t len);

/**
 * Returns the UUID of a proguard mapping file.
 *
 * @deprecated: use `symbolic_proguardmapper_get_uuid` instead
 */
SymbolicUuid symbolic_proguardmappingview_get_uuid(SymbolicProguardMappingView *view);

/**
 * Returns true if the mapping file has line infos.
 *
 * @deprecated: use `symbolic_proguardmapper_has_line_info` instead
 */
bool symbolic_proguardmappingview_has_line_info(const SymbolicProguardMappingView *view);

/**
 * Creates a proguard mapping view from a path.
 *
 * @deprecated: use `symbolic_proguardmapper_open` instead
 */
SymbolicProguardMappingView *symbolic_proguardmappingview_open(const char *path);

/**
 * Frees a source map view.
 */
void symbolic_sourcemapview_free(SymbolicSourceMapView *source_map);

/**
 * Loads a sourcemap from a JSON byte slice.
 */
SymbolicSourceMapView *symbolic_sourcemapview_from_json_slice(const char *data,
                                                              uintptr_t len);

/**
 * Return the number of sources.
 */
uint32_t symbolic_sourcemapview_get_source_count(const SymbolicSourceMapView *source_map);

/**
 * Return the source name for an index.
 */
SymbolicStr symbolic_sourcemapview_get_source_name(const SymbolicSourceMapView *source_map,
                                                   uint32_t index);

/**
 * Return the sourceview for a given source.
 */
const SymbolicSourceView *symbolic_sourcemapview_get_sourceview(const SymbolicSourceMapView *source_map,
                                                                uint32_t index);

/**
 * Returns a specific token.
 */
SymbolicTokenMatch *symbolic_sourcemapview_get_token(const SymbolicSourceMapView *source_map,
                                                     uint32_t index);

/**
 * Returns the number of tokens.
 */
uint32_t symbolic_sourcemapview_get_tokens(const SymbolicSourceMapView *source_map);

/**
 * Looks up a token.
 */
SymbolicTokenMatch *symbolic_sourcemapview_lookup_token(const SymbolicSourceMapView *source_map,
                                                        uint32_t line,
                                                        uint32_t col);

/**
 * Looks up a token.
 */
SymbolicTokenMatch *symbolic_sourcemapview_lookup_token_with_function_name(const SymbolicSourceMapView *source_map,
                                                                           uint32_t line,
                                                                           uint32_t col,
                                                                           const SymbolicStr *minified_name,
                                                                           const SymbolicSourceView *view);

/**
 * Returns the underlying source (borrowed).
 */
SymbolicStr symbolic_sourceview_as_str(const SymbolicSourceView *view);

/**
 * Frees a source view.
 */
void symbolic_sourceview_free(SymbolicSourceView *view);

/**
 * Creates a source view from a given path.
 *
 * This shares the underlying memory and does not copy it if that is
 * possible.  Will ignore utf-8 decoding errors.
 */
SymbolicSourceView *symbolic_sourceview_from_bytes(const char *bytes,
                                                   uintptr_t len);

/**
 * Returns a specific line.
 */
SymbolicStr symbolic_sourceview_get_line(const SymbolicSourceView *view,
                                         uint32_t index);

/**
 * Returns the number of lines.
 */
uint32_t symbolic_sourceview_get_line_count(const SymbolicSourceView *source_map);

/**
 * Frees a symbolic str.
 *
 * If the string is marked as not owned then this function does not
 * do anything.
 */
void symbolic_str_free(SymbolicStr *string);

/**
 * Creates a symbolic string from a raw C string.
 */
SymbolicStr symbolic_str_from_cstr(const char *string);

/**
 * Frees a symcache object.
 */
void symbolic_symcache_free(SymbolicSymCache *symcache);

/**
 * Creates a symcache from a byte buffer without taking ownership of the pointer.
 */
SymbolicSymCache *symbolic_symcache_from_bytes(const uint8_t *bytes,
                                               uintptr_t len);

/**
 * Creates a symcache from a given object.
 */
SymbolicSymCache *symbolic_symcache_from_object(const SymbolicObject *object);

/**
 * Returns the architecture of the symcache.
 */
SymbolicStr symbolic_symcache_get_arch(const SymbolicSymCache *symcache);

/**
 * Returns the internal buffer of the symcache.
 *
 * The internal buffer is exactly `symbolic_symcache_get_size` bytes long.
 */
const uint8_t *symbolic_symcache_get_bytes(const SymbolicSymCache *symcache);

/**
 * Returns the architecture of the symcache.
 */
SymbolicStr symbolic_symcache_get_debug_id(const SymbolicSymCache *symcache);

/**
 * Returns the size in bytes of the symcache.
 */
uintptr_t symbolic_symcache_get_size(const SymbolicSymCache *symcache);

/**
 * Returns the version of the cache file.
 */
uint32_t symbolic_symcache_get_version(const SymbolicSymCache *symcache);

/**
 * Returns true if the symcache has file infos.
 */
bool symbolic_symcache_has_file_info(const SymbolicSymCache *symcache);

/**
 * Returns true if the symcache has line infos.
 */
bool symbolic_symcache_has_line_info(const SymbolicSymCache *symcache);

/**
 * Returns the latest symcache version.
 */
uint32_t symbolic_symcache_latest_version(void);

/**
 * Looks up a single symbol.
 */
SymbolicLookupResult symbolic_symcache_lookup(const SymbolicSymCache *symcache,
                                              uint64_t addr);

/**
 * Creates a symcache from a given path.
 */
SymbolicSymCache *symbolic_symcache_open(const char *path);

/**
 * Free a token match.
 */
void symbolic_token_match_free(SymbolicTokenMatch *token_match);

/**
 * Returns file meta data of a file in the Unreal 4 crash.
 */
SymbolicUnreal4File *symbolic_unreal4_crash_file_by_index(const SymbolicUnreal4Crash *unreal,
                                                          uintptr_t index);

/**
 * Returns the number of files in the Unreal 4 crash.
 */
uintptr_t symbolic_unreal4_crash_file_count(const SymbolicUnreal4Crash *unreal);

/**
 * Frees an Unreal Engine 4 crash.
 */
void symbolic_unreal4_crash_free(SymbolicUnreal4Crash *unreal);

/**
 * Parses an Unreal Engine 4 crash from the given buffer.
 */
SymbolicUnreal4Crash *symbolic_unreal4_crash_from_bytes(const char *bytes,
                                                        uintptr_t len);

/**
 * Returns the file contents of a file in the Unreal 4 crash.
 */
const uint8_t *symbolic_unreal4_file_data(const SymbolicUnreal4File *file,
                                          uintptr_t *len);

/**
 * Frees an Unreal Engine 4 file.
 */
void symbolic_unreal4_file_free(SymbolicUnreal4File *file);

/**
 * Returns the file name of a file in the Unreal 4 crash.
 */
SymbolicStr symbolic_unreal4_file_name(const SymbolicUnreal4File *file);

/**
 * Returns the file type of a file in the Unreal 4 crash.
 */
SymbolicStr symbolic_unreal4_file_type(const SymbolicUnreal4File *file);

/**
 * Parses the Unreal Engine 4 context from a crash, returns JSON.
 */
SymbolicStr symbolic_unreal4_get_context(const SymbolicUnreal4Crash *unreal);

/**
 * Parses the Unreal Engine 4 logs from a crash, returns JSON.
 */
SymbolicStr symbolic_unreal4_get_logs(const SymbolicUnreal4Crash *unreal);

/**
 * Returns true if the uuid is nil.
 */
bool symbolic_uuid_is_nil(const SymbolicUuid *uuid);

/**
 * Formats the UUID into a string.
 *
 * The string is newly allocated and needs to be released with
 * `symbolic_cstr_free`.
 */
SymbolicStr symbolic_uuid_to_str(const SymbolicUuid *uuid);

#endif /* SYMBOLIC_H_INCLUDED */
