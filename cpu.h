
// If this variable is set to true, detailed output
// is displayed during the simulation. For use in
// debugging
extern BOOL verbose;

// This stores the number of page frames in physical
// memory. It is set when the simulation starts running
// (see documentation).
extern unsigned int num_page_frames;

//This procedure (called by the MMU) causes the hardware to
//issue a page fault trap. It specifies which virtual page
//caused the page fault (i.e. the virtual page was not
//in memory).
void  issue_page_fault_trap(VPAGE_NUMBER vpage);
