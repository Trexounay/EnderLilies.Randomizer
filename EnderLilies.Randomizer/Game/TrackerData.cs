using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    struct TrackedItem
    {
    }

    class TrackerData
    {
        Dictionary<string, TrackedItem> items = new Dictionary<string, TrackedItem>()
        {
            { "stone_tablet", new TrackedItem()},
        };
    }
}
