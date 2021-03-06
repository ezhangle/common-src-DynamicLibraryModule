//==============================================================================
// Copyright (c) 2015-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS AUTOGENERATED BY HSA CODE GENERATOR
//==============================================================================

#ifndef _HSARTMODULEDECLS_H_
#define _HSARTMODULEDECLS_H_

#include <hsa.h>
#include <hsa_ext_finalize.h>
#include <hsa_ext_image.h>
#include <hsa_ext_amd.h>
#include <hsa_ven_amd_loader.h>
#include <hsa_ven_amd_aqlprofile.h>

typedef decltype(hsa_status_string)* hsa_status_string_fn_t;
typedef decltype(hsa_init)* hsa_init_fn_t;
typedef decltype(hsa_shut_down)* hsa_shut_down_fn_t;
typedef decltype(hsa_system_get_info)* hsa_system_get_info_fn_t;
typedef decltype(hsa_extension_get_name)* hsa_extension_get_name_fn_t;
typedef decltype(hsa_system_extension_supported)* hsa_system_extension_supported_fn_t;
typedef decltype(hsa_system_major_extension_supported)* hsa_system_major_extension_supported_fn_t;
typedef decltype(hsa_system_get_extension_table)* hsa_system_get_extension_table_fn_t;
typedef decltype(hsa_system_get_major_extension_table)* hsa_system_get_major_extension_table_fn_t;
typedef decltype(hsa_agent_get_info)* hsa_agent_get_info_fn_t;
typedef decltype(hsa_iterate_agents)* hsa_iterate_agents_fn_t;
typedef decltype(hsa_agent_get_exception_policies)* hsa_agent_get_exception_policies_fn_t;
typedef decltype(hsa_cache_get_info)* hsa_cache_get_info_fn_t;
typedef decltype(hsa_agent_iterate_caches)* hsa_agent_iterate_caches_fn_t;
typedef decltype(hsa_agent_extension_supported)* hsa_agent_extension_supported_fn_t;
typedef decltype(hsa_agent_major_extension_supported)* hsa_agent_major_extension_supported_fn_t;
typedef decltype(hsa_signal_create)* hsa_signal_create_fn_t;
typedef decltype(hsa_signal_destroy)* hsa_signal_destroy_fn_t;
typedef decltype(hsa_signal_load_scacquire)* hsa_signal_load_scacquire_fn_t;
typedef decltype(hsa_signal_load_relaxed)* hsa_signal_load_relaxed_fn_t;
typedef decltype(hsa_signal_load_acquire)* hsa_signal_load_acquire_fn_t;
typedef decltype(hsa_signal_store_relaxed)* hsa_signal_store_relaxed_fn_t;
typedef decltype(hsa_signal_store_screlease)* hsa_signal_store_screlease_fn_t;
typedef decltype(hsa_signal_store_release)* hsa_signal_store_release_fn_t;
typedef decltype(hsa_signal_silent_store_relaxed)* hsa_signal_silent_store_relaxed_fn_t;
typedef decltype(hsa_signal_silent_store_screlease)* hsa_signal_silent_store_screlease_fn_t;
typedef decltype(hsa_signal_exchange_scacq_screl)* hsa_signal_exchange_scacq_screl_fn_t;
typedef decltype(hsa_signal_exchange_acq_rel)* hsa_signal_exchange_acq_rel_fn_t;
typedef decltype(hsa_signal_exchange_scacquire)* hsa_signal_exchange_scacquire_fn_t;
typedef decltype(hsa_signal_exchange_acquire)* hsa_signal_exchange_acquire_fn_t;
typedef decltype(hsa_signal_exchange_relaxed)* hsa_signal_exchange_relaxed_fn_t;
typedef decltype(hsa_signal_exchange_screlease)* hsa_signal_exchange_screlease_fn_t;
typedef decltype(hsa_signal_exchange_release)* hsa_signal_exchange_release_fn_t;
typedef decltype(hsa_signal_cas_scacq_screl)* hsa_signal_cas_scacq_screl_fn_t;
typedef decltype(hsa_signal_cas_acq_rel)* hsa_signal_cas_acq_rel_fn_t;
typedef decltype(hsa_signal_cas_scacquire)* hsa_signal_cas_scacquire_fn_t;
typedef decltype(hsa_signal_cas_acquire)* hsa_signal_cas_acquire_fn_t;
typedef decltype(hsa_signal_cas_relaxed)* hsa_signal_cas_relaxed_fn_t;
typedef decltype(hsa_signal_cas_screlease)* hsa_signal_cas_screlease_fn_t;
typedef decltype(hsa_signal_cas_release)* hsa_signal_cas_release_fn_t;
typedef decltype(hsa_signal_add_scacq_screl)* hsa_signal_add_scacq_screl_fn_t;
typedef decltype(hsa_signal_add_acq_rel)* hsa_signal_add_acq_rel_fn_t;
typedef decltype(hsa_signal_add_scacquire)* hsa_signal_add_scacquire_fn_t;
typedef decltype(hsa_signal_add_acquire)* hsa_signal_add_acquire_fn_t;
typedef decltype(hsa_signal_add_relaxed)* hsa_signal_add_relaxed_fn_t;
typedef decltype(hsa_signal_add_screlease)* hsa_signal_add_screlease_fn_t;
typedef decltype(hsa_signal_add_release)* hsa_signal_add_release_fn_t;
typedef decltype(hsa_signal_subtract_scacq_screl)* hsa_signal_subtract_scacq_screl_fn_t;
typedef decltype(hsa_signal_subtract_acq_rel)* hsa_signal_subtract_acq_rel_fn_t;
typedef decltype(hsa_signal_subtract_scacquire)* hsa_signal_subtract_scacquire_fn_t;
typedef decltype(hsa_signal_subtract_acquire)* hsa_signal_subtract_acquire_fn_t;
typedef decltype(hsa_signal_subtract_relaxed)* hsa_signal_subtract_relaxed_fn_t;
typedef decltype(hsa_signal_subtract_screlease)* hsa_signal_subtract_screlease_fn_t;
typedef decltype(hsa_signal_subtract_release)* hsa_signal_subtract_release_fn_t;
typedef decltype(hsa_signal_and_scacq_screl)* hsa_signal_and_scacq_screl_fn_t;
typedef decltype(hsa_signal_and_acq_rel)* hsa_signal_and_acq_rel_fn_t;
typedef decltype(hsa_signal_and_scacquire)* hsa_signal_and_scacquire_fn_t;
typedef decltype(hsa_signal_and_acquire)* hsa_signal_and_acquire_fn_t;
typedef decltype(hsa_signal_and_relaxed)* hsa_signal_and_relaxed_fn_t;
typedef decltype(hsa_signal_and_screlease)* hsa_signal_and_screlease_fn_t;
typedef decltype(hsa_signal_and_release)* hsa_signal_and_release_fn_t;
typedef decltype(hsa_signal_or_scacq_screl)* hsa_signal_or_scacq_screl_fn_t;
typedef decltype(hsa_signal_or_acq_rel)* hsa_signal_or_acq_rel_fn_t;
typedef decltype(hsa_signal_or_scacquire)* hsa_signal_or_scacquire_fn_t;
typedef decltype(hsa_signal_or_acquire)* hsa_signal_or_acquire_fn_t;
typedef decltype(hsa_signal_or_relaxed)* hsa_signal_or_relaxed_fn_t;
typedef decltype(hsa_signal_or_screlease)* hsa_signal_or_screlease_fn_t;
typedef decltype(hsa_signal_or_release)* hsa_signal_or_release_fn_t;
typedef decltype(hsa_signal_xor_scacq_screl)* hsa_signal_xor_scacq_screl_fn_t;
typedef decltype(hsa_signal_xor_acq_rel)* hsa_signal_xor_acq_rel_fn_t;
typedef decltype(hsa_signal_xor_scacquire)* hsa_signal_xor_scacquire_fn_t;
typedef decltype(hsa_signal_xor_acquire)* hsa_signal_xor_acquire_fn_t;
typedef decltype(hsa_signal_xor_relaxed)* hsa_signal_xor_relaxed_fn_t;
typedef decltype(hsa_signal_xor_screlease)* hsa_signal_xor_screlease_fn_t;
typedef decltype(hsa_signal_xor_release)* hsa_signal_xor_release_fn_t;
typedef decltype(hsa_signal_wait_scacquire)* hsa_signal_wait_scacquire_fn_t;
typedef decltype(hsa_signal_wait_relaxed)* hsa_signal_wait_relaxed_fn_t;
typedef decltype(hsa_signal_wait_acquire)* hsa_signal_wait_acquire_fn_t;
typedef decltype(hsa_signal_group_create)* hsa_signal_group_create_fn_t;
typedef decltype(hsa_signal_group_destroy)* hsa_signal_group_destroy_fn_t;
typedef decltype(hsa_signal_group_wait_any_scacquire)* hsa_signal_group_wait_any_scacquire_fn_t;
typedef decltype(hsa_signal_group_wait_any_relaxed)* hsa_signal_group_wait_any_relaxed_fn_t;
typedef decltype(hsa_queue_create)* hsa_queue_create_fn_t;
typedef decltype(hsa_soft_queue_create)* hsa_soft_queue_create_fn_t;
typedef decltype(hsa_queue_destroy)* hsa_queue_destroy_fn_t;
typedef decltype(hsa_queue_inactivate)* hsa_queue_inactivate_fn_t;
typedef decltype(hsa_queue_load_read_index_acquire)* hsa_queue_load_read_index_acquire_fn_t;
typedef decltype(hsa_queue_load_read_index_scacquire)* hsa_queue_load_read_index_scacquire_fn_t;
typedef decltype(hsa_queue_load_read_index_relaxed)* hsa_queue_load_read_index_relaxed_fn_t;
typedef decltype(hsa_queue_load_write_index_acquire)* hsa_queue_load_write_index_acquire_fn_t;
typedef decltype(hsa_queue_load_write_index_scacquire)* hsa_queue_load_write_index_scacquire_fn_t;
typedef decltype(hsa_queue_load_write_index_relaxed)* hsa_queue_load_write_index_relaxed_fn_t;
typedef decltype(hsa_queue_store_write_index_relaxed)* hsa_queue_store_write_index_relaxed_fn_t;
typedef decltype(hsa_queue_store_write_index_release)* hsa_queue_store_write_index_release_fn_t;
typedef decltype(hsa_queue_store_write_index_screlease)* hsa_queue_store_write_index_screlease_fn_t;
typedef decltype(hsa_queue_cas_write_index_acq_rel)* hsa_queue_cas_write_index_acq_rel_fn_t;
typedef decltype(hsa_queue_cas_write_index_scacq_screl)* hsa_queue_cas_write_index_scacq_screl_fn_t;
typedef decltype(hsa_queue_cas_write_index_acquire)* hsa_queue_cas_write_index_acquire_fn_t;
typedef decltype(hsa_queue_cas_write_index_scacquire)* hsa_queue_cas_write_index_scacquire_fn_t;
typedef decltype(hsa_queue_cas_write_index_relaxed)* hsa_queue_cas_write_index_relaxed_fn_t;
typedef decltype(hsa_queue_cas_write_index_release)* hsa_queue_cas_write_index_release_fn_t;
typedef decltype(hsa_queue_cas_write_index_screlease)* hsa_queue_cas_write_index_screlease_fn_t;
typedef decltype(hsa_queue_add_write_index_acq_rel)* hsa_queue_add_write_index_acq_rel_fn_t;
typedef decltype(hsa_queue_add_write_index_scacq_screl)* hsa_queue_add_write_index_scacq_screl_fn_t;
typedef decltype(hsa_queue_add_write_index_acquire)* hsa_queue_add_write_index_acquire_fn_t;
typedef decltype(hsa_queue_add_write_index_scacquire)* hsa_queue_add_write_index_scacquire_fn_t;
typedef decltype(hsa_queue_add_write_index_relaxed)* hsa_queue_add_write_index_relaxed_fn_t;
typedef decltype(hsa_queue_add_write_index_release)* hsa_queue_add_write_index_release_fn_t;
typedef decltype(hsa_queue_add_write_index_screlease)* hsa_queue_add_write_index_screlease_fn_t;
typedef decltype(hsa_queue_store_read_index_relaxed)* hsa_queue_store_read_index_relaxed_fn_t;
typedef decltype(hsa_queue_store_read_index_release)* hsa_queue_store_read_index_release_fn_t;
typedef decltype(hsa_queue_store_read_index_screlease)* hsa_queue_store_read_index_screlease_fn_t;
typedef decltype(hsa_region_get_info)* hsa_region_get_info_fn_t;
typedef decltype(hsa_agent_iterate_regions)* hsa_agent_iterate_regions_fn_t;
typedef decltype(hsa_memory_allocate)* hsa_memory_allocate_fn_t;
typedef decltype(hsa_memory_free)* hsa_memory_free_fn_t;
typedef decltype(hsa_memory_copy)* hsa_memory_copy_fn_t;
typedef decltype(hsa_memory_assign_agent)* hsa_memory_assign_agent_fn_t;
typedef decltype(hsa_memory_register)* hsa_memory_register_fn_t;
typedef decltype(hsa_memory_deregister)* hsa_memory_deregister_fn_t;
typedef decltype(hsa_isa_from_name)* hsa_isa_from_name_fn_t;
typedef decltype(hsa_agent_iterate_isas)* hsa_agent_iterate_isas_fn_t;
typedef decltype(hsa_isa_get_info)* hsa_isa_get_info_fn_t;
typedef decltype(hsa_isa_get_info_alt)* hsa_isa_get_info_alt_fn_t;
typedef decltype(hsa_isa_get_exception_policies)* hsa_isa_get_exception_policies_fn_t;
typedef decltype(hsa_isa_get_round_method)* hsa_isa_get_round_method_fn_t;
typedef decltype(hsa_wavefront_get_info)* hsa_wavefront_get_info_fn_t;
typedef decltype(hsa_isa_iterate_wavefronts)* hsa_isa_iterate_wavefronts_fn_t;
typedef decltype(hsa_isa_compatible)* hsa_isa_compatible_fn_t;
typedef decltype(hsa_code_object_reader_create_from_file)* hsa_code_object_reader_create_from_file_fn_t;
typedef decltype(hsa_code_object_reader_create_from_memory)* hsa_code_object_reader_create_from_memory_fn_t;
typedef decltype(hsa_code_object_reader_destroy)* hsa_code_object_reader_destroy_fn_t;
typedef decltype(hsa_executable_create)* hsa_executable_create_fn_t;
typedef decltype(hsa_executable_create_alt)* hsa_executable_create_alt_fn_t;
typedef decltype(hsa_executable_destroy)* hsa_executable_destroy_fn_t;
typedef decltype(hsa_executable_load_program_code_object)* hsa_executable_load_program_code_object_fn_t;
typedef decltype(hsa_executable_load_agent_code_object)* hsa_executable_load_agent_code_object_fn_t;
typedef decltype(hsa_executable_freeze)* hsa_executable_freeze_fn_t;
typedef decltype(hsa_executable_get_info)* hsa_executable_get_info_fn_t;
typedef decltype(hsa_executable_global_variable_define)* hsa_executable_global_variable_define_fn_t;
typedef decltype(hsa_executable_agent_global_variable_define)* hsa_executable_agent_global_variable_define_fn_t;
typedef decltype(hsa_executable_readonly_variable_define)* hsa_executable_readonly_variable_define_fn_t;
typedef decltype(hsa_executable_validate)* hsa_executable_validate_fn_t;
typedef decltype(hsa_executable_validate_alt)* hsa_executable_validate_alt_fn_t;
typedef decltype(hsa_executable_get_symbol)* hsa_executable_get_symbol_fn_t;
typedef decltype(hsa_executable_get_symbol_by_name)* hsa_executable_get_symbol_by_name_fn_t;
typedef decltype(hsa_executable_symbol_get_info)* hsa_executable_symbol_get_info_fn_t;
typedef decltype(hsa_executable_iterate_symbols)* hsa_executable_iterate_symbols_fn_t;
typedef decltype(hsa_executable_iterate_agent_symbols)* hsa_executable_iterate_agent_symbols_fn_t;
typedef decltype(hsa_executable_iterate_program_symbols)* hsa_executable_iterate_program_symbols_fn_t;
typedef decltype(hsa_code_object_serialize)* hsa_code_object_serialize_fn_t;
typedef decltype(hsa_code_object_deserialize)* hsa_code_object_deserialize_fn_t;
typedef decltype(hsa_code_object_destroy)* hsa_code_object_destroy_fn_t;
typedef decltype(hsa_code_object_get_info)* hsa_code_object_get_info_fn_t;
typedef decltype(hsa_executable_load_code_object)* hsa_executable_load_code_object_fn_t;
typedef decltype(hsa_code_object_get_symbol)* hsa_code_object_get_symbol_fn_t;
typedef decltype(hsa_code_object_get_symbol_from_name)* hsa_code_object_get_symbol_from_name_fn_t;
typedef decltype(hsa_code_symbol_get_info)* hsa_code_symbol_get_info_fn_t;
typedef decltype(hsa_code_object_iterate_symbols)* hsa_code_object_iterate_symbols_fn_t;

