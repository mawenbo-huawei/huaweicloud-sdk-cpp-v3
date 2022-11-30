

#include "huaweicloud/frs/v2/model/DetectFaceByFileIntlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByFileIntlRequest::DetectFaceByFileIntlRequest()
{
    bodyIsSet_ = false;
}

DetectFaceByFileIntlRequest::~DetectFaceByFileIntlRequest() = default;

void DetectFaceByFileIntlRequest::validate()
{
}

web::json::value DetectFaceByFileIntlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DetectFaceByFileIntlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DetectFaceByFileIntlRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DetectFaceByFileIntlRequestBody DetectFaceByFileIntlRequest::getBody() const
{
    return body_;
}

void DetectFaceByFileIntlRequest::setBody(const DetectFaceByFileIntlRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DetectFaceByFileIntlRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DetectFaceByFileIntlRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


