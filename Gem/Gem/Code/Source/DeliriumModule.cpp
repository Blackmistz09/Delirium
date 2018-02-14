
#include "Delirium_precompiled.h"
#include <platform_impl.h>

#include <AzCore/Memory/SystemAllocator.h>

#include "DeliriumSystemComponent.h"

#include <IGem.h>

namespace Delirium
{
    class DeliriumModule
        : public CryHooksModule
    {
    public:
        AZ_RTTI(DeliriumModule, "{A954D29F-B3E3-49F7-8D78-84F01130C5E5}", CryHooksModule);
        AZ_CLASS_ALLOCATOR(DeliriumModule, AZ::SystemAllocator, 0);

        DeliriumModule()
            : CryHooksModule()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                DeliriumSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<DeliriumSystemComponent>(),
            };
        }
    };
}

// DO NOT MODIFY THIS LINE UNLESS YOU RENAME THE GEM
// The first parameter should be GemName_GemIdLower
// The second should be the fully qualified name of the class above
AZ_DECLARE_MODULE_CLASS(Delirium_fee0620da2474d6b8bbacc80be4ae586, Delirium::DeliriumModule)
