

#include "huaweicloud/ecs/v2/model/ServerTags.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerTags::ServerTags()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

ServerTags::~ServerTags() = default;

void ServerTags::validate()
{
}

web::json::value ServerTags::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}

bool ServerTags::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string ServerTags::getKey() const
{
    return key_;
}

void ServerTags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ServerTags::keyIsSet() const
{
    return keyIsSet_;
}

void ServerTags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& ServerTags::getValues()
{
    return values_;
}

void ServerTags::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ServerTags::valuesIsSet() const
{
    return valuesIsSet_;
}

void ServerTags::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


