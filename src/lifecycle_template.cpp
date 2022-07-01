#include "lifecycle_component_template/lifecycle_component_template.hpp"

namespace sample
{

// ========== コンストラクタ ========== //
LifecycleComponentTemplate::LifecycleComponentTemplate(
  const std::string& node_name,
  const std::string& ns,
  const rclcpp::NodeOptions& options
): rclcpp_lifecycle::LifecycleNode(node_name, ns, options)
{

}

// ========== デストラクタ ========== //
LifecycleComponentTemplate::~LifecycleComponentTemplate()
{
  RCLCPP_INFO(this->get_logger(), "Destroying");
  
}

// ========== Configure ========== //
CallbackReturn LifecycleComponentTemplate::on_configure(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_configure() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Activate ========== //
CallbackReturn LifecycleComponentTemplate::on_activate(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_activate() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Deactivate ========== //
CallbackReturn LifecycleComponentTemplate::on_deactivate(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_deactivate() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Cleanup ========== //
CallbackReturn LifecycleComponentTemplate::on_cleanup(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_cleanup() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Shutdown ========== //
CallbackReturn LifecycleComponentTemplate::on_shutdown(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_shutdown() was called.");
  
  return CallbackReturn::SUCCESS;
}

} // namespace sample

#include "rclcpp_components/register_node_macro.hpp"

RCLCPP_COMPONENTS_REGISTER_NODE(sample::LifecycleComponentTemplate)