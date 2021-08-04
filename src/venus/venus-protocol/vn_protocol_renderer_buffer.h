/* This file is generated by venus-protocol.  See vn_protocol_renderer.h. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_RENDERER_BUFFER_H
#define VN_PROTOCOL_RENDERER_BUFFER_H

#include "vn_protocol_renderer_structs.h"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpointer-arith"
#pragma GCC diagnostic ignored "-Wunused-parameter"

/* struct VkExternalMemoryBufferCreateInfo chain */

static inline void *
vn_decode_VkExternalMemoryBufferCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkExternalMemoryBufferCreateInfo_self_temp(struct vn_cs_decoder *dec, VkExternalMemoryBufferCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags(dec, &val->handleTypes);
}

static inline void
vn_decode_VkExternalMemoryBufferCreateInfo_temp(struct vn_cs_decoder *dec, VkExternalMemoryBufferCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkExternalMemoryBufferCreateInfo_pnext_temp(dec);
    vn_decode_VkExternalMemoryBufferCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkExternalMemoryBufferCreateInfo_handle_self(VkExternalMemoryBufferCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->handleTypes */
}

static inline void
vn_replace_VkExternalMemoryBufferCreateInfo_handle(VkExternalMemoryBufferCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            vn_replace_VkExternalMemoryBufferCreateInfo_handle_self((VkExternalMemoryBufferCreateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkBufferOpaqueCaptureAddressCreateInfo chain */

static inline void *
vn_decode_VkBufferOpaqueCaptureAddressCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkBufferOpaqueCaptureAddressCreateInfo_self_temp(struct vn_cs_decoder *dec, VkBufferOpaqueCaptureAddressCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_uint64_t(dec, &val->opaqueCaptureAddress);
}

static inline void
vn_decode_VkBufferOpaqueCaptureAddressCreateInfo_temp(struct vn_cs_decoder *dec, VkBufferOpaqueCaptureAddressCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkBufferOpaqueCaptureAddressCreateInfo_pnext_temp(dec);
    vn_decode_VkBufferOpaqueCaptureAddressCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkBufferOpaqueCaptureAddressCreateInfo_handle_self(VkBufferOpaqueCaptureAddressCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->opaqueCaptureAddress */
}

static inline void
vn_replace_VkBufferOpaqueCaptureAddressCreateInfo_handle(VkBufferOpaqueCaptureAddressCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
            vn_replace_VkBufferOpaqueCaptureAddressCreateInfo_handle_self((VkBufferOpaqueCaptureAddressCreateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkBufferCreateInfo chain */

static inline void *
vn_decode_VkBufferCreateInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    VkBaseOutStructure *pnext;
    VkStructureType stype;

    if (!vn_decode_simple_pointer(dec))
        return NULL;

    vn_decode_VkStructureType(dec, &stype);
    switch ((int32_t)stype) {
    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkExternalMemoryBufferCreateInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkBufferCreateInfo_pnext_temp(dec);
            vn_decode_VkExternalMemoryBufferCreateInfo_self_temp(dec, (VkExternalMemoryBufferCreateInfo *)pnext);
        }
        break;
    case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkBufferOpaqueCaptureAddressCreateInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkBufferCreateInfo_pnext_temp(dec);
            vn_decode_VkBufferOpaqueCaptureAddressCreateInfo_self_temp(dec, (VkBufferOpaqueCaptureAddressCreateInfo *)pnext);
        }
        break;
    default:
        /* unexpected struct */
        pnext = NULL;
        vn_cs_decoder_set_fatal(dec);
        break;
    }

    return pnext;
}

static inline void
vn_decode_VkBufferCreateInfo_self_temp(struct vn_cs_decoder *dec, VkBufferCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkFlags(dec, &val->flags);
    vn_decode_VkDeviceSize(dec, &val->size);
    vn_decode_VkFlags(dec, &val->usage);
    vn_decode_VkSharingMode(dec, &val->sharingMode);
    vn_decode_uint32_t(dec, &val->queueFamilyIndexCount);
    if (vn_peek_array_size(dec)) {
        const size_t array_size = vn_decode_array_size(dec, val->queueFamilyIndexCount);
        val->pQueueFamilyIndices = vn_cs_decoder_alloc_temp(dec, sizeof(*val->pQueueFamilyIndices) * array_size);
        if (!val->pQueueFamilyIndices) return;
        vn_decode_uint32_t_array(dec, (uint32_t *)val->pQueueFamilyIndices, array_size);
    } else {
        vn_decode_array_size(dec, 0);
        val->pQueueFamilyIndices = NULL;
    }
}

static inline void
vn_decode_VkBufferCreateInfo_temp(struct vn_cs_decoder *dec, VkBufferCreateInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkBufferCreateInfo_pnext_temp(dec);
    vn_decode_VkBufferCreateInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkBufferCreateInfo_handle_self(VkBufferCreateInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->flags */
    /* skip val->size */
    /* skip val->usage */
    /* skip val->sharingMode */
    /* skip val->queueFamilyIndexCount */
    /* skip val->pQueueFamilyIndices */
}

static inline void
vn_replace_VkBufferCreateInfo_handle(VkBufferCreateInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO:
            vn_replace_VkBufferCreateInfo_handle_self((VkBufferCreateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
            vn_replace_VkExternalMemoryBufferCreateInfo_handle_self((VkExternalMemoryBufferCreateInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
            vn_replace_VkBufferOpaqueCaptureAddressCreateInfo_handle_self((VkBufferOpaqueCaptureAddressCreateInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkBindBufferMemoryDeviceGroupInfo chain */

static inline void
vn_encode_VkBindBufferMemoryDeviceGroupInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkBindBufferMemoryDeviceGroupInfo_self(struct vn_cs_encoder *enc, const VkBindBufferMemoryDeviceGroupInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_uint32_t(enc, &val->deviceIndexCount);
    if (val->pDeviceIndices) {
        vn_encode_array_size(enc, val->deviceIndexCount);
        vn_encode_uint32_t_array(enc, val->pDeviceIndices, val->deviceIndexCount);
    } else {
        vn_encode_array_size(enc, 0);
    }
}

static inline void
vn_encode_VkBindBufferMemoryDeviceGroupInfo(struct vn_cs_encoder *enc, const VkBindBufferMemoryDeviceGroupInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO });
    vn_encode_VkBindBufferMemoryDeviceGroupInfo_pnext(enc, val->pNext);
    vn_encode_VkBindBufferMemoryDeviceGroupInfo_self(enc, val);
}

static inline void *
vn_decode_VkBindBufferMemoryDeviceGroupInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkBindBufferMemoryDeviceGroupInfo_self_temp(struct vn_cs_decoder *dec, VkBindBufferMemoryDeviceGroupInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_uint32_t(dec, &val->deviceIndexCount);
    if (vn_peek_array_size(dec)) {
        const size_t array_size = vn_decode_array_size(dec, val->deviceIndexCount);
        val->pDeviceIndices = vn_cs_decoder_alloc_temp(dec, sizeof(*val->pDeviceIndices) * array_size);
        if (!val->pDeviceIndices) return;
        vn_decode_uint32_t_array(dec, (uint32_t *)val->pDeviceIndices, array_size);
    } else {
        vn_decode_array_size(dec, 0);
        val->pDeviceIndices = NULL;
    }
}

static inline void
vn_decode_VkBindBufferMemoryDeviceGroupInfo_temp(struct vn_cs_decoder *dec, VkBindBufferMemoryDeviceGroupInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkBindBufferMemoryDeviceGroupInfo_pnext_temp(dec);
    vn_decode_VkBindBufferMemoryDeviceGroupInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkBindBufferMemoryDeviceGroupInfo_handle_self(VkBindBufferMemoryDeviceGroupInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    /* skip val->deviceIndexCount */
    /* skip val->pDeviceIndices */
}

static inline void
vn_replace_VkBindBufferMemoryDeviceGroupInfo_handle(VkBindBufferMemoryDeviceGroupInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            vn_replace_VkBindBufferMemoryDeviceGroupInfo_handle_self((VkBindBufferMemoryDeviceGroupInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkBindBufferMemoryInfo chain */

static inline void
vn_encode_VkBindBufferMemoryInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    const VkBaseInStructure *pnext = val;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkBindBufferMemoryInfo_pnext(enc, pnext->pNext);
            vn_encode_VkBindBufferMemoryDeviceGroupInfo_self(enc, (const VkBindBufferMemoryDeviceGroupInfo *)pnext);
            return;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkBindBufferMemoryInfo_self(struct vn_cs_encoder *enc, const VkBindBufferMemoryInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkBuffer(enc, &val->buffer);
    vn_encode_VkDeviceMemory(enc, &val->memory);
    vn_encode_VkDeviceSize(enc, &val->memoryOffset);
}

static inline void
vn_encode_VkBindBufferMemoryInfo(struct vn_cs_encoder *enc, const VkBindBufferMemoryInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO });
    vn_encode_VkBindBufferMemoryInfo_pnext(enc, val->pNext);
    vn_encode_VkBindBufferMemoryInfo_self(enc, val);
}

static inline void *
vn_decode_VkBindBufferMemoryInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    VkBaseOutStructure *pnext;
    VkStructureType stype;

    if (!vn_decode_simple_pointer(dec))
        return NULL;

    vn_decode_VkStructureType(dec, &stype);
    switch ((int32_t)stype) {
    case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
        pnext = vn_cs_decoder_alloc_temp(dec, sizeof(VkBindBufferMemoryDeviceGroupInfo));
        if (pnext) {
            pnext->sType = stype;
            pnext->pNext = vn_decode_VkBindBufferMemoryInfo_pnext_temp(dec);
            vn_decode_VkBindBufferMemoryDeviceGroupInfo_self_temp(dec, (VkBindBufferMemoryDeviceGroupInfo *)pnext);
        }
        break;
    default:
        /* unexpected struct */
        pnext = NULL;
        vn_cs_decoder_set_fatal(dec);
        break;
    }

    return pnext;
}

static inline void
vn_decode_VkBindBufferMemoryInfo_self_temp(struct vn_cs_decoder *dec, VkBindBufferMemoryInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkBuffer_lookup(dec, &val->buffer);
    vn_decode_VkDeviceMemory_lookup(dec, &val->memory);
    vn_decode_VkDeviceSize(dec, &val->memoryOffset);
}

static inline void
vn_decode_VkBindBufferMemoryInfo_temp(struct vn_cs_decoder *dec, VkBindBufferMemoryInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkBindBufferMemoryInfo_pnext_temp(dec);
    vn_decode_VkBindBufferMemoryInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkBindBufferMemoryInfo_handle_self(VkBindBufferMemoryInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    vn_replace_VkBuffer_handle(&val->buffer);
    vn_replace_VkDeviceMemory_handle(&val->memory);
    /* skip val->memoryOffset */
}

static inline void
vn_replace_VkBindBufferMemoryInfo_handle(VkBindBufferMemoryInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO:
            vn_replace_VkBindBufferMemoryInfo_handle_self((VkBindBufferMemoryInfo *)pnext);
            break;
        case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
            vn_replace_VkBindBufferMemoryDeviceGroupInfo_handle_self((VkBindBufferMemoryDeviceGroupInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkBufferMemoryRequirementsInfo2 chain */

static inline void *
vn_decode_VkBufferMemoryRequirementsInfo2_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkBufferMemoryRequirementsInfo2_self_temp(struct vn_cs_decoder *dec, VkBufferMemoryRequirementsInfo2 *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkBuffer_lookup(dec, &val->buffer);
}

static inline void
vn_decode_VkBufferMemoryRequirementsInfo2_temp(struct vn_cs_decoder *dec, VkBufferMemoryRequirementsInfo2 *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkBufferMemoryRequirementsInfo2_pnext_temp(dec);
    vn_decode_VkBufferMemoryRequirementsInfo2_self_temp(dec, val);
}

static inline void
vn_replace_VkBufferMemoryRequirementsInfo2_handle_self(VkBufferMemoryRequirementsInfo2 *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    vn_replace_VkBuffer_handle(&val->buffer);
}

static inline void
vn_replace_VkBufferMemoryRequirementsInfo2_handle(VkBufferMemoryRequirementsInfo2 *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
            vn_replace_VkBufferMemoryRequirementsInfo2_handle_self((VkBufferMemoryRequirementsInfo2 *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

/* struct VkBufferDeviceAddressInfo chain */

static inline void
vn_encode_VkBufferDeviceAddressInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkBufferDeviceAddressInfo_self(struct vn_cs_encoder *enc, const VkBufferDeviceAddressInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkBuffer(enc, &val->buffer);
}

static inline void
vn_encode_VkBufferDeviceAddressInfo(struct vn_cs_encoder *enc, const VkBufferDeviceAddressInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO });
    vn_encode_VkBufferDeviceAddressInfo_pnext(enc, val->pNext);
    vn_encode_VkBufferDeviceAddressInfo_self(enc, val);
}

static inline void *
vn_decode_VkBufferDeviceAddressInfo_pnext_temp(struct vn_cs_decoder *dec)
{
    /* no known/supported struct */
    if (vn_decode_simple_pointer(dec))
        vn_cs_decoder_set_fatal(dec);
    return NULL;
}

static inline void
vn_decode_VkBufferDeviceAddressInfo_self_temp(struct vn_cs_decoder *dec, VkBufferDeviceAddressInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_decode_VkBuffer_lookup(dec, &val->buffer);
}

static inline void
vn_decode_VkBufferDeviceAddressInfo_temp(struct vn_cs_decoder *dec, VkBufferDeviceAddressInfo *val)
{
    VkStructureType stype;
    vn_decode_VkStructureType(dec, &stype);
    if (stype != VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO)
        vn_cs_decoder_set_fatal(dec);

    val->sType = stype;
    val->pNext = vn_decode_VkBufferDeviceAddressInfo_pnext_temp(dec);
    vn_decode_VkBufferDeviceAddressInfo_self_temp(dec, val);
}

static inline void
vn_replace_VkBufferDeviceAddressInfo_handle_self(VkBufferDeviceAddressInfo *val)
{
    /* skip val->sType */
    /* skip val->pNext */
    vn_replace_VkBuffer_handle(&val->buffer);
}

static inline void
vn_replace_VkBufferDeviceAddressInfo_handle(VkBufferDeviceAddressInfo *val)
{
    struct VkBaseOutStructure *pnext = (struct VkBaseOutStructure *)val;

    do {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO:
            vn_replace_VkBufferDeviceAddressInfo_handle_self((VkBufferDeviceAddressInfo *)pnext);
            break;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    } while (pnext);
}

static inline void vn_decode_vkGetBufferMemoryRequirements_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkGetBufferMemoryRequirements *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_VkBuffer_lookup(dec, &args->buffer);
    if (vn_decode_simple_pointer(dec)) {
        args->pMemoryRequirements = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pMemoryRequirements));
        if (!args->pMemoryRequirements) return;
        vn_decode_VkMemoryRequirements_partial_temp(dec, args->pMemoryRequirements);
    } else {
        args->pMemoryRequirements = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkGetBufferMemoryRequirements_args_handle(struct vn_command_vkGetBufferMemoryRequirements *args)
{
    vn_replace_VkDevice_handle(&args->device);
    vn_replace_VkBuffer_handle(&args->buffer);
    /* skip args->pMemoryRequirements */
}

static inline void vn_encode_vkGetBufferMemoryRequirements_reply(struct vn_cs_encoder *enc, const struct vn_command_vkGetBufferMemoryRequirements *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkGetBufferMemoryRequirements_EXT});

    /* skip args->device */
    /* skip args->buffer */
    if (vn_encode_simple_pointer(enc, args->pMemoryRequirements))
        vn_encode_VkMemoryRequirements(enc, args->pMemoryRequirements);
}

static inline void vn_decode_vkBindBufferMemory_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkBindBufferMemory *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_VkBuffer_lookup(dec, &args->buffer);
    vn_decode_VkDeviceMemory_lookup(dec, &args->memory);
    vn_decode_VkDeviceSize(dec, &args->memoryOffset);
}

static inline void vn_replace_vkBindBufferMemory_args_handle(struct vn_command_vkBindBufferMemory *args)
{
    vn_replace_VkDevice_handle(&args->device);
    vn_replace_VkBuffer_handle(&args->buffer);
    vn_replace_VkDeviceMemory_handle(&args->memory);
    /* skip args->memoryOffset */
}

static inline void vn_encode_vkBindBufferMemory_reply(struct vn_cs_encoder *enc, const struct vn_command_vkBindBufferMemory *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkBindBufferMemory_EXT});

    vn_encode_VkResult(enc, &args->ret);
    /* skip args->device */
    /* skip args->buffer */
    /* skip args->memory */
    /* skip args->memoryOffset */
}

static inline void vn_decode_vkCreateBuffer_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkCreateBuffer *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    if (vn_decode_simple_pointer(dec)) {
        args->pCreateInfo = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pCreateInfo));
        if (!args->pCreateInfo) return;
        vn_decode_VkBufferCreateInfo_temp(dec, (VkBufferCreateInfo *)args->pCreateInfo);
    } else {
        args->pCreateInfo = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
    if (vn_decode_simple_pointer(dec)) {
        vn_cs_decoder_set_fatal(dec);
    } else {
        args->pAllocator = NULL;
    }
    if (vn_decode_simple_pointer(dec)) {
        args->pBuffer = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pBuffer));
        if (!args->pBuffer) return;
        vn_decode_VkBuffer(dec, args->pBuffer);
    } else {
        args->pBuffer = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkCreateBuffer_args_handle(struct vn_command_vkCreateBuffer *args)
{
    vn_replace_VkDevice_handle(&args->device);
    if (args->pCreateInfo)
        vn_replace_VkBufferCreateInfo_handle((VkBufferCreateInfo *)args->pCreateInfo);
    /* skip args->pAllocator */
    /* skip args->pBuffer */
}

static inline void vn_encode_vkCreateBuffer_reply(struct vn_cs_encoder *enc, const struct vn_command_vkCreateBuffer *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkCreateBuffer_EXT});

    vn_encode_VkResult(enc, &args->ret);
    /* skip args->device */
    /* skip args->pCreateInfo */
    /* skip args->pAllocator */
    if (vn_encode_simple_pointer(enc, args->pBuffer))
        vn_encode_VkBuffer(enc, args->pBuffer);
}

static inline void vn_decode_vkDestroyBuffer_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkDestroyBuffer *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_VkBuffer_lookup(dec, &args->buffer);
    if (vn_decode_simple_pointer(dec)) {
        vn_cs_decoder_set_fatal(dec);
    } else {
        args->pAllocator = NULL;
    }
}

static inline void vn_replace_vkDestroyBuffer_args_handle(struct vn_command_vkDestroyBuffer *args)
{
    vn_replace_VkDevice_handle(&args->device);
    vn_replace_VkBuffer_handle(&args->buffer);
    /* skip args->pAllocator */
}

static inline void vn_encode_vkDestroyBuffer_reply(struct vn_cs_encoder *enc, const struct vn_command_vkDestroyBuffer *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkDestroyBuffer_EXT});

    /* skip args->device */
    /* skip args->buffer */
    /* skip args->pAllocator */
}

static inline void vn_decode_vkBindBufferMemory2_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkBindBufferMemory2 *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    vn_decode_uint32_t(dec, &args->bindInfoCount);
    if (vn_peek_array_size(dec)) {
        const uint32_t iter_count = vn_decode_array_size(dec, args->bindInfoCount);
        args->pBindInfos = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pBindInfos) * iter_count);
        if (!args->pBindInfos) return;
        for (uint32_t i = 0; i < iter_count; i++)
            vn_decode_VkBindBufferMemoryInfo_temp(dec, &((VkBindBufferMemoryInfo *)args->pBindInfos)[i]);
    } else {
        vn_decode_array_size(dec, 0);
        args->pBindInfos = NULL;
    }
}

static inline void vn_replace_vkBindBufferMemory2_args_handle(struct vn_command_vkBindBufferMemory2 *args)
{
    vn_replace_VkDevice_handle(&args->device);
    /* skip args->bindInfoCount */
    if (args->pBindInfos) {
       for (uint32_t i = 0; i < args->bindInfoCount; i++)
            vn_replace_VkBindBufferMemoryInfo_handle(&((VkBindBufferMemoryInfo *)args->pBindInfos)[i]);
    }
}

static inline void vn_encode_vkBindBufferMemory2_reply(struct vn_cs_encoder *enc, const struct vn_command_vkBindBufferMemory2 *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkBindBufferMemory2_EXT});

    vn_encode_VkResult(enc, &args->ret);
    /* skip args->device */
    /* skip args->bindInfoCount */
    /* skip args->pBindInfos */
}

