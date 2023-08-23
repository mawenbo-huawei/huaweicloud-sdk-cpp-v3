
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UserWithPrivilege_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UserWithPrivilege_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户及其权限。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UserWithPrivilege
    : public ModelBase
{
public:
    UserWithPrivilege();
    virtual ~UserWithPrivilege();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UserWithPrivilege members

    /// <summary>
    /// 用户名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否为只读权限。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool readonly_;
    bool readonlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UserWithPrivilege_H_
