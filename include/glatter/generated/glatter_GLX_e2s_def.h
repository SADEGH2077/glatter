/*
Copyright 2017 Ioannis Makris

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// This file was generated by glatter.py script.



GLATTER_INLINE_OR_NOT
const char* enum_to_string_GLX(GLenum e)
{
    switch (e) {
#if defined(GLX_AMD_gpu_association)
        case 0x1f00: return "GLX_GPU_VENDOR_AMD";
        case 0x1f01: return "GLX_GPU_RENDERER_STRING_AMD";
        case 0x1f02: return "GLX_GPU_OPENGL_VERSION_STRING_AMD";
#endif
#if defined(GLX_ARB_create_context)
        case 0x2091: return "GLX_CONTEXT_MAJOR_VERSION_ARB";
        case 0x2092: return "GLX_CONTEXT_MINOR_VERSION_ARB";
        case 0x2094: return "GLX_CONTEXT_FLAGS_ARB";
#endif
#if defined(GLX_ARB_vertex_buffer_object)
        case 0x2095: return "GLX_CONTEXT_ALLOW_BUFFER_BYTE_ORDER_MISMATCH_ARB";
#endif
#if defined(GLX_ARB_context_flush_control)
        case 0x2097: return "GLX_CONTEXT_RELEASE_BEHAVIOR_ARB";
        case 0x2098: return "GLX_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB";
#endif
#if defined(GLX_NV_float_buffer)
        case 0x20b0: return "GLX_FLOAT_COMPONENTS_NV";
#endif
#if defined(GLX_EXT_fbconfig_packed_float)
        case 0x20b1: return "GLX_RGBA_UNSIGNED_FLOAT_TYPE_EXT";
#endif
        case 0x20b2:
#if defined(GLX_ARB_framebuffer_sRGB)
                    return "GLX_FRAMEBUFFER_SRGB_CAPABLE_ARB";
#endif
#if defined(GLX_EXT_framebuffer_sRGB)
                    return "GLX_FRAMEBUFFER_SRGB_CAPABLE_EXT";
#endif
            break;
#if defined(GLX_NV_multisample_coverage)
        case 0x20b3: return "GLX_COLOR_SAMPLES_NV";
#endif
#if defined(GLX_ARB_fbconfig_float)
        case 0x20b9: return "GLX_RGBA_FLOAT_TYPE_ARB";
#endif
#if defined(GLX_NV_video_out)
        case 0x20c3: return "GLX_VIDEO_OUT_COLOR_NV";
        case 0x20c4: return "GLX_VIDEO_OUT_ALPHA_NV";
        case 0x20c5: return "GLX_VIDEO_OUT_DEPTH_NV";
        case 0x20c6: return "GLX_VIDEO_OUT_COLOR_AND_ALPHA_NV";
        case 0x20c7: return "GLX_VIDEO_OUT_COLOR_AND_DEPTH_NV";
        case 0x20c8: return "GLX_VIDEO_OUT_FRAME_NV";
        case 0x20c9: return "GLX_VIDEO_OUT_FIELD_1_NV";
        case 0x20ca: return "GLX_VIDEO_OUT_FIELD_2_NV";
        case 0x20cb: return "GLX_VIDEO_OUT_STACKED_FIELDS_1_2_NV";
        case 0x20cc: return "GLX_VIDEO_OUT_STACKED_FIELDS_2_1_NV";
#endif
#if defined(GLX_NV_video_capture)
        case 0x20cd: return "GLX_DEVICE_ID_NV";
        case 0x20ce: return "GLX_UNIQUE_ID_NV";
        case 0x20cf: return "GLX_NUM_VIDEO_CAPTURE_SLOTS_NV";
#endif
#if defined(GLX_EXT_texture_from_pixmap)
        case 0x20d0: return "GLX_BIND_TO_TEXTURE_RGB_EXT";
        case 0x20d1: return "GLX_BIND_TO_TEXTURE_RGBA_EXT";
        case 0x20d2: return "GLX_BIND_TO_MIPMAP_TEXTURE_EXT";
        case 0x20d3: return "GLX_BIND_TO_TEXTURE_TARGETS_EXT";
        case 0x20d4: return "GLX_Y_INVERTED_EXT";
        case 0x20d5: return "GLX_TEXTURE_FORMAT_EXT";
        case 0x20d6: return "GLX_TEXTURE_TARGET_EXT";
        case 0x20d7: return "GLX_MIPMAP_TEXTURE_EXT";
        case 0x20d8: return "GLX_TEXTURE_FORMAT_NONE_EXT";
        case 0x20d9: return "GLX_TEXTURE_FORMAT_RGB_EXT";
        case 0x20da: return "GLX_TEXTURE_FORMAT_RGBA_EXT";
        case 0x20db: return "GLX_TEXTURE_1D_EXT";
        case 0x20dc: return "GLX_TEXTURE_2D_EXT";
        case 0x20dd: return "GLX_TEXTURE_RECTANGLE_EXT";
#endif
        case 0x20de:
#if defined(GLX_EXT_texture_from_pixmap)
                    return "GLX_FRONT_EXT";
#endif
#if defined(GLX_EXT_texture_from_pixmap)
                    return "GLX_FRONT_LEFT_EXT";
#endif
            break;
#if defined(GLX_EXT_texture_from_pixmap)
        case 0x20df: return "GLX_FRONT_RIGHT_EXT";
#endif
        case 0x20e0:
#if defined(GLX_EXT_texture_from_pixmap)
                    return "GLX_BACK_EXT";
#endif
#if defined(GLX_EXT_texture_from_pixmap)
                    return "GLX_BACK_LEFT_EXT";
#endif
            break;
#if defined(GLX_EXT_texture_from_pixmap)
        case 0x20e1: return "GLX_BACK_RIGHT_EXT";
        case 0x20e2: return "GLX_AUX0_EXT";
        case 0x20e3: return "GLX_AUX1_EXT";
        case 0x20e4: return "GLX_AUX2_EXT";
        case 0x20e5: return "GLX_AUX3_EXT";
        case 0x20e6: return "GLX_AUX4_EXT";
        case 0x20e7: return "GLX_AUX5_EXT";
        case 0x20e8: return "GLX_AUX6_EXT";
        case 0x20e9: return "GLX_AUX7_EXT";
        case 0x20ea: return "GLX_AUX8_EXT";
        case 0x20eb: return "GLX_AUX9_EXT";
#endif
#if defined(GLX_NV_present_video)
        case 0x20f0: return "GLX_NUM_VIDEO_SLOTS_NV";
#endif
#if defined(GLX_EXT_swap_control)
        case 0x20f1: return "GLX_SWAP_INTERVAL_EXT";
        case 0x20f2: return "GLX_MAX_SWAP_INTERVAL_EXT";
#endif
#if defined(GLX_EXT_swap_control_tear)
        case 0x20f3: return "GLX_LATE_SWAPS_TEAR_EXT";
#endif
#if defined(GLX_EXT_buffer_age)
        case 0x20f4: return "GLX_BACK_BUFFER_AGE_EXT";
#endif
#if defined(GLX_EXT_stereo_tree)
        case 0x20f5: return "GLX_STEREO_TREE_EXT";
#endif
#if defined(GLX_EXT_libglvnd)
        case 0x20f6: return "GLX_VENDOR_NAMES_EXT";
#endif
#if defined(GLX_NV_robustness_video_memory_purge)
        case 0x20f7: return "GLX_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV";
#endif
#if defined(GLX_AMD_gpu_association)
        case 0x21a2: return "GLX_GPU_FASTEST_TARGET_GPUS_AMD";
        case 0x21a3: return "GLX_GPU_RAM_AMD";
        case 0x21a4: return "GLX_GPU_CLOCK_AMD";
        case 0x21a5: return "GLX_GPU_NUM_PIPES_AMD";
        case 0x21a6: return "GLX_GPU_NUM_SIMD_AMD";
        case 0x21a7: return "GLX_GPU_NUM_RB_AMD";
        case 0x21a8: return "GLX_GPU_NUM_SPI_AMD";
#endif
#if defined(GLX_ARB_create_context_no_error)
        case 0x31b3: return "GLX_CONTEXT_OPENGL_NO_ERROR_ARB";
#endif
        case 0x8000:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_NONE";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_NONE_EXT";
#endif
            break;
        case 0x8001:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_SLOW_CONFIG";
#endif
#if defined(GLX_EXT_visual_rating)
                    return "GLX_SLOW_VISUAL_EXT";
#endif
            break;
        case 0x8002:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_TRUE_COLOR";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_TRUE_COLOR_EXT";
#endif
            break;
        case 0x8003:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_DIRECT_COLOR";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_DIRECT_COLOR_EXT";
#endif
            break;
        case 0x8004:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_PSEUDO_COLOR";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_PSEUDO_COLOR_EXT";
#endif
            break;
        case 0x8005:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_STATIC_COLOR";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_STATIC_COLOR_EXT";
#endif
            break;
        case 0x8006:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_GRAY_SCALE";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_GRAY_SCALE_EXT";
#endif
            break;
        case 0x8007:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_STATIC_GRAY";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_STATIC_GRAY_EXT";
#endif
            break;
        case 0x8008:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_TRANSPARENT_RGB";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_TRANSPARENT_RGB_EXT";
#endif
            break;
        case 0x8009:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_TRANSPARENT_INDEX";
#endif
#if defined(GLX_EXT_visual_info)
                    return "GLX_TRANSPARENT_INDEX_EXT";
#endif
            break;
#if defined(GLX_EXT_import_context)
        case 0x800a: return "GLX_SHARE_CONTEXT_EXT";
#endif
        case 0x800b:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_VISUAL_ID";
#endif
#if defined(GLX_EXT_import_context)
                    return "GLX_VISUAL_ID_EXT";
#endif
            break;
        case 0x800c:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_SCREEN";
#endif
#if defined(GLX_EXT_import_context)
                    return "GLX_SCREEN_EXT";
#endif
            break;
        case 0x800d:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_NON_CONFORMANT_CONFIG";
#endif
#if defined(GLX_EXT_visual_rating)
                    return "GLX_NON_CONFORMANT_VISUAL_EXT";
#endif
            break;
        case 0x8010:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_DRAWABLE_TYPE";
#endif
#if defined(GLX_SGIX_fbconfig)
                    return "GLX_DRAWABLE_TYPE_SGIX";
#endif
            break;
        case 0x8011:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_RENDER_TYPE";
#endif
#if defined(GLX_SGIX_fbconfig)
                    return "GLX_RENDER_TYPE_SGIX";
#endif
            break;
        case 0x8012:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_X_RENDERABLE";
#endif
#if defined(GLX_SGIX_fbconfig)
                    return "GLX_X_RENDERABLE_SGIX";
#endif
            break;
        case 0x8013:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_FBCONFIG_ID";
#endif
#if defined(GLX_SGIX_fbconfig)
                    return "GLX_FBCONFIG_ID_SGIX";
#endif
            break;
        case 0x8014:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_RGBA_TYPE";
#endif
#if defined(GLX_SGIX_fbconfig)
                    return "GLX_RGBA_TYPE_SGIX";
#endif
            break;
        case 0x8015:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_COLOR_INDEX_TYPE";
#endif
#if defined(GLX_SGIX_fbconfig)
                    return "GLX_COLOR_INDEX_TYPE_SGIX";
#endif
            break;
        case 0x8016:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_MAX_PBUFFER_WIDTH";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_MAX_PBUFFER_WIDTH_SGIX";
#endif
            break;
        case 0x8017:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_MAX_PBUFFER_HEIGHT";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_MAX_PBUFFER_HEIGHT_SGIX";
#endif
            break;
        case 0x8018:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_MAX_PBUFFER_PIXELS";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_MAX_PBUFFER_PIXELS_SGIX";
#endif
            break;
#if defined(GLX_SGIX_pbuffer)
        case 0x8019: return "GLX_OPTIMAL_PBUFFER_WIDTH_SGIX";
        case 0x801a: return "GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX";
#endif
        case 0x801b:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_PRESERVED_CONTENTS";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_PRESERVED_CONTENTS_SGIX";
#endif
            break;
        case 0x801c:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_LARGEST_PBUFFER";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_LARGEST_PBUFFER_SGIX";
#endif
            break;
        case 0x801d:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_WIDTH";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_WIDTH_SGIX";
#endif
            break;
        case 0x801e:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_HEIGHT";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_HEIGHT_SGIX";
#endif
            break;
        case 0x801f:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_EVENT_MASK";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_EVENT_MASK_SGIX";
#endif
            break;
        case 0x8020:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_DAMAGED";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_DAMAGED_SGIX";
#endif
            break;
        case 0x8021:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_SAVED";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_SAVED_SGIX";
#endif
            break;
        case 0x8022:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_WINDOW";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_WINDOW_SGIX";
#endif
            break;
        case 0x8023:
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
                    return "GLX_PBUFFER";
#endif
#if defined(GLX_SGIX_pbuffer)
                    return "GLX_PBUFFER_SGIX";
#endif
            break;
#if defined(_DM_BUFFER_H_)
        case 0x8024: return "GLX_DIGITAL_MEDIA_PBUFFER_SGIX";
#endif
#if defined(GLX_SGIS_blended_overlay)
        case 0x8025: return "GLX_BLENDED_RGBA_SGIS";
#endif
#if defined(GLX_SGIS_shared_multisample)
        case 0x8026: return "GLX_MULTISAMPLE_SUB_RECT_WIDTH_SGIS";
        case 0x8027: return "GLX_MULTISAMPLE_SUB_RECT_HEIGHT_SGIS";
#endif
#if defined(GLX_SGIX_visual_select_group)
        case 0x8028: return "GLX_VISUAL_SELECT_GROUP_SGIX";
#endif
#if defined(GLX_SGIX_hyperpipe)
        case 0x8030: return "GLX_HYPERPIPE_ID_SGIX";
#endif
#if defined(GLX_VERSION_1_3) || defined(GLX_H)
        case 0x8040: return "GLX_PBUFFER_HEIGHT";
        case 0x8041: return "GLX_PBUFFER_WIDTH";
#endif
#if defined(GLX_3DFX_multisample)
        case 0x8050: return "GLX_SAMPLE_BUFFERS_3DFX";
        case 0x8051: return "GLX_SAMPLES_3DFX";
#endif
#if defined(GLX_OML_swap_method)
        case 0x8060: return "GLX_SWAP_METHOD_OML";
        case 0x8061: return "GLX_SWAP_EXCHANGE_OML";
        case 0x8062: return "GLX_SWAP_COPY_OML";
        case 0x8063: return "GLX_SWAP_UNDEFINED_OML";
#endif
#if defined(GLX_INTEL_swap_event)
        case 0x8180: return "GLX_EXCHANGE_COMPLETE_INTEL";
        case 0x8181: return "GLX_COPY_COMPLETE_INTEL";
        case 0x8182: return "GLX_FLIP_COMPLETE_INTEL";
#endif
#if defined(GLX_MESA_query_renderer)
        case 0x8183: return "GLX_RENDERER_VENDOR_ID_MESA";
        case 0x8184: return "GLX_RENDERER_DEVICE_ID_MESA";
        case 0x8185: return "GLX_RENDERER_VERSION_MESA";
        case 0x8186: return "GLX_RENDERER_ACCELERATED_MESA";
        case 0x8187: return "GLX_RENDERER_VIDEO_MEMORY_MESA";
        case 0x8188: return "GLX_RENDERER_UNIFIED_MEMORY_ARCHITECTURE_MESA";
        case 0x8189: return "GLX_RENDERER_PREFERRED_PROFILE_MESA";
        case 0x818a: return "GLX_RENDERER_OPENGL_CORE_PROFILE_VERSION_MESA";
        case 0x818b: return "GLX_RENDERER_OPENGL_COMPATIBILITY_PROFILE_VERSION_MESA";
        case 0x818c: return "GLX_RENDERER_OPENGL_ES_PROFILE_VERSION_MESA";
        case 0x818d: return "GLX_RENDERER_OPENGL_ES2_PROFILE_VERSION_MESA";
        case 0x818e: return "GLX_RENDERER_ID_MESA";
#endif
#if defined(GLX_ARB_create_context_robustness)
        case 0x8252: return "GLX_LOSE_CONTEXT_ON_RESET_ARB";
        case 0x8256: return "GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB";
        case 0x8261: return "GLX_NO_RESET_NOTIFICATION_ARB";
#endif
#if defined(GLX_ARB_create_context_profile)
        case 0x9126: return "GLX_CONTEXT_PROFILE_MASK_ARB";
#endif
        case 0x186a0:
#if defined(GLX_VERSION_1_4) || defined(GLX_H)
                    return "GLX_SAMPLE_BUFFERS";
#endif
#if defined(GLX_ARB_multisample)
                    return "GLX_SAMPLE_BUFFERS_ARB";
#endif
#if defined(GLX_SGIS_multisample)
                    return "GLX_SAMPLE_BUFFERS_SGIS";
#endif
            break;
        case 0x186a1:
#if defined(GLX_NV_multisample_coverage)
                    return "GLX_COVERAGE_SAMPLES_NV";
#endif
#if defined(GLX_VERSION_1_4) || defined(GLX_H)
                    return "GLX_SAMPLES";
#endif
#if defined(GLX_ARB_multisample)
                    return "GLX_SAMPLES_ARB";
#endif
#if defined(GLX_SGIS_multisample)
                    return "GLX_SAMPLES_SGIS";
#endif
            break;
    }
    return "<UNKNOWN ENUM>";
}


