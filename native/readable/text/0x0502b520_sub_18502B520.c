// sub_502B520
// rva 0x0502b520  size 269  section .text  group text
// window base 0x18502b520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_502B520(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64); // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v18; // [rsp+8h] [rbp-30h]
  __int64 v19; // [rsp+10h] [rbp-28h]
  __int64 v20; // [rsp+18h] [rbp-20h]
  _DWORD *v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+28h] [rbp-10h]
  __int64 v23; // [rsp+30h] [rbp-8h]

  v23 = a6;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, __int64))(v6
                                                                                      + *(_QWORD *)(v7
                                                                                                  + 8LL * (*a3 >> 3)
                                                                                                  + 120));
  v22 = a1;
  v21 = a3;
  v20 = a5;
  v10 = v9(a1, a2, a3, a4: a3, a5, a6: a1);
  v13 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v19 = v10;
    v13 = sub_1EAA920(a1: v11, a2: v12, a3: 43305032);
    v10 = v19;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v13 + 24;
    *(_DWORD *)v13 = 43305032;
    *(_DWORD *)(v13 + 4) = 0;
    *(_QWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 16) = 0;
  }
  v19 = v10;
  v18 = (_DWORD *)v13;
  sub_60FFC20(a1: v11, a2: v12, a3: v13, a4: v13, a5: v10);
  v14 = (unsigned __int64)v18;
  v18[3] = (unsigned __int64)(v23 - v7) >> 3;
  if ( (*(_DWORD *)v14 & 2) != 0 )
  {
    v16 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v16) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280();
  return v14;
}