static inline void vn_decode_vkGetBufferMemoryRequirements2_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkGetBufferMemoryRequirements2 *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    if (vn_decode_simple_pointer(dec)) {
        args->pInfo = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pInfo));
        if (!args->pInfo) return;
        vn_decode_VkBufferMemoryRequirementsInfo2_temp(dec, (VkBufferMemoryRequirementsInfo2 *)args->pInfo);
    } else {
        args->pInfo = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
    if (vn_decode_simple_pointer(dec)) {
        args->pMemoryRequirements = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pMemoryRequirements));
        if (!args->pMemoryRequirements) return;
        vn_decode_VkMemoryRequirements2_partial_temp(dec, args->pMemoryRequirements);
    } else {
        args->pMemoryRequirements = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkGetBufferMemoryRequirements2_args_handle(struct vn_command_vkGetBufferMemoryRequirements2 *args)
{
    vn_replace_VkDevice_handle(&args->device);
    if (args->pInfo)
        vn_replace_VkBufferMemoryRequirementsInfo2_handle((VkBufferMemoryRequirementsInfo2 *)args->pInfo);
    /* skip args->pMemoryRequirements */
}

static inline void vn_encode_vkGetBufferMemoryRequirements2_reply(struct vn_cs_encoder *enc, const struct vn_command_vkGetBufferMemoryRequirements2 *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkGetBufferMemoryRequirements2_EXT});

    /* skip args->device */
    /* skip args->pInfo */
    if (vn_encode_simple_pointer(enc, args->pMemoryRequirements))
        vn_encode_VkMemoryRequirements2(enc, args->pMemoryRequirements);
}

