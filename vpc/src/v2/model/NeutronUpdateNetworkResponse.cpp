

#include "huaweicloud/vpc/v2/model/NeutronUpdateNetworkResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateNetworkResponse::NeutronUpdateNetworkResponse()
{
    networkIsSet_ = false;
}

NeutronUpdateNetworkResponse::~NeutronUpdateNetworkResponse() = default;

void NeutronUpdateNetworkResponse::validate()
{
}

web::json::value NeutronUpdateNetworkResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIsSet_) {
        val[utility::conversions::to_string_t("network")] = ModelBase::toJson(network_);
    }

    return val;
}

bool NeutronUpdateNetworkResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network"));
        if(!fieldValue.is_null())
        {
            NeutronNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetwork(refVal);
        }
    }
    return ok;
}

NeutronNetwork NeutronUpdateNetworkResponse::getNetwork() const
{
    return network_;
}

void NeutronUpdateNetworkResponse::setNetwork(const NeutronNetwork& value)
{
    network_ = value;
    networkIsSet_ = true;
}

bool NeutronUpdateNetworkResponse::networkIsSet() const
{
    return networkIsSet_;
}

void NeutronUpdateNetworkResponse::unsetnetwork()
{
    networkIsSet_ = false;
}

}
}
}
}
}


