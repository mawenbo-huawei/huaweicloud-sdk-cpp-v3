

#include "huaweicloud/ecs/v2/model/BatchDeleteServerTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerTagsRequest::BatchDeleteServerTagsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteServerTagsRequest::~BatchDeleteServerTagsRequest() = default;

void BatchDeleteServerTagsRequest::validate()
{
}

web::json::value BatchDeleteServerTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchDeleteServerTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteServerTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string BatchDeleteServerTagsRequest::getServerId() const
{
    return serverId_;
}

void BatchDeleteServerTagsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool BatchDeleteServerTagsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void BatchDeleteServerTagsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

BatchDeleteServerTagsRequestBody BatchDeleteServerTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteServerTagsRequest::setBody(const BatchDeleteServerTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteServerTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteServerTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


