// sub_4F26A00
// rva 0x04f26a00  size 720  section .text  group text
// window base 0x184f26a00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F26A00(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+8h] [rbp-30h]
  __int64 v22; // [rsp+10h] [rbp-28h]
  __int64 v23; // [rsp+18h] [rbp-20h]
  _DWORD *v24; // [rsp+20h] [rbp-18h]
  unsigned int v25; // [rsp+2Ch] [rbp-Ch]
  __int64 (__fastcall *v26)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD); // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F26CE0();
  }
  else
  {
    v24 = a3;
    v6 = *(_QWORD *)(v5 + 40);
    v7 = v6 + 16400;
    if ( (unsigned __int64)(v6 + 16400) > *(_QWORD *)(v5 + 32) )
    {
      v6 = sub_1EAA840(a1, a2, a3: 34089376, a4: v7, a5: 0x2000);
      a3 = v24;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v7;
      *(_QWORD *)v6 = 34089376;
      *(_DWORD *)(v6 + 8) = 0x2000;
      *(_DWORD *)(v6 + 12) = 0;
      memset((void *)(v6 + 16), 0, 0x4000u);
    }
    v23 = v6;
    v26 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v3
                                                                                        + *(_QWORD *)(v4 + 8LL * (*a3 >> 3) + 160));
    v8 = v26(a1: 0x2000, a2, a3, a4: a3, a5: v6, a6: 0);
    v12 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v25 = v8;
      v12 = sub_1EAA920(a1: v10, a2: v11, a3: 34085680);
      v8 = v25;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v12 + 24;
      *(_DWORD *)v12 = 34085680;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
    }
    v22 = v12;
    v13 = *(_QWORD *)(v5 + 40);
    v14 = 34082368;
    if ( (unsigned __int64)(v13 + 32) > *(_QWORD *)(v5 + 32) )
    {
      v25 = v8;
      v13 = sub_1EAA840(a1: 34082368, a2: v11, a3: 34082368, a4: v9, a5: 16);
      v12 = v22;
      v8 = v25;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v13 + 32;
      *(_QWORD *)v13 = 34082368;
      *(_DWORD *)(v13 + 8) = 16;
      *(_DWORD *)(v13 + 12) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      *(_QWORD *)(v13 + 24) = 0;
    }
    *(_DWORD *)(v12 + 4) = (unsigned __int64)(v13 - v4) >> 3;
    if ( (*(_DWORD *)v12 & 2) != 0 )
    {
      v14 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v14) >> 9) + 0x38) = 0;
    }
    if ( v8 != -1 )
    {
      v25 = v8;
      sub_4F362E0(a1: v8, a2: v11, a3: v12, a4: v12, a5: v23, a6: 0);
      while ( 1 )
      {
        v15 = v26(a1: 0x2000, a2: (__int64)v26, a3: v24, a4: v24, a5: v23, a6: 0);
        if ( v15 == -1 )
          break;
        v25 = v15;
        sub_4F362E0(a1: v15, a2: v11, a3: v22, a4: v9, a5: v23, a6: 0);
      }
      v12 = v22;
    }
    if ( *(_DWORD *)(v12 + 8) != 0 )
    {
      v16 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v5 + 32) )
      {
        v16 = sub_1EAA920(a1: v14, a2: v11, a3: 34082680);
        v17 = v22;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v16 + 24;
        *(_DWORD *)v16 = 34082680;
        *(_DWORD *)(v16 + 4) = 0;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)(v16 + 16) = 0;
        v17 = v12;
      }
      v21 = v16;
      sub_4FE9280(a1: v14, a2: v11, a3: v16, a4: v9, a5: v17, a6: v4);
      v18 = v21;
    }
    else
    {
      v18 = v4 + 373281248;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280(a1: v14, a2: v11, a3: v22, a4: v9, a5: v18);
    return v18;
  }
}
