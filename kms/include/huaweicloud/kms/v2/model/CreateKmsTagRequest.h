
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKmsTagRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKmsTagRequest_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/kms/v2/model/CreateKmsTagRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateKmsTagRequest
    : public ModelBase
{
public:
    CreateKmsTagRequest();
    virtual ~CreateKmsTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateKmsTagRequest members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateKmsTagRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateKmsTagRequestBody& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    CreateKmsTagRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateKmsTagRequest& dereference_from_shared_ptr(std::shared_ptr<CreateKmsTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateKmsTagRequest_H_
