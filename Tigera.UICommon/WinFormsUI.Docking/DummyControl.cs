using System;
using System.Windows.Forms;
namespace WinFormsUI.Docking
{
	internal class DummyControl : Control
	{
		public DummyControl()
		{
			base.SetStyle(ControlStyles.Selectable, false);
		}
	}
}
