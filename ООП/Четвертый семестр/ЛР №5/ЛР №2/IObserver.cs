﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ЛР__2
{
    interface IObserver
    {
        void Notify(string msg, string heading);
    }
}
