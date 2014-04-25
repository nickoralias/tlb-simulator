
void initialize_kernel();

void issue_page_writeback(VPAGE_NUMBER vpage, PAGEFRAME_NUMBER pframe);

extern unsigned int evicted_page_count;

extern unsigned int evicted_page_written_to_disk_count;