static inline void vn_decode_vkGetBufferOpaqueCaptureAddress_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkGetBufferOpaqueCaptureAddress *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    if (vn_decode_simple_pointer(dec)) {
        args->pInfo = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pInfo));
        if (!args->pInfo) return;
        vn_decode_VkBufferDeviceAddressInfo_temp(dec, (VkBufferDeviceAddressInfo *)args->pInfo);
    } else {
        args->pInfo = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkGetBufferOpaqueCaptureAddress_args_handle(struct vn_command_vkGetBufferOpaqueCaptureAddress *args)
{
    vn_replace_VkDevice_handle(&args->device);
    if (args->pInfo)
        vn_replace_VkBufferDeviceAddressInfo_handle((VkBufferDeviceAddressInfo *)args->pInfo);
}

static inline void vn_encode_vkGetBufferOpaqueCaptureAddress_reply(struct vn_cs_encoder *enc, const struct vn_command_vkGetBufferOpaqueCaptureAddress *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkGetBufferOpaqueCaptureAddress_EXT});

    vn_encode_uint64_t(enc, &args->ret);
    /* skip args->device */
    /* skip args->pInfo */
}

static inline void vn_decode_vkGetBufferDeviceAddress_args_temp(struct vn_cs_decoder *dec, struct vn_command_vkGetBufferDeviceAddress *args)
{
    vn_decode_VkDevice_lookup(dec, &args->device);
    if (vn_decode_simple_pointer(dec)) {
        args->pInfo = vn_cs_decoder_alloc_temp(dec, sizeof(*args->pInfo));
        if (!args->pInfo) return;
        vn_decode_VkBufferDeviceAddressInfo_temp(dec, (VkBufferDeviceAddressInfo *)args->pInfo);
    } else {
        args->pInfo = NULL;
        vn_cs_decoder_set_fatal(dec);
    }
}

