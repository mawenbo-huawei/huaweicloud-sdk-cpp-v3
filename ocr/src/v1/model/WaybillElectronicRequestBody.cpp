

#include "huaweicloud/ocr/v1/model/WaybillElectronicRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WaybillElectronicRequestBody::WaybillElectronicRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

WaybillElectronicRequestBody::~WaybillElectronicRequestBody() = default;

void WaybillElectronicRequestBody::validate()
{
}

web::json::value WaybillElectronicRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}

bool WaybillElectronicRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string WaybillElectronicRequestBody::getImage() const
{
    return image_;
}

void WaybillElectronicRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool WaybillElectronicRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void WaybillElectronicRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string WaybillElectronicRequestBody::getUrl() const
{
    return url_;
}

void WaybillElectronicRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WaybillElectronicRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void WaybillElectronicRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