typedef decltype(hsa_ext_program_create)* hsa_ext_program_create_fn_t;
typedef decltype(hsa_ext_program_destroy)* hsa_ext_program_destroy_fn_t;
typedef decltype(hsa_ext_program_add_module)* hsa_ext_program_add_module_fn_t;
typedef decltype(hsa_ext_program_iterate_modules)* hsa_ext_program_iterate_modules_fn_t;
typedef decltype(hsa_ext_program_get_info)* hsa_ext_program_get_info_fn_t;
typedef decltype(hsa_ext_program_finalize)* hsa_ext_program_finalize_fn_t;

typedef decltype(hsa_ext_image_get_capability)* hsa_ext_image_get_capability_fn_t;
typedef decltype(hsa_ext_image_get_capability_with_layout)* hsa_ext_image_get_capability_with_layout_fn_t;
typedef decltype(hsa_ext_image_data_get_info)* hsa_ext_image_data_get_info_fn_t;
typedef decltype(hsa_ext_image_data_get_info_with_layout)* hsa_ext_image_data_get_info_with_layout_fn_t;
typedef decltype(hsa_ext_image_create)* hsa_ext_image_create_fn_t;
typedef decltype(hsa_ext_image_create_with_layout)* hsa_ext_image_create_with_layout_fn_t;
typedef decltype(hsa_ext_image_destroy)* hsa_ext_image_destroy_fn_t;
typedef decltype(hsa_ext_image_copy)* hsa_ext_image_copy_fn_t;
typedef decltype(hsa_ext_image_import)* hsa_ext_image_import_fn_t;
typedef decltype(hsa_ext_image_export)* hsa_ext_image_export_fn_t;
typedef decltype(hsa_ext_image_clear)* hsa_ext_image_clear_fn_t;
typedef decltype(hsa_ext_sampler_create)* hsa_ext_sampler_create_fn_t;
typedef decltype(hsa_ext_sampler_destroy)* hsa_ext_sampler_destroy_fn_t;

