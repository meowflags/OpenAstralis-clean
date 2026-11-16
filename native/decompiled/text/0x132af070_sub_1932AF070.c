// sub_1932AF070
// rva 0x132af070  size 460  section .text  group text
// window base 0x1932af070: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AF070(__int64 a1, __int64 a2, _DWORD a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  unsigned int v28; // edi

  v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(a1, a2, a3: 541920);
  if ( v5 == 0 )
    return 0;
  MEMORY[0x337E68] = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)a4 + 168LL))(
                       a1: 0,
                       a2: v6,
                       a3: v5,
                       a4);
  if ( MEMORY[0x337E68] == 0 )
    return 0;
  MEMORY[0x337E48] = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a4 + 264LL))(
                       a1: v7,
                       a2: v8,
                       a3: MEMORY[0x337E68],
                       a4,
                       a5: 535156,
                       a6: 541936);
  if ( MEMORY[0x337E48] == 0 )
    return 0;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
          a1: v9,
          a2: v10,
          a3: 541992,
          a4);
  if ( v11 == 0 )
    return 0;
  MEMORY[0x337E58] = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 168LL))(
                       a1: v12,
                       a2: v13,
                       a3: v11,
                       a4);
  if ( MEMORY[0x337E58] == 0 )
    return 0;
  MEMORY[0x337E38] = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a4 + 1152LL))(
                       a1: v14,
                       a2: v15,
                       a3: MEMORY[0x337E58],
                       a4,
                       a5: 542040,
                       a6: 542016);
  if ( MEMORY[0x337E38] == 0 )
    return 0;
  MEMORY[0x337E30] = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a4 + 1152LL))(
                       a1: v16,
                       a2: v17,
                       a3: MEMORY[0x337E58],
                       a4,
                       a5: 542048,
                       a6: 542016);
  if ( MEMORY[0x337E30] == 0 )
    return 0;
  MEMORY[0x337E40] = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a4 + 1152LL))(
                       a1: v18,
                       a2: v19,
                       a3: MEMORY[0x337E68],
                       a4,
                       a5: 542080,
                       a6: 542056);
  if ( MEMORY[0x337E40] == 0 )
    return 0;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 48LL))(
          a1: v20,
          a2: v21,
          a3: 535096,
          a4);
  if ( v22 == 0 )
    return 0;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 168LL))(
          a1: v23,
          a2: v24,
          a3: v22,
          a4);
  MEMORY[0x337E60] = v25;
  if ( v25 == 0 )
    return 0;
  MEMORY[0x337E50] = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a4 + 904LL))(
                       a1: v26,
                       a2: v27,
                       a3: v25,
                       a4,
                       a5: 542152,
                       a6: 542096);
  LOBYTE(v28) = MEMORY[0x337E50] != 0;
  return v28;
}
