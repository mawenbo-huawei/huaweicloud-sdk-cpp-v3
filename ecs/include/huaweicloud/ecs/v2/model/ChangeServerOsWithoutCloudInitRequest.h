
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ChangeServerOsWithoutCloudInitRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerOsWithoutCloudInitRequest
    : public ModelBase
{
public:
    ChangeServerOsWithoutCloudInitRequest();
    virtual ~ChangeServerOsWithoutCloudInitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerOsWithoutCloudInitRequest members

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeServerOsWithoutCloudInitRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ChangeServerOsWithoutCloudInitRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    ChangeServerOsWithoutCloudInitRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ChangeServerOsWithoutCloudInitRequest& dereference_from_shared_ptr(std::shared_ptr<ChangeServerOsWithoutCloudInitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitRequest_H_