typedef decltype(hsa_amd_coherency_get_type)* hsa_amd_coherency_get_type_fn_t;
typedef decltype(hsa_amd_coherency_set_type)* hsa_amd_coherency_set_type_fn_t;
typedef decltype(hsa_amd_profiling_set_profiler_enabled)* hsa_amd_profiling_set_profiler_enabled_fn_t;
typedef decltype(hsa_amd_profiling_async_copy_enable)* hsa_amd_profiling_async_copy_enable_fn_t;
typedef decltype(hsa_amd_profiling_get_dispatch_time)* hsa_amd_profiling_get_dispatch_time_fn_t;
typedef decltype(hsa_amd_profiling_get_async_copy_time)* hsa_amd_profiling_get_async_copy_time_fn_t;
typedef decltype(hsa_amd_profiling_convert_tick_to_system_domain)* hsa_amd_profiling_convert_tick_to_system_domain_fn_t;
typedef decltype(hsa_amd_signal_create)* hsa_amd_signal_create_fn_t;
typedef decltype(hsa_amd_signal_async_handler)* hsa_amd_signal_async_handler_fn_t;
typedef decltype(hsa_amd_async_function)* hsa_amd_async_function_fn_t;
typedef decltype(hsa_amd_signal_wait_any)* hsa_amd_signal_wait_any_fn_t;
typedef decltype(hsa_amd_image_get_info_max_dim)* hsa_amd_image_get_info_max_dim_fn_t;
typedef decltype(hsa_amd_queue_cu_set_mask)* hsa_amd_queue_cu_set_mask_fn_t;
typedef decltype(hsa_amd_memory_pool_get_info)* hsa_amd_memory_pool_get_info_fn_t;
typedef decltype(hsa_amd_agent_iterate_memory_pools)* hsa_amd_agent_iterate_memory_pools_fn_t;
typedef decltype(hsa_amd_memory_pool_allocate)* hsa_amd_memory_pool_allocate_fn_t;
typedef decltype(hsa_amd_memory_pool_free)* hsa_amd_memory_pool_free_fn_t;
typedef decltype(hsa_amd_memory_async_copy)* hsa_amd_memory_async_copy_fn_t;
typedef decltype(hsa_amd_memory_async_copy_rect)* hsa_amd_memory_async_copy_rect_fn_t;
typedef decltype(hsa_amd_agent_memory_pool_get_info)* hsa_amd_agent_memory_pool_get_info_fn_t;
typedef decltype(hsa_amd_agents_allow_access)* hsa_amd_agents_allow_access_fn_t;
typedef decltype(hsa_amd_memory_pool_can_migrate)* hsa_amd_memory_pool_can_migrate_fn_t;
typedef decltype(hsa_amd_memory_migrate)* hsa_amd_memory_migrate_fn_t;
typedef decltype(hsa_amd_memory_lock)* hsa_amd_memory_lock_fn_t;
typedef decltype(hsa_amd_memory_unlock)* hsa_amd_memory_unlock_fn_t;
typedef decltype(hsa_amd_memory_fill)* hsa_amd_memory_fill_fn_t;
typedef decltype(hsa_amd_interop_map_buffer)* hsa_amd_interop_map_buffer_fn_t;
typedef decltype(hsa_amd_interop_unmap_buffer)* hsa_amd_interop_unmap_buffer_fn_t;
typedef decltype(hsa_amd_image_create)* hsa_amd_image_create_fn_t;
typedef decltype(hsa_amd_pointer_info)* hsa_amd_pointer_info_fn_t;
typedef decltype(hsa_amd_pointer_info_set_userdata)* hsa_amd_pointer_info_set_userdata_fn_t;
typedef decltype(hsa_amd_ipc_memory_create)* hsa_amd_ipc_memory_create_fn_t;
typedef decltype(hsa_amd_ipc_memory_attach)* hsa_amd_ipc_memory_attach_fn_t;
typedef decltype(hsa_amd_ipc_memory_detach)* hsa_amd_ipc_memory_detach_fn_t;
typedef decltype(hsa_amd_ipc_signal_create)* hsa_amd_ipc_signal_create_fn_t;
typedef decltype(hsa_amd_ipc_signal_attach)* hsa_amd_ipc_signal_attach_fn_t;
typedef decltype(hsa_amd_queue_set_priority)* hsa_amd_queue_set_priority_fn_t;

