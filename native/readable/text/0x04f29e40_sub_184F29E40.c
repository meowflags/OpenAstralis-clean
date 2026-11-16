// sub_4F29E40
// rva 0x04f29e40  size 559  section .text  group text
// window base 0x184f29e40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F29E40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_16;
  }
  v6 = *(unsigned int *)(a3 + 16);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_16:
    sub_2771080();
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(v3 + 8 * v6 + 8);
  if ( v7 < 0x31 )
  {
LABEL_17:
    sub_2771220(a1, a2, a3: 48);
    goto LABEL_18;
  }
  v8 = *(char *)(v3 + 8 * v6 + 60) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 60) |= 2u;
  if ( v7 < 0x32 )
  {
LABEL_18:
    sub_2771220(a1, a2, a3: 49, a4: v8, a5: 49);
    goto LABEL_19;
  }
  v9 = *(char *)(v3 + 8 * v6 + 61) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 61) |= 2u;
  if ( v7 < 0x33 )
  {
LABEL_19:
    sub_2771220(a1, a2, a3: 50, a4: v9, a5: 50);
    goto LABEL_20;
  }
  v10 = *(char *)(v3 + 8 * v6 + 62) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 62) |= 2u;
  if ( v7 < 0x34 )
  {
LABEL_20:
    sub_2771220(a1, a2, a3: 51, a4: v10, a5: 51);
    goto LABEL_21;
  }
  v11 = *(char *)(v3 + 8 * v6 + 63) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 63) |= 2u;
  if ( v7 < 0x35 )
  {
LABEL_21:
    sub_2771220(a1, a2, a3: 52, a4: v11, a5: 52);
    goto LABEL_22;
  }
  v12 = *(char *)(v3 + 8 * v6 + 64) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 64) |= 2u;
  if ( v7 < 0x36 )
  {
LABEL_22:
    sub_2771220(a1, a2, a3: 53, a4: v12, a5: 53);
    goto LABEL_23;
  }
  v13 = *(char *)(v3 + 8 * v6 + 65) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 65) |= 2u;
  if ( v7 < 0x37 )
  {
LABEL_23:
    sub_2771220(a1, a2, a3: 54, a4: v13, a5: 54);
    goto LABEL_24;
  }
  v14 = *(char *)(v3 + 8 * v6 + 66) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 66) |= 2u;
  if ( v7 < 0x38 )
  {
LABEL_24:
    sub_2771220(a1, a2, a3: 55, a4: v14, a5: 55);
    goto LABEL_25;
  }
  v15 = *(char *)(v3 + 8 * v6 + 67) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 67) |= 2u;
  if ( v7 < 0x39 )
  {
LABEL_25:
    sub_2771220(a1, a2, a3: 56, a4: v15, a5: 56);
    goto LABEL_26;
  }
  v16 = *(char *)(v3 + 8 * v6 + 68) | 2u;
  *(_BYTE *)(v3 + 8 * v6 + 68) |= 2u;
  if ( v7 < 0x3A )
  {
LABEL_26:
    sub_2771220(a1, a2, a3: 57, a4: v16, a5: 57);
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
    __builtin_debugtrap();
    return sub_4F2A080();
  }
  *(_BYTE *)(v3 + 8 * v6 + 69) |= 2u;
  *(_BYTE *)(v3 + 8 * v6 + 58) |= 2u;
  *(_BYTE *)(v3 + 8 * v6 + 57) |= 2u;
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280();
  return result;
}
