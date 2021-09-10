

#include "huaweicloud/ocr/v1/model/RecognizeGeneralTextRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




RecognizeGeneralTextRequest::RecognizeGeneralTextRequest()
{
    bodyIsSet_ = false;
}

RecognizeGeneralTextRequest::~RecognizeGeneralTextRequest() = default;

void RecognizeGeneralTextRequest::validate()
{
}

web::json::value RecognizeGeneralTextRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RecognizeGeneralTextRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GeneralTextRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


GeneralTextRequestBody RecognizeGeneralTextRequest::getBody() const
{
    return body_;
}

void RecognizeGeneralTextRequest::setBody(const GeneralTextRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RecognizeGeneralTextRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RecognizeGeneralTextRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


