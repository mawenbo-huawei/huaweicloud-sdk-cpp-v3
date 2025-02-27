

#include "huaweicloud/frs/v2/model/DetectLiveFaceByFileRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectLiveFaceByFileRequestBody::DetectLiveFaceByFileRequestBody()
{
    imageFileIsSet_ = false;
}

DetectLiveFaceByFileRequestBody::~DetectLiveFaceByFileRequestBody() = default;

void DetectLiveFaceByFileRequestBody::validate()
{
}

web::json::value DetectLiveFaceByFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}

bool DetectLiveFaceByFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}

HttpContent DetectLiveFaceByFileRequestBody::getImageFile() const
{
    return imageFile_;
}

void DetectLiveFaceByFileRequestBody::setImageFile(const HttpContent& value)
{
    imageFile_ = value;
    imageFileIsSet_ = true;
}

bool DetectLiveFaceByFileRequestBody::imageFileIsSet() const
{
    return imageFileIsSet_;
}

void DetectLiveFaceByFileRequestBody::unsetimageFile()
{
    imageFileIsSet_ = false;
}

}
}
}
}
}


