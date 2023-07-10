﻿/*
 * LightweightVK
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#define VMA_VULKAN_VERSION 1003000
#define VMA_STATIC_VULKAN_FUNCTIONS 0
#define VMA_DYNAMIC_VULKAN_FUNCTIONS 1

#if !defined(VK_NO_PROTOTYPES)
#define VK_NO_PROTOTYPES
#endif // !defined(VK_NO_PROTOTYPES)

#include <volk.h>
#include <vk_mem_alloc.h>

namespace lvk {

VmaAllocator createVmaAllocator(VkPhysicalDevice physDev,
                                VkDevice device,
                                VkInstance instance,
                                uint32_t apiVersion);
uint32_t findQueueFamilyIndex(VkPhysicalDevice physDev, VkQueueFlags flags);

} // namespace lvk
