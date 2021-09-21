/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
#if !PACKER_CODE
# define DECLARED_UNPACK_BARRIER
class BARRIER
#else//PACKER_CODE
# define DECLARED_PACKER_BARRIER
class PACKER_BARRIER
#endif//PACKER_CODE

{
public:
  // UINT32 barrier
  // {
    //  0_31: 0xbabababa;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
    };
    uint32  u32;
  } barrier;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(BARRIER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_BAD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_BAD_EVENTHEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_BAD_EVENTHEADER
class FEBEX_BAD_EVENTHEADER
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_BAD_EVENTHEADER
class PACKER_FEBEX_BAD_EVENTHEADER
#endif//PACKER_CODE

{
public:
  // UINT32 badbad
  // {
    //  0_31: 0xbad00bad;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
    };
    uint32  u32;
  } badbad;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_BAD_EVENTHEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_GOOD_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_GOOD_EVENTHEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_GOOD_EVENTHEADER
class FEBEX_GOOD_EVENTHEADER
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_GOOD_EVENTHEADER
class PACKER_FEBEX_GOOD_EVENTHEADER
#endif//PACKER_CODE

{
public:
  // UINT32 febexcards
  // {
    //  0_07: n_febex_sfp0 = RANGE(0,64);
    //  8_15: n_febex_sfp1 = RANGE(0,64);
    // 16_23: n_febex_sfp2 = RANGE(0,64);
    // 24_31: n_febex_sfp3 = RANGE(0,64);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 n_febex_sfp0 : 8; // 0..7
      uint32 n_febex_sfp1 : 8; // 8..15
      uint32 n_febex_sfp2 : 8; // 16..23
      uint32 n_febex_sfp3 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 n_febex_sfp3 : 8; // 24..31
      uint32 n_febex_sfp2 : 8; // 16..23
      uint32 n_febex_sfp1 : 8; // 8..15
      uint32 n_febex_sfp0 : 8; // 0..7
#endif
    };
    uint32  u32;
  } febexcards;
  // UINT32 trig_length
  // {
    //  0_15: trace_length;
    // 16_31: trigger_delay;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trace_length : 16; // 0..15
      uint32 trigger_delay : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 trigger_delay : 16; // 16..31
      uint32 trace_length : 16; // 0..15
#endif
    };
    uint32  u32;
  } trig_length;
  // UINT32 energy_filter
  // {
    //  0_10: sum_b;
    // 11_20: gap;
    // 21_31: sum_a;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 sum_b : 11; // 0..10
      uint32 gap : 10; // 11..20
      uint32 sum_a : 11; // 21..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 sum_a : 11; // 21..31
      uint32 gap : 10; // 11..20
      uint32 sum_b : 11; // 0..10
#endif
    };
    uint32  u32;
  } energy_filter;
  // UINT32 polarity1
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity1;
  // UINT32 polarity2
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity2;
  // UINT32 polarity3
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity3;
  // UINT32 polarity4
  // {
    //  0_31: pola;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 pola : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pola : 32; // 0..31
#endif
    };
    uint32  u32;
  } polarity4;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_GOOD_EVENTHEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_EVENTHEADER.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_EVENTHEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_EVENTHEADER
class FEBEX_EVENTHEADER
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_EVENTHEADER
class PACKER_FEBEX_EVENTHEADER
#endif//PACKER_CODE

{
public:
  // select

    // good = FEBEX_GOOD_EVENTHEADER();
    // bad = FEBEX_BAD_EVENTHEADER();
  SINGLE(FEBEX_GOOD_EVENTHEADER,good);
  SINGLE(FEBEX_BAD_EVENTHEADER,bad);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_EVENTHEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_NOTRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_NOTRACE(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_NOTRACE
class FEBEX_NOTRACE
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_NOTRACE
class PACKER_FEBEX_NOTRACE
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 n_hit[16]);
  raw_array<DATA8,DATA8,16> n_hit;
  // MEMBER(DATA12 t[16] ZERO_SUPPRESS_MULTI(32));
  raw_array_multi_zero_suppress<DATA12,DATA12,16,32> t;
  // MEMBER(DATA32 e[16] ZERO_SUPPRESS_MULTI(32));
  raw_array_multi_zero_suppress<DATA32,DATA32,16,32> e;
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 255;
  // }
  // UINT32 data_size NOENCODE
  // {
    //  0_31: size;
  // }
  // UINT32 head NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 175;
  // }
  // UINT32 triggertime NOENCODE
  // {
    //  0_31: trigger_time;
  // }
  // UINT32 time NOENCODE
  // {
    //  0_31: time;
  // }
  // list(0<=i<((data_size.size - 16) >> 3))

    // UINT32 time NOENCODE
    // {
      //  0_10: time;
      // 11_14: unused1;
      //    15: sign;
      // 16_19: unused2;
      // 20_23: multi_hit;
      // 24_27: n_hit;
      // 28_31: channel_id;
      // ENCODE(t[channel_id],(value=((time | (sign << 11)) & 0xfff)));
      // ENCODE(n_hit[channel_id],(value=n_hit));
    // }
    // UINT32 energy NOENCODE
    // {
      //  0_21: energy;
      //    22: unused1;
      //    23: sign;
      // 24_27: unused2;
      // 28_31: channel_id;
      // ENCODE(e[channel_id],(value=(energy | (sign << 23))));
    // }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 191;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_NOTRACE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_PADDING
class FEBEX_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_PADDING
class PACKER_FEBEX_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FEBEX_TRACE.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACE(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_FEBEX_TRACE
class FEBEX_TRACE
#else//PACKER_CODE
# define DECLARED_PACKER_FEBEX_TRACE
class PACKER_FEBEX_TRACE
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 trace_length[16] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,16> trace_length;
  // MEMBER(DATA16 trace[16][1000] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA16,DATA16,1000> trace[16];
  // MEMBER(DATA32 filter[16][1000] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,1000> filter[16];
  // UINT32 header NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: channel_id = RANGE(0,254);
  // }
  // UINT32 trace_size NOENCODE
  // {
    //  0_31: size;
    // ENCODE(trace_length[header.channel_id],(value=((size / 2) - 4)));
  // }
  // UINT32 trace_header NOENCODE
  // {
    //  0_17: notused1;
    //    18: filter_mode;
    //    19: filter_onoff;
    // 20_22: notused2;
    //    23: adc_type;
    // 24_31: 170;
  // }
  // if((trace_header.filter_onoff == 0))

  // else

    // list(0<=i<((trace_size.size / 4) - 2))

      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_15: nik_knows;
        // 16_29: data2;
        // 30_31: nik_knows2;
        // ENCODE(trace[header.channel_id][((2 * i) + 0)],(value=data1));
        // ENCODE(trace[header.channel_id][((2 * i) + 1)],(value=data2));
      // }
    // list(0<=i<((trace_size.size / 8) - 1))

      // UINT32 channel_trace NOENCODE
      // {
        //  0_13: data1;
        // 14_31: nik_knows;
        // ENCODE(trace[header.channel_id][i],(value=data1));
      // }
      // UINT32 channel_filter NOENCODE
      // {
        //  0_22: data1;
        //    23: sign;
        // 24_31: nik_knows2;
        // ENCODE(filter[header.channel_id][i],(value=(data1 * (1 - (2 * sign)))));
      // }
  // UINT32 trace_trailer NOENCODE
  // {
    //  0_23: notused;
    // 24_31: 187;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FEBEX_TRACE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for LAND_STD_VME.
 *
 * Do not edit - automatically generated.
 */

// LAND_STD_VME()
#if !PACKER_CODE
# define DECLARED_UNPACK_LAND_STD_VME
class LAND_STD_VME
#else//PACKER_CODE
# define DECLARED_PACKER_LAND_STD_VME
class PACKER_LAND_STD_VME
#endif//PACKER_CODE

{
public:
  // UINT32 failure
  // {
    //     0: fail_general;
    //     1: fail_data_corrupt;
    //     2: fail_data_missing;
    //     3: fail_data_too_much;
    //     4: fail_event_counter_mismatch;
    //     5: fail_readout_error_driver;
    //     6: fail_unexpected_trigger;
    //     7: fail_firmware_mismatch;
    //    22: has_multi_trlo_ii_counter0;
    //    23: has_clock_counter_stamp;
    //    24: has_continous_event_counter;
    //    25: has_update_qdc_iped_value;
    //    26: spurious_start_before_tcal;
    //    27: has_no_zero_suppression;
    //    28: has_multi_adctdc_counter0;
    //    29: has_multi_scaler_counter0;
    //    30: has_multi_event;
    //    31: has_time_stamp;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 fail_general : 1; // 0
      uint32 fail_data_corrupt : 1; // 1
      uint32 fail_data_missing : 1; // 2
      uint32 fail_data_too_much : 1; // 3
      uint32 fail_event_counter_mismatch : 1; // 4
      uint32 fail_readout_error_driver : 1; // 5
      uint32 fail_unexpected_trigger : 1; // 6
      uint32 fail_firmware_mismatch : 1; // 7
      uint32 dummy_8_21 : 14;
      uint32 has_multi_trlo_ii_counter0 : 1; // 22
      uint32 has_clock_counter_stamp : 1; // 23
      uint32 has_continous_event_counter : 1; // 24
      uint32 has_update_qdc_iped_value : 1; // 25
      uint32 spurious_start_before_tcal : 1; // 26
      uint32 has_no_zero_suppression : 1; // 27
      uint32 has_multi_adctdc_counter0 : 1; // 28
      uint32 has_multi_scaler_counter0 : 1; // 29
      uint32 has_multi_event : 1; // 30
      uint32 has_time_stamp : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 has_time_stamp : 1; // 31
      uint32 has_multi_event : 1; // 30
      uint32 has_multi_scaler_counter0 : 1; // 29
      uint32 has_multi_adctdc_counter0 : 1; // 28
      uint32 has_no_zero_suppression : 1; // 27
      uint32 spurious_start_before_tcal : 1; // 26
      uint32 has_update_qdc_iped_value : 1; // 25
      uint32 has_continous_event_counter : 1; // 24
      uint32 has_clock_counter_stamp : 1; // 23
      uint32 has_multi_trlo_ii_counter0 : 1; // 22
      uint32 dummy_8_21 : 14;
      uint32 fail_firmware_mismatch : 1; // 7
      uint32 fail_unexpected_trigger : 1; // 6
      uint32 fail_readout_error_driver : 1; // 5
      uint32 fail_event_counter_mismatch : 1; // 4
      uint32 fail_data_too_much : 1; // 3
      uint32 fail_data_missing : 1; // 2
      uint32 fail_data_corrupt : 1; // 1
      uint32 fail_general : 1; // 0
#endif
    };
    uint32  u32;
  } failure;
  // if(failure.has_continous_event_counter)

    // UINT32 continous_event_counter;
    uint32  continous_event_counter;
  // if(failure.has_time_stamp)

    // UINT32 time_stamp;
    uint32  time_stamp;
  // if(failure.has_clock_counter_stamp)

    // UINT32 clock_counter_stamp;
    uint32  clock_counter_stamp;
  // if(failure.has_update_qdc_iped_value)

    // UINT32 iped;
    uint32  iped;
  // if(failure.has_multi_event)

    // UINT32 multi_events;
    uint32  multi_events;
  // if(failure.has_multi_trlo_ii_counter0)

    // UINT32 multi_trlo_ii_counter0;
    uint32  multi_trlo_ii_counter0;
  // if(failure.has_multi_scaler_counter0)

    // UINT32 multi_scaler_counter0;
    uint32  multi_scaler_counter0;
  // if(failure.has_multi_adctdc_counter0)

    // UINT32 multi_adctdc_counter0;
    uint32  multi_adctdc_counter0;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(LAND_STD_VME);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SCALER.
 *
 * Do not edit - automatically generated.
 */

// SCALER()
#if !PACKER_CODE
# define DECLARED_UNPACK_SCALER
class SCALER
#else//PACKER_CODE
# define DECLARED_PACKER_SCALER
class PACKER_SCALER
#endif//PACKER_CODE

{
public:
  // UINT32 scaler;
  uint32  scaler;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(SCALER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_HEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_HEADER
class TAMEX3_HEADER
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_HEADER
class PACKER_TAMEX3_HEADER
#endif//PACKER_CODE

{
public:
  // UINT32 trigger_window
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 post_trig_ns : 16; // 0..15
      uint32 pre_trig_ns : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pre_trig_ns : 16; // 16..31
      uint32 post_trig_ns : 16; // 0..15
#endif
    };
    uint32  u32;
  } trigger_window;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_HEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_PADDING
class TAMEX3_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_PADDING
class PACKER_TAMEX3_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX3_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX3_SFP(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX3_SFP
class TAMEX3_SFP
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX3_SFP
class PACKER_TAMEX3_SFP
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA16 time_coarse[34] ZERO_SUPPRESS_MULTI(200));
  raw_array_multi_zero_suppress<DATA16,DATA16,34,200> time_coarse;
  // MEMBER(DATA12 time_fine[34] ZERO_SUPPRESS_MULTI(200));
  raw_array_multi_zero_suppress<DATA12,DATA12,34,200> time_fine;
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 0;
  // }
  // MATCH_END;
  // UINT32 data_size NOENCODE
  // {
    //  0_31: bytes;
  // }
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  // list(0<=i<((data_size.bytes / 4) - 3))

    // UINT32 data NOENCODE
    // {
      //  0_10: coarse;
      //    11: is_leading;
      // 12_21: fine;
      // 22_28: channel_index;
      // 29_31: type;
      // ENCODE(time_coarse[(((4 <= type) * channel_index) + ((4 > type) * 33))],(value=coarse));
      // ENCODE(time_fine[(((4 <= type) * channel_index) + ((4 > type) * 33))],(value=fine));
    // }
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  // UINT32 trailer NOENCODE
  // {
    //  0_23: unused;
    // 24_31: 187;
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX3_SFP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TIMESTAMP_WHITERABBIT
class TIMESTAMP_WHITERABBIT
#else//PACKER_CODE
# define DECLARED_PACKER_TIMESTAMP_WHITERABBIT
class PACKER_TIMESTAMP_WHITERABBIT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 subsystem_id);
  DATA12 subsystem_id;
  // MEMBER(DATA16 t1);
  DATA16 t1;
  // MEMBER(DATA16 t2);
  DATA16 t2;
  // MEMBER(DATA16 t3);
  DATA16 t3;
  // MEMBER(DATA16 t4);
  DATA16 t4;
  // UINT32 header NOENCODE
  // {
    //  0_11: id = MATCH(id);
    // 12_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TIMESTAMP_WHITERABBIT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_LMU_SCALERS.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_LMU_SCALERS(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_LMU_SCALERS
class TRLOII_LMU_SCALERS
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_LMU_SCALERS
class PACKER_TRLOII_LMU_SCALERS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 before_lmu[63] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,63> before_lmu;
  // MEMBER(DATA32 before_lmu_mux[31] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_mux;
  // MEMBER(DATA32 before_lmu_aux[31] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,31> before_lmu_aux;
  // MEMBER(DATA32 before_dt[127] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,127> before_dt;
  // MEMBER(DATA32 after_dt[127] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,127> after_dt;
  // MEMBER(DATA32 after_reduction[127] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,127> after_reduction;
  // UINT32 header
  // {
    //  0_05: before_lmu;
    //  6_10: before_lmu_mux;
    // 11_15: before_lmu_aux;
    // 16_23: after_lmu;
    // 24_31: id = MATCH(id);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 before_lmu : 6; // 0..5
      uint32 before_lmu_mux : 5; // 6..10
      uint32 before_lmu_aux : 5; // 11..15
      uint32 after_lmu : 8; // 16..23
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 after_lmu : 8; // 16..23
      uint32 before_lmu_aux : 5; // 11..15
      uint32 before_lmu_mux : 5; // 6..10
      uint32 before_lmu : 6; // 0..5
#endif
    };
    uint32  u32;
  } header;
  // list(0<=i<header.before_lmu)

    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu[i],(value=value));
    // }
  // list(0<=i<header.before_lmu_mux)

    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_mux[i],(value=value));
    // }
  // list(0<=i<header.before_lmu_aux)

    // UINT32 scaler NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_lmu_aux[i],(value=value));
    // }
  // list(0<=i<header.after_lmu)

    // UINT32 scaler_bdt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(before_dt[i],(value=value));
    // }
    // UINT32 scaler_adt NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_dt[i],(value=value));
    // }
    // UINT32 scaler_ard NOENCODE
    // {
      //  0_31: value;
      // ENCODE(after_reduction[i],(value=value));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_LMU_SCALERS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_SAMPLER.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER(mark)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_SAMPLER
class TRLOII_SAMPLER
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_SAMPLER
class PACKER_TRLOII_SAMPLER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 sampler[512] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,512> sampler;
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_num : 10; // 0..9
      uint32 overflow : 1; // 10
      uint32 dummy_11_15 : 5;
      uint32 mark : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 mark : 16; // 16..31
      uint32 dummy_11_15 : 5;
      uint32 overflow : 1; // 10
      uint32 word_num : 10; // 0..9
#endif
    };
    uint32  u32;
  } header;
  // list(0<=index<header.word_num)

    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler[index],(value=time));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 mark);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 mark);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 mark);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_SAMPLER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_SAMPLER_TWO.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_SAMPLER_TWO(mark)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_SAMPLER_TWO
class TRLOII_SAMPLER_TWO
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_SAMPLER_TWO
class PACKER_TRLOII_SAMPLER_TWO
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 sampler_hi[512] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,512> sampler_hi;
  // MEMBER(DATA32 sampler_lo[512] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA32,DATA32,512> sampler_lo;
  // UINT32 header
  // {
    //  0_09: word_num;
    //    10: overflow;
    // 16_31: mark = MATCH(mark);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_num : 10; // 0..9
      uint32 overflow : 1; // 10
      uint32 dummy_11_15 : 5;
      uint32 mark : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 mark : 16; // 16..31
      uint32 dummy_11_15 : 5;
      uint32 overflow : 1; // 10
      uint32 word_num : 10; // 0..9
#endif
    };
    uint32  u32;
  } header;
  // list(0<=index<(header.word_num / 2))

    // UINT32 time_lo NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_lo[index],(value=time));
    // }
    // UINT32 time_hi NOENCODE
    // {
      //  0_29: time;
      //    30: dunno;
      //    31: overflow;
      // ENCODE(sampler_hi[index],(value=time));
    // }
  // if(((header.word_num % 2) == 1))

    // UINT32 last_word NOENCODE;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 mark);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 mark);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 mark);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_SAMPLER_TWO);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_TPAT
class TRLOII_TPAT
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_TPAT
class PACKER_TRLOII_TPAT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 n);
  DATA32 n;
  // MEMBER(DATA16 tpat[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,170> tpat;
  // MEMBER(DATA8 trig[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,170> trig;
  // MEMBER(DATA32 ts_lo[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_lo;
  // MEMBER(DATA32 ts_hi[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_hi;
  // UINT32 header NOENCODE
  // {
    //  0_11: uint32_num;
    // 12_23: event_num;
    // 24_31: id = MATCH(id);
    // ENCODE(n,(value=(uint32_num / 3)));
  // }
  // list(0<=index<(header.uint32_num / 3))

    // UINT32 time_lo NOENCODE
    // {
      //  0_31: t;
      // ENCODE(ts_lo APPEND_LIST,(value=t));
    // }
    // UINT32 time_hi NOENCODE
    // {
      //  0_30: t;
      //    31: overflow;
      // ENCODE(ts_hi APPEND_LIST,(value=t));
    // }
    // UINT32 trigger NOENCODE
    // {
      //  0_15: tpat;
      // 16_23: dunno;
      // 24_27: encoded;
      // 28_31: lec;
      // ENCODE(tpat APPEND_LIST,(value=tpat));
      // ENCODE(trig APPEND_LIST,(value=encoded));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_TPAT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VFTX2_STATUS.
 *
 * Do not edit - automatically generated.
 */

// VFTX2_STATUS()
#if !PACKER_CODE
# define DECLARED_UNPACK_VFTX2_STATUS
class VFTX2_STATUS
#else//PACKER_CODE
# define DECLARED_PACKER_VFTX2_STATUS
class PACKER_VFTX2_STATUS
#endif//PACKER_CODE

{
public:
  // UINT32 status;
  uint32  status;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VFTX2_STATUS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_GSI_VFTX2.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_GSI_VFTX2
class VME_GSI_VFTX2
#else//PACKER_CODE
# define DECLARED_PACKER_VME_GSI_VFTX2
class PACKER_VME_GSI_VFTX2
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  // MEMBER(DATA16 time_trigger);
  DATA16 time_trigger;
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } custom_header;
  // if((0 < custom_header.count))

    // UINT32 event_header
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 unnamed_0_7 : 8; // 0..7
        uint32 dummy_8_10 : 3;
        uint32 trigger_timestamp : 13; // 11..23
        uint32 dummy_24_28 : 5;
        uint32 unnamed_29_30 : 2; // 29..30
        uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_31_31 : 1; // 31
        uint32 unnamed_29_30 : 2; // 29..30
        uint32 dummy_24_28 : 5;
        uint32 trigger_timestamp : 13; // 11..23
        uint32 dummy_8_10 : 3;
        uint32 unnamed_0_7 : 8; // 0..7
#endif
      };
      uint32  u32;
    } event_header;
  // list(1<=index<custom_header.count)

    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_GSI_VFTX2);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_GSI_VFTX2_7PS.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_7PS(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_GSI_VFTX2_7PS
class VME_GSI_VFTX2_7PS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_GSI_VFTX2_7PS
class PACKER_VME_GSI_VFTX2_7PS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA12,DATA12,32,100> time_fine;
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA16,DATA16,32,100> time_coarse;
  // MEMBER(DATA16 time_trigger);
  DATA16 time_trigger;
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } custom_header;
  // if((0 < custom_header.count))

    // UINT32 event_header NOENCODE
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
  // list(1<=index<custom_header.count)

    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_29: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_GSI_VFTX2_7PS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_GSI_VFTX2_LT.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_LT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_GSI_VFTX2_LT
class VME_GSI_VFTX2_LT
#else//PACKER_CODE
# define DECLARED_PACKER_VME_GSI_VFTX2_LT
class PACKER_VME_GSI_VFTX2_LT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_fine[64] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA12,DATA12,64,100> time_fine;
  // MEMBER(DATA16 time_coarse[64] ZERO_SUPPRESS_MULTI(100));
  raw_array_multi_zero_suppress<DATA16,DATA16,64,100> time_coarse;
  // MEMBER(DATA16 time_trigger);
  DATA16 time_trigger;
  // UINT32 custom_header
  // {
    //  0_04: id = MATCH(id);
    //  5_08: internal_status;
    //  9_17: count;
    // 24_31: 171;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 5; // 0..4
      uint32 internal_status : 4; // 5..8
      uint32 count : 9; // 9..17
      uint32 dummy_18_23 : 6;
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 dummy_18_23 : 6;
      uint32 count : 9; // 9..17
      uint32 internal_status : 4; // 5..8
      uint32 id : 5; // 0..4
#endif
    };
    uint32  u32;
  } custom_header;
  // if((0 < custom_header.count))

    // UINT32 event_header
    // {
      //  0_07: 170;
      // 11_23: trigger_timestamp;
      // 29_30: 1;
      //    31: 1;
      // ENCODE(time_trigger,(value=trigger_timestamp));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 unnamed_0_7 : 8; // 0..7
        uint32 dummy_8_10 : 3;
        uint32 trigger_timestamp : 13; // 11..23
        uint32 dummy_24_28 : 5;
        uint32 unnamed_29_30 : 2; // 29..30
        uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 unnamed_31_31 : 1; // 31
        uint32 unnamed_29_30 : 2; // 29..30
        uint32 dummy_24_28 : 5;
        uint32 trigger_timestamp : 13; // 11..23
        uint32 dummy_8_10 : 3;
        uint32 unnamed_0_7 : 8; // 0..7
#endif
      };
      uint32  u32;
    } event_header;
  // list(1<=index<custom_header.count)

    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_30: channel;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_GSI_VFTX2_LT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_GSI_VFTX2_STRAW.
 *
 * Do not edit - automatically generated.
 */

// VME_GSI_VFTX2_STRAW(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_GSI_VFTX2_STRAW
class VME_GSI_VFTX2_STRAW
#else//PACKER_CODE
# define DECLARED_PACKER_VME_GSI_VFTX2_STRAW
class PACKER_VME_GSI_VFTX2_STRAW
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_fine[32] ZERO_SUPPRESS_MULTI(32));
  raw_array_multi_zero_suppress<DATA12,DATA12,32,32> time_fine;
  // MEMBER(DATA16 time_coarse[32] ZERO_SUPPRESS_MULTI(32));
  raw_array_multi_zero_suppress<DATA16,DATA16,32,32> time_coarse;
  // MEMBER(DATA16 time_trigger);
  DATA16 time_trigger;
  // UINT32 status
  // {
    //  0_03: internal;
    //  4_12: count;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 internal : 4; // 0..3
      uint32 count : 9; // 4..12
      uint32 dummy_13_31 : 19;
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 dummy_13_31 : 19;
      uint32 count : 9; // 4..12
      uint32 internal : 4; // 0..3
#endif
    };
    uint32  u32;
  } status;
  // UINT32 custom_header
  // {
    //  0_15: count;
    // 16_23: id = MATCH(id);
    // 24_31: 171;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 count : 16; // 0..15
      uint32 id : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 id : 8; // 16..23
      uint32 count : 16; // 0..15
#endif
    };
    uint32  u32;
  } custom_header;
  // UINT32 event_header
  // {
    //  0_07: 170;
    // 11_23: trigger_timestamp;
    // 29_30: 1;
    //    31: 1;
    // ENCODE(time_trigger,(value=trigger_timestamp));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 dummy_8_10 : 3;
      uint32 trigger_timestamp : 13; // 11..23
      uint32 dummy_24_28 : 5;
      uint32 unnamed_29_30 : 2; // 29..30
      uint32 unnamed_31_31 : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_31_31 : 1; // 31
      uint32 unnamed_29_30 : 2; // 29..30
      uint32 dummy_24_28 : 5;
      uint32 trigger_timestamp : 13; // 11..23
      uint32 dummy_8_10 : 3;
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } event_header;
  // list(0<=index<custom_header.count)

    // UINT32 event NOENCODE
    // {
      //  0_10: time_fine;
      // 11_23: time_coarse;
      //    24: future;
      // 25_30: channel;
      //    31: bluppidupp;
      // ENCODE(time_fine[channel],(value=time_fine));
      // ENCODE(time_coarse[channel],(value=time_coarse));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_GSI_VFTX2_STRAW);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_MESYTEC_MADC32.
 *
 * Do not edit - automatically generated.
 */

// VME_MESYTEC_MADC32(geom)
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_MESYTEC_MADC32
class VME_MESYTEC_MADC32
#else//PACKER_CODE
# define DECLARED_PACKER_VME_MESYTEC_MADC32
class PACKER_VME_MESYTEC_MADC32
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA14_OVERFLOW data[32] ZERO_SUPPRESS);
  raw_array_zero_suppress<DATA14_OVERFLOW,DATA14_OVERFLOW,32> data;
  // MARK_COUNT(start);
  // UINT32 header NOENCODE
  // {
    //  0_11: word_number;
    // 12_14: adc_resol;
    //    15: out_form;
    // 16_23: geom = MATCH(geom);
    // 24_29: 0;
    // 30_31: 1;
  // }
  // several UINT32 ch_data NOENCODE
  // {
    //  0_12: value;
    //    14: outofrange;
    // 16_20: channel;
    // 21_29: 32;
    // 30_31: 0;
    // ENCODE(data[channel],(value=value,overflow=outofrange));
  // }
  // optional UINT32 filler NOENCODE
  // {
    //  0_31: 0;
  // }
  // UINT32 end_of_event
  // {
    //  0_29: counter;
    // 30_31: 3;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 30; // 0..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 counter : 30; // 0..29
#endif
    };
    uint32  u32;
  } end_of_event;
  // MARK_COUNT(end);
  // CHECK_COUNT(header.word_number,start,end,( - 4),4)

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 geom);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 geom);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 geom);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(VME_MESYTEC_MADC32);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
#if !PACKER_CODE
# define DECLARED_UNPACK_WR_MULTI
class WR_MULTI
#else//PACKER_CODE
# define DECLARED_PACKER_WR_MULTI
class PACKER_WR_MULTI
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 time_hi);
  DATA32 time_hi;
  // MEMBER(DATA32 time_lo);
  DATA32 time_lo;
  // UINT32 hi NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_hi,(value=time));
  // }
  // UINT32 lo NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_lo,(value=time));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(WR_MULTI);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for empty_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(empty_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_empty_subev
class empty_subev
#else//PACKER_CODE
# define DECLARED_PACKER_empty_subev
class PACKER_empty_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(empty_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for fitest_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fitest_febex_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_fitest_febex_subev
class fitest_febex_subev
#else//PACKER_CODE
# define DECLARED_PACKER_fitest_febex_subev
class PACKER_fitest_febex_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // header = FEBEX_EVENTHEADER();
  // select several

    // padding = FEBEX_PADDING();
  SINGLE(FEBEX_PADDING,padding);
  // select several

    // febex[0] = FEBEX_NOTRACE(sfp=3,card=0);
    // febex[1] = FEBEX_NOTRACE(sfp=3,card=1);
    // febex[2] = FEBEX_NOTRACE(sfp=3,card=2);
    // febex[3] = FEBEX_NOTRACE(sfp=3,card=3);
    // febex[4] = FEBEX_NOTRACE(sfp=3,card=4);
    // febex[5] = FEBEX_NOTRACE(sfp=3,card=5);
    // febex[6] = FEBEX_NOTRACE(sfp=3,card=6);
    // febex[7] = FEBEX_NOTRACE(sfp=3,card=7);
    // febextrace[0] = FEBEX_TRACE(sfp=3,card=0);
    // febextrace[1] = FEBEX_TRACE(sfp=3,card=1);
    // febextrace[2] = FEBEX_TRACE(sfp=3,card=2);
    // febextrace[3] = FEBEX_TRACE(sfp=3,card=3);
    // febextrace[4] = FEBEX_TRACE(sfp=3,card=4);
    // febextrace[5] = FEBEX_TRACE(sfp=3,card=5);
    // febextrace[6] = FEBEX_TRACE(sfp=3,card=6);
    // febextrace[7] = FEBEX_TRACE(sfp=3,card=7);
  SINGLE(FEBEX_NOTRACE,febex[8]);
  SINGLE(FEBEX_TRACE,febextrace[8]);
  SINGLE(FEBEX_EVENTHEADER,header);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(fitest_febex_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for lmu_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(lmu_scalers_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_lmu_scalers_subev
class lmu_scalers_subev
#else//PACKER_CODE
# define DECLARED_PACKER_lmu_scalers_subev
class PACKER_lmu_scalers_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // scalers = TRLOII_LMU_SCALERS(id=199);
  SINGLE(TRLOII_LMU_SCALERS,scalers);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(lmu_scalers_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for los_sampler_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_sampler_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_los_sampler_subev
class los_sampler_subev
#else//PACKER_CODE
# define DECLARED_PACKER_los_sampler_subev
class PACKER_los_sampler_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // select several

    // sampler = TRLOII_SAMPLER(mark=0x1050);
  SINGLE(TRLOII_SAMPLER,sampler);
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(los_sampler_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for los_scalers_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_scalers_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_los_scalers_subev
class los_scalers_subev
#else//PACKER_CODE
# define DECLARED_PACKER_los_scalers_subev
class PACKER_los_scalers_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // scaler = SCALER();
  SINGLE(SCALER,scaler);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(los_scalers_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for los_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(los_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_los_subev
class los_subev
#else//PACKER_CODE
# define DECLARED_PACKER_los_subev
class PACKER_los_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // barrier1 = BARRIER();
  // barrier2 = BARRIER();
  // select several

    // vftx2 = VME_GSI_VFTX2_7PS(id=2);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2);
  SINGLE(LAND_STD_VME,land_vme);
  SINGLE(BARRIER,barrier2);
  SINGLE(BARRIER,barrier1);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(los_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for master_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(master_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_master_subev
class master_subev
#else//PACKER_CODE
# define DECLARED_PACKER_master_subev
class PACKER_master_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // barrier = BARRIER();
  SINGLE(BARRIER,barrier);
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(master_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for straw_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(straw_vme_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_straw_vme_subev
class straw_vme_subev
#else//PACKER_CODE
# define DECLARED_PACKER_straw_vme_subev
class PACKER_straw_vme_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // vftx2 = VME_GSI_VFTX2_STRAW(id=0);
  SINGLE(VME_GSI_VFTX2_STRAW,vftx2);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(straw_vme_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for tbm_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tbm_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_tbm_subev
class tbm_subev
#else//PACKER_CODE
# define DECLARED_PACKER_tbm_subev
class PACKER_tbm_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(tbm_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for tofd_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_tamex_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_tofd_tamex_subev
class tofd_tamex_subev
#else//PACKER_CODE
# define DECLARED_PACKER_tofd_tamex_subev
class PACKER_tofd_tamex_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // header = TAMEX3_HEADER();
  // select several

    // padding1 = TAMEX3_PADDING();
  SINGLE(TAMEX3_PADDING,padding1);
  // select several

    // tamex_1 = TAMEX3_SFP(sfp=2,card=0);
    // tamex_2 = TAMEX3_SFP(sfp=2,card=1);
  SINGLE(TAMEX3_SFP,tamex_1);
  SINGLE(TAMEX3_SFP,tamex_2);
  // select several

    // padding2 = TAMEX3_PADDING();
  SINGLE(TAMEX3_PADDING,padding2);
  // select several

    // tamex_3 = TAMEX3_SFP(sfp=3,card=0);
    // tamex_4 = TAMEX3_SFP(sfp=3,card=1);
  SINGLE(TAMEX3_SFP,tamex_3);
  SINGLE(TAMEX3_SFP,tamex_4);
  SINGLE(TAMEX3_HEADER,header);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(tofd_tamex_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for tofd_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tofd_vme_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_tofd_vme_subev
class tofd_vme_subev
#else//PACKER_CODE
# define DECLARED_PACKER_tofd_vme_subev
class PACKER_tofd_vme_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // land_vme = LAND_STD_VME();
  // barrier = BARRIER();
  // select several

    // vftx2_1 = VME_GSI_VFTX2_7PS(id=1);
    // vftx2_2 = VME_GSI_VFTX2_7PS(id=2);
    // vftx2_3 = VME_GSI_VFTX2_7PS(id=3);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_1);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_3);
  SINGLE(VME_GSI_VFTX2_7PS,vftx2_2);
  SINGLE(BARRIER,barrier);
  SINGLE(LAND_STD_VME,land_vme);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(tofd_vme_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tpat_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_tpat_subev
class tpat_subev
#else//PACKER_CODE
# define DECLARED_PACKER_tpat_subev
class PACKER_tpat_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // tpat = TRLOII_TPAT(id=207);
  SINGLE(TRLOII_TPAT,tpat);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(tpat_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for tracking_febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(tracking_febex_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_tracking_febex_subev
class tracking_febex_subev
#else//PACKER_CODE
# define DECLARED_PACKER_tracking_febex_subev
class PACKER_tracking_febex_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // header0 = FEBEX_EVENTHEADER();
  // select several

    // febex_0[0] = FEBEX_NOTRACE(sfp=0,card=0);
    // febex_0[1] = FEBEX_NOTRACE(sfp=0,card=1);
    // febex_0[2] = FEBEX_NOTRACE(sfp=0,card=2);
    // febex_0[3] = FEBEX_NOTRACE(sfp=0,card=3);
    // febex_0[4] = FEBEX_NOTRACE(sfp=0,card=4);
    // febex_0[5] = FEBEX_NOTRACE(sfp=0,card=5);
    // febex_0[6] = FEBEX_NOTRACE(sfp=0,card=6);
    // febex_0[7] = FEBEX_NOTRACE(sfp=0,card=7);
    // febex_0[8] = FEBEX_NOTRACE(sfp=0,card=8);
    // febex_0[9] = FEBEX_NOTRACE(sfp=0,card=9);
  SINGLE(FEBEX_NOTRACE,febex_0[10]);
  // header2 = FEBEX_EVENTHEADER();
  // select several

    // febex_2[0] = FEBEX_NOTRACE(sfp=2,card=0);
    // febex_2[1] = FEBEX_NOTRACE(sfp=2,card=1);
    // febex_2[2] = FEBEX_NOTRACE(sfp=2,card=2);
    // febex_2[3] = FEBEX_NOTRACE(sfp=2,card=3);
    // febex_2[4] = FEBEX_NOTRACE(sfp=2,card=4);
    // febex_2[5] = FEBEX_NOTRACE(sfp=2,card=5);
    // febex_2[6] = FEBEX_NOTRACE(sfp=2,card=6);
    // febex_2[7] = FEBEX_NOTRACE(sfp=2,card=7);
    // febex_2[8] = FEBEX_NOTRACE(sfp=2,card=8);
    // febex_2[9] = FEBEX_NOTRACE(sfp=2,card=9);
    // febex_2[10] = FEBEX_NOTRACE(sfp=2,card=10);
    // febex_2[11] = FEBEX_NOTRACE(sfp=2,card=11);
  SINGLE(FEBEX_NOTRACE,febex_2[12]);
  SINGLE(FEBEX_EVENTHEADER,header0);
  SINGLE(FEBEX_EVENTHEADER,header2);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(tracking_febex_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for wr_100.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_100)
#if !PACKER_CODE
# define DECLARED_UNPACK_wr_100
class wr_100
#else//PACKER_CODE
# define DECLARED_PACKER_wr_100
class PACKER_wr_100
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts100 = TIMESTAMP_WHITERABBIT(id=0x100);
  // multi_ = WR_MULTI();
  SINGLE(TIMESTAMP_WHITERABBIT,ts100);
  SINGLE(WR_MULTI,multi_);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(wr_100);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for wr_200.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_200)
#if !PACKER_CODE
# define DECLARED_UNPACK_wr_200
class wr_200
#else//PACKER_CODE
# define DECLARED_PACKER_wr_200
class PACKER_wr_200
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts200 = TIMESTAMP_WHITERABBIT(id=0x200);
  // multi_ = WR_MULTI();
  SINGLE(WR_MULTI,multi_);
  SINGLE(TIMESTAMP_WHITERABBIT,ts200);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(wr_200);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for wr_400.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(wr_400)
#if !PACKER_CODE
# define DECLARED_UNPACK_wr_400
class wr_400
#else//PACKER_CODE
# define DECLARED_PACKER_wr_400
class PACKER_wr_400
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts400 = TIMESTAMP_WHITERABBIT(id=0x400);
  SINGLE(TIMESTAMP_WHITERABBIT,ts400);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(wr_400);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
class unpack_event : public unpack_event_base
{
public:
  // master_ts = wr_100(type=10,subtype=1,control=0);
  // master_tpat = tpat_subev(type=36,subtype=0xe10,control=0);
  // master_lmu_scalers = lmu_scalers_subev(type=37,subtype=0xe74,control=0);
  // master_vme = master_subev(type=88,subtype=0x2260,control=0);
  // los = los_subev(type=88,subtype=0x2260,control=1);
  // los_scalers = los_scalers_subev(type=38,subtype=0xed8,control=1);
  // los_sampler = los_sampler_subev(type=39,subtype=0xf3c,control=1);
  // tofd_vme = tofd_vme_subev(type=88,subtype=0x2260,control=2);
  // tbm_ts = wr_200(type=10,subtype=1,control=3);
  // tbm_tpat = tpat_subev(type=36,subtype=0xe10,control=3);
  // tbm_vme = tbm_subev(type=88,subtype=0x2260,control=3);
  // tofd_tamex = tofd_tamex_subev(type=102,subtype=0x27d8,control=4);
  // tracking_febex = tracking_febex_subev(type=100,subtype=0x2710,control=5);
  // los_empty = empty_subev(type=10,subtype=1,control=1);
  // tofd_empty = empty_subev(type=10,subtype=1,control=2);
SINGLE(wr_100,master_ts);
SINGLE(lmu_scalers_subev,master_lmu_scalers);
SINGLE(tpat_subev,master_tpat);
SINGLE(master_subev,master_vme);
SINGLE(los_subev,los);
SINGLE(los_scalers_subev,los_scalers);
SINGLE(los_sampler_subev,los_sampler);
SINGLE(tofd_vme_subev,tofd_vme);
SINGLE(wr_200,tbm_ts);
SINGLE(tpat_subev,tbm_tpat);
SINGLE(tbm_subev,tbm_vme);
SINGLE(tofd_tamex_subev,tofd_tamex);
SINGLE(tracking_febex_subev,tracking_febex);
SINGLE(empty_subev,los_empty);
SINGLE(empty_subev,tofd_empty);
public:
#ifndef __PSDC__
  bitsone<15> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return false; }
#endif//!__PSDC__

public:
#ifndef __PSDC__
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  // void __clean_event();

  STRUCT_FCNS_DECL(unpack_event);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
class unpack_sticky_event : public unpack_sticky_event_base
{
public:
public:
#ifndef __PSDC__
  void __clear_visited() { }
  bool ignore_unknown_subevent() { return false; }
#endif//!__PSDC__

public:
#ifndef __PSDC__
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  // void __clean_event();

  STRUCT_FCNS_DECL(unpack_sticky_event);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/