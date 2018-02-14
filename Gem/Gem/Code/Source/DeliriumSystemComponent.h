
#pragma once

#include <AzCore/Component/Component.h>

#include <Delirium/DeliriumBus.h>

namespace Delirium
{
    class DeliriumSystemComponent
        : public AZ::Component
        , protected DeliriumRequestBus::Handler
    {
    public:
        AZ_COMPONENT(DeliriumSystemComponent, "{DFB50622-66B0-4A9A-8B54-E06270C9CD0C}");

        static void Reflect(AZ::ReflectContext* context);

        static void GetProvidedServices(AZ::ComponentDescriptor::DependencyArrayType& provided);
        static void GetIncompatibleServices(AZ::ComponentDescriptor::DependencyArrayType& incompatible);
        static void GetRequiredServices(AZ::ComponentDescriptor::DependencyArrayType& required);
        static void GetDependentServices(AZ::ComponentDescriptor::DependencyArrayType& dependent);

    protected:
        ////////////////////////////////////////////////////////////////////////
        // DeliriumRequestBus interface implementation

        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        // AZ::Component interface implementation
        void Init() override;
        void Activate() override;
        void Deactivate() override;
        ////////////////////////////////////////////////////////////////////////
    };
}