static inline void vn_replace_vkGetBufferDeviceAddress_args_handle(struct vn_command_vkGetBufferDeviceAddress *args)
{
    vn_replace_VkDevice_handle(&args->device);
    if (args->pInfo)
        vn_replace_VkBufferDeviceAddressInfo_handle((VkBufferDeviceAddressInfo *)args->pInfo);
}

static inline void vn_encode_vkGetBufferDeviceAddress_reply(struct vn_cs_encoder *enc, const struct vn_command_vkGetBufferDeviceAddress *args)
{
    vn_encode_VkCommandTypeEXT(enc, &(VkCommandTypeEXT){VK_COMMAND_TYPE_vkGetBufferDeviceAddress_EXT});

    vn_encode_VkDeviceAddress(enc, &args->ret);
    /* skip args->device */
    /* skip args->pInfo */
}

static inline void vn_dispatch_vkGetBufferMemoryRequirements(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkGetBufferMemoryRequirements args;

    if (!ctx->dispatch_vkGetBufferMemoryRequirements) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkGetBufferMemoryRequirements_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkGetBufferMemoryRequirements(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkGetBufferMemoryRequirements_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkBindBufferMemory(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkBindBufferMemory args;

    if (!ctx->dispatch_vkBindBufferMemory) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkBindBufferMemory_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkBindBufferMemory(ctx, &args);

#ifdef DEBUG
    if (!vn_cs_decoder_get_fatal(ctx->decoder) && vn_dispatch_should_log_result(args.ret))
        vn_dispatch_debug_log(ctx, "vkBindBufferMemory returned %d", args.ret);
#endif

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkBindBufferMemory_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkCreateBuffer(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkCreateBuffer args;

    if (!ctx->dispatch_vkCreateBuffer) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkCreateBuffer_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkCreateBuffer(ctx, &args);

#ifdef DEBUG
    if (!vn_cs_decoder_get_fatal(ctx->decoder) && vn_dispatch_should_log_result(args.ret))
        vn_dispatch_debug_log(ctx, "vkCreateBuffer returned %d", args.ret);
#endif

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkCreateBuffer_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkDestroyBuffer(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkDestroyBuffer args;

    if (!ctx->dispatch_vkDestroyBuffer) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkDestroyBuffer_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkDestroyBuffer(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkDestroyBuffer_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkBindBufferMemory2(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkBindBufferMemory2 args;

    if (!ctx->dispatch_vkBindBufferMemory2) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkBindBufferMemory2_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkBindBufferMemory2(ctx, &args);

#ifdef DEBUG
    if (!vn_cs_decoder_get_fatal(ctx->decoder) && vn_dispatch_should_log_result(args.ret))
        vn_dispatch_debug_log(ctx, "vkBindBufferMemory2 returned %d", args.ret);
#endif

    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkBindBufferMemory2_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkGetBufferMemoryRequirements2(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkGetBufferMemoryRequirements2 args;

    if (!ctx->dispatch_vkGetBufferMemoryRequirements2) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkGetBufferMemoryRequirements2_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkGetBufferMemoryRequirements2(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkGetBufferMemoryRequirements2_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkGetBufferOpaqueCaptureAddress(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkGetBufferOpaqueCaptureAddress args;

    if (!ctx->dispatch_vkGetBufferOpaqueCaptureAddress) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkGetBufferOpaqueCaptureAddress_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkGetBufferOpaqueCaptureAddress(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkGetBufferOpaqueCaptureAddress_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

static inline void vn_dispatch_vkGetBufferDeviceAddress(struct vn_dispatch_context *ctx, VkCommandFlagsEXT flags)
{
    struct vn_command_vkGetBufferDeviceAddress args;

    if (!ctx->dispatch_vkGetBufferDeviceAddress) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    vn_decode_vkGetBufferDeviceAddress_args_temp(ctx->decoder, &args);
    if (!args.device) {
        vn_cs_decoder_set_fatal(ctx->decoder);
        return;
    }

    if (!vn_cs_decoder_get_fatal(ctx->decoder))
        ctx->dispatch_vkGetBufferDeviceAddress(ctx, &args);


    if (!vn_cs_decoder_get_fatal(ctx->decoder) && (flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT))
       vn_encode_vkGetBufferDeviceAddress_reply(ctx->encoder, &args);

    vn_cs_decoder_reset_temp_pool(ctx->decoder);
}

#pragma GCC diagnostic pop

#endif /* VN_PROTOCOL_RENDERER_BUFFER_H */