typedef decltype(hsa_ven_amd_loader_query_host_address)* hsa_ven_amd_loader_query_host_address_fn_t;
typedef decltype(hsa_ven_amd_loader_query_segment_descriptors)* hsa_ven_amd_loader_query_segment_descriptors_fn_t;
typedef decltype(hsa_ven_amd_loader_query_executable)* hsa_ven_amd_loader_query_executable_fn_t;
typedef decltype(hsa_ven_amd_loader_executable_iterate_loaded_code_objects)* hsa_ven_amd_loader_executable_iterate_loaded_code_objects_fn_t;
typedef decltype(hsa_ven_amd_loader_loaded_code_object_get_info)* hsa_ven_amd_loader_loaded_code_object_get_info_fn_t;

typedef decltype(hsa_ven_amd_aqlprofile_version_major)* hsa_ven_amd_aqlprofile_version_major_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_version_minor)* hsa_ven_amd_aqlprofile_version_minor_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_validate_event)* hsa_ven_amd_aqlprofile_validate_event_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_start)* hsa_ven_amd_aqlprofile_start_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_stop)* hsa_ven_amd_aqlprofile_stop_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_read)* hsa_ven_amd_aqlprofile_read_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_legacy_get_pm4)* hsa_ven_amd_aqlprofile_legacy_get_pm4_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_get_info)* hsa_ven_amd_aqlprofile_get_info_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_iterate_data)* hsa_ven_amd_aqlprofile_iterate_data_fn_t;
typedef decltype(hsa_ven_amd_aqlprofile_error_string)* hsa_ven_amd_aqlprofile_error_string_fn_t;



#endif // _HSARTMODULEDECLS_H_

