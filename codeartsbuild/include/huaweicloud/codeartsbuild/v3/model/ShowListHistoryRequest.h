
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowListHistoryRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowListHistoryRequest_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowListHistoryRequest
    : public ModelBase
{
public:
    ShowListHistoryRequest();
    virtual ~ShowListHistoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowListHistoryRequest members

    /// <summary>
    /// 构建的任务ID [获取项目下构建任务列表](https://support.huaweicloud.com/api-codeci/ShowJobListByProjectId.html)； 编辑构建任务时，浏览器URL末尾的32位数字、字母组合的字符串。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 分页页码， 表示从此页开始查询， offset大于等于0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，limit小于等于100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 距今天的时间区间（单位：天），interval小于等于30
    /// </summary>

    int32_t getInterval() const;
    bool intervalIsSet() const;
    void unsetinterval();
    void setInterval(int32_t value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t interval_;
    bool intervalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowListHistoryRequest& dereference_from_shared_ptr(std::shared_ptr<ShowListHistoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowListHistoryRequest_H_
