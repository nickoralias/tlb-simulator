
extern BOOL page_fault;

void pt_initialize_page_table();

// Using the page table, this looks up the page frame 
// corresponding to the specified virtual page.
PAGEFRAME_NUMBER pt_get_pframe_number(VPAGE_NUMBER vpage);

// This inserts into the page table the mapping of the 
// the specified virtual page to the specified page frame.
void pt_update_pagetable(VPAGE_NUMBER vpage, PAGEFRAME_NUMBER pframe);

// This clears the entry of a page table by clearing the present bit.
// It is called when a page is evicted from memory
void pt_clear_page_table_entry(VPAGE_NUMBER vpage);
