
//This variable determines the size (in
//terms of number of entries) of the TLB.
extern unsigned int num_tlb_entries;

// This flag should be set to TRUE when there is a 
// tlb miss, false otherwise.
extern BOOL tlb_miss; 

// Initialize the TLB (called by the mmu)
void tlb_initialize();

// Returns a page frame number if there is a TLB hit. If there is a TLB
// miss, then it sets tlb_miss, above, to TRUE.  It sets the R
// bit of the entry and, if the specified operation is a STORE,
// sets the M bit.
PAGEFRAME_NUMBER tlb_lookup_vpage(VPAGE_NUMBER vpage, OPERATION op);

// Inserts a new mapping of virtual page to pageframe into the
// TLB. Also included in the entry are the values of the M and R
// bits specified. If no TLB entry is available, it evicts a
// TLB entry according to a clock algorithm, writing back the M 
// and R information to the MMU bitmaps (see documentation)
void tlb_insert_vpage(VPAGE_NUMBER new_vpage, PAGEFRAME_NUMBER new_pframe,
		BOOL new_rbit, BOOL new_mbit);

// This clears out the entry in the TLB for the specified
// virtual page, by clearing the valid bit for that entry.
void tlb_clear_entry(VPAGE_NUMBER vpage);

// This clears out the entire TLB, by clearing the
// valid bit for every entry.
void tlb_clear_all();

//Writes the M  & R bits in the each valid TLB
//entry back to the M & R MMU bitmaps.
void tlb_write_back_r_m_bits();

// Clears all the R bits in the TLB. Will be called
// by the OS at each clock interrupt.
void tlb_clear_R_bits();

