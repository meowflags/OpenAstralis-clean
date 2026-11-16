// sub_181EB7F80
// rva 0x01eb7f80  size 447  section .text  group text
// window base 0x181eb7f80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EB7F80()
{
  __int64 v0; // r14
  __int64 v1; // r15
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 i; // rcx
  _BYTE v12[48]; // [rsp+30h] [rbp-88h] BYREF
  char v13; // [rsp+60h] [rbp-58h] BYREF
  char v14; // [rsp+70h] [rbp-48h] BYREF
  __int64 v15; // [rsp+80h] [rbp-38h]
  __int64 v16; // [rsp+88h] [rbp-30h]
  __int64 v17; // [rsp+90h] [rbp-28h]
  void (__fastcall *v18)(__int64, _QWORD *, _QWORD *, __int64, __int64); // [rsp+98h] [rbp-20h]
  _QWORD *v19; // [rsp+A0h] [rbp-18h]
  char *v20; // [rsp+A8h] [rbp-10h]
  char *v21; // [rsp+B0h] [rbp-8h]

  v21 = &v14;
  v20 = &v13;
  v19 = v12;
  v18 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *, __int64, __int64))MEMORY[0x11703718];
  MEMORY[0x11703718](a1: MEMORY[0x11703718], a2: v12, a3: v12, a4: v12, a5: 48);
  v2 = v19;
  v3 = v19[1];
  v17 = v3;
  *(_QWORD *)v20 = v3;
  v16 = v2[3];
  v18(a1: v16, a2: v2, a3: v2, a4: v16 + v3, a5: 48);
  v5 = v19;
  if ( v19[1] == v17 )
  {
    for ( i = v16 + v19[3]; ; i = v15 + v19[3] )
    {
      v15 = i;
      v18(a1: (__int64)v18, a2: v5, a3: v5, a4: v17 + i, a5: 48);
      v5 = v19;
      if ( v19[1] != v17 )
        break;
    }
    v6 = v15;
  }
  else
  {
    v6 = v16;
  }
  v7 = (__int64 *)v20;
  v8 = v17 + v6;
  *(_QWORD *)v21 = v8;
  v9 = *v7;
  if ( *v7 == 0 )
  {
    v17 = v8;
    MEMORY[0x1828C1C40](a1: v4, a2: v5, a3: v0 + 367050480);
    JUMPOUT(0x181EB813FLL);
  }
  *(_QWORD *)(v1 + 232) = v8;
  *(_QWORD *)(v1 + 240) = v9;
  *(_QWORD *)(v1 + 8) = v9 + 40960;
  *(_DWORD *)(v1 + 320) = 1;
  return 1;
}
