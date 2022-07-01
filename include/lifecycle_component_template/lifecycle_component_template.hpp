#ifndef SAMPLE__LIFECYCLE_TEMPLATE_HPP_
#define SAMPLE__LIFECYCLE_TEMPLATE_HPP_

#include <memory>
#include <string>

#include "rclcpp_lifecycle/lifecycle_node.hpp"
#include "rclcpp/rclcpp.hpp"

using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;


namespace sample
{

class LifecycleComponentTemplate : public rclcpp_lifecycle::LifecycleNode
{
public:
  LifecycleComponentTemplate(
    const std::string& node_name,
    const std::string& ns = "",
    const rclcpp::NodeOptions& options = rclcpp::NodeOptions()
  );
  ~LifecycleComponentTemplate();

protected:
  CallbackReturn on_configure(const rclcpp_lifecycle::State &);
  CallbackReturn on_activate(const rclcpp_lifecycle::State &);
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State &);
  CallbackReturn on_cleanup(const rclcpp_lifecycle::State &);
  CallbackReturn on_shutdown(const rclcpp_lifecycle::State &);
};

} // namespace sample

#endif // SAMPLE__LIFECYCLE_TEMPLATE_HPP_
