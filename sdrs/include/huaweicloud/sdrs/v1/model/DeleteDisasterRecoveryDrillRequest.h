
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteDisasterRecoveryDrillRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteDisasterRecoveryDrillRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  DeleteDisasterRecoveryDrillRequest
    : public ModelBase
{
public:
    DeleteDisasterRecoveryDrillRequest();
    virtual ~DeleteDisasterRecoveryDrillRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteDisasterRecoveryDrillRequest members

    /// <summary>
    /// 容灾演练的ID。
    /// </summary>

    std::string getDisasterRecoveryDrillId() const;
    bool disasterRecoveryDrillIdIsSet() const;
    void unsetdisasterRecoveryDrillId();
    void setDisasterRecoveryDrillId(const std::string& value);


protected:
    std::string disasterRecoveryDrillId_;
    bool disasterRecoveryDrillIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteDisasterRecoveryDrillRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteDisasterRecoveryDrillRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteDisasterRecoveryDrillRequest_H_
