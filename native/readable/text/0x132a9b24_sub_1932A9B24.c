// sub_132A9B24
// rva 0x132a9b24  size 267  section .text  group text
// window base 0x1932a9b24: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132A9B24(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r9
  char v22; // bl
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rsi

  a8 = v9;
  a9 = a2;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
         a1,
         a2,
         a3: &a7,
         a4,
         a5: 65538) != 0 )
    return 4294967293LL;
  if ( (unsigned int)sub_132AEBA4(a1: 0) != 0 )
    return 0xFFFFFFFFLL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a7 + 48LL))(a1: v11, a2: v12, a3: 537064);
  v16 = v13;
  if ( v13 != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a7 + 904LL))(
            a1: v14,
            a2: v15,
            a3: v13,
            a4: a7,
            a5: 537112,
            a6: 537088);
    if ( v18 != 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a7 + 1336LL))(
              a1: v17,
              a2: v18,
              a3: 537128);
      if ( v21 != 0 )
      {
        v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a7 + 936LL))(
                a1: v19,
                a2: v20,
                a3: v16,
                a4: a7,
                a5: v20,
                a6: v21);
        MEMORY[0x3374e0]/* 0x3374e0 */ = sub_132AE69C();
        v23 = sub_132AE6D0();
        LOBYTE(v24) = v22 == 0;
        MEMORY[0x3374e4]/* 0x3374e4 */ = v24 & v23;
        MEMORY[0x3374e8]/* 0x3374e8 */ = Java_sun_nio_ch_WEPoll_eventsOffset(a1: v24, a2: v26, a3: v25, a4: (unsigned int)v24 & v23);
      }
    }
  }
  return 65538;
}
