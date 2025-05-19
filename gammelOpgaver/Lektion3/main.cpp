#include "item.h"
#include "order_line.h"
#include "productCatalog.h"
#include <iostream>

int main() {
    // Create a product catalog and add items
    product_catalog catalog;
    catalog.add_item(1, "LED Bulb", 29.99);
    catalog.add_item(2, "Smart Switch", 49.95);
    catalog.add_item(3, "Motion Sensor", 35.50);
    catalog.add_item(4, "Smart Dimmer", 59.99);
    
    // Retrieve items from the catalog
    const item* bulb = catalog.get_item(1);
    const item* switch_item = catalog.get_item(2);
    const item* sensor = catalog.get_item(3);
    const item* dimmer = catalog.get_item(4);
    
    // Create non-const copies for to_string() since it's not marked const
    item bulb_copy(*bulb);
    item switch_copy(*switch_item);
    item sensor_copy(*sensor);
    item dimmer_copy(*dimmer);
    
    // Display item information using to_string()
    std::cout << "Items in catalog:" << std::endl;
    std::cout << "Item 1: " << bulb_copy.to_string() << std::endl;
    std::cout << "Item 2: " << switch_copy.to_string() << std::endl;
    std::cout << "Item 3: " << sensor_copy.to_string() << std::endl;
    std::cout << "Item 4: " << dimmer_copy.to_string() << std::endl;
    
    // Create order lines
    order_line line1(bulb, 3);
    order_line line2(switch_item, 1);
    order_line line3(sensor, 2);
    
    // Display order line information
    std::cout << "\nOrder lines:" << std::endl;
    std::cout << "Line 1: " << line1.to_string() << std::endl;
    std::cout << "Line 2: " << line2.to_string() << std::endl;
    std::cout << "Line 3: " << line3.to_string() << std::endl;
    
    // Show subtotals for each order line
    std::cout << "\nSubtotals:" << std::endl;
    std::cout << "Line 1 subtotal: $" << line1.sub_total() << std::endl;
    std::cout << "Line 2 subtotal: $" << line2.sub_total() << std::endl;
    std::cout << "Line 3 subtotal: $" << line3.sub_total() << std::endl;
    
    // Get item IDs from order lines
    std::cout << "\nItem IDs from order lines:" << std::endl;
    std::cout << "Line 1 item ID: " << line1.get_item_id() << std::endl;
    std::cout << "Line 2 item ID: " << line2.get_item_id() << std::endl;
    std::cout << "Line 3 item ID: " << line3.get_item_id() << std::endl;
    
    // Add more items to an order line
    std::cout << "\nUpdating quantities:" << std::endl;
    std::cout << "Adding 2 more Smart Switches to line 2" << std::endl;
    line2.add(2);
    std::cout << "Updated line 2: " << line2.to_string() << std::endl;
    std::cout << "New subtotal: $" << line2.sub_total() << std::endl;
    
    // Calculate total order amount
    double total = line1.sub_total() + line2.sub_total() + line3.sub_total();
    std::cout << "\nTotal order amount: $" << total << std::endl;
    
    return 0;
}