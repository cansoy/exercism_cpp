#include "lasagna_master.h"

namespace lasagna_master
{
    int preparationTime(const std::vector<std::string> &layers, int avgTime)
    {
        return static_cast<int>(layers.size()) * avgTime;
    }

    amount quantities(const std::vector<std::string> &layers)
    {
        amount amount_needed{};
        for (const auto &layer : layers)
        {
            if (layer == "noodles")
            {
                amount_needed.noodles += 50;
            }
            else if (layer == "sauce")
            {
                amount_needed.sauce += 0.2;
            }
        }
        return amount_needed;
    }

    void addSecretIngredient(std::vector<std::string> &myList,
                             const std::vector<std::string> &friendIngredients)
    {
        myList.back() = friendIngredients.back();
    }

    void addSecretIngredient(std::vector<std::string> &myList,
                             const std::string &secretIngredient)
    {
        myList.back() = secretIngredient;
    }

    std::vector<double> scaleRecipe(const std::vector<double> &quantities, int portions)
    {
        std::vector<double> quantitiesNeeded{};
        const double scaleFactor{portions / 2.0};
        for (const double quantity : quantities)
        {
            quantitiesNeeded.push_back(quantity * scaleFactor);
        }
        return quantitiesNeeded;
    }

}