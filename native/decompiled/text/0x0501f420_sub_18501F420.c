// sub_18501F420
// rva 0x0501f420  size 518  section .text  group text
// window base 0x18501f420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501F420(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _DWORD *v13; // r8
  _DWORD *v14; // r8
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ebp
  __int64 v21; // rsi
  unsigned int v22; // ecx
  __int64 (__fastcall *v23)(_DWORD *, __int64, _DWORD *, _QWORD, _QWORD); // rcx
  int v24; // eax
  int i; // eax
  int v27; // ebp
  __int64 (__fastcall *v28)(_QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD); // rdi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v37; // [rsp+8h] [rbp-30h]
  _DWORD *v38; // [rsp+10h] [rbp-28h]
  _DWORD *v39; // [rsp+18h] [rbp-20h]
  _DWORD *v40; // [rsp+20h] [rbp-18h]
  int v41; // [rsp+28h] [rbp-10h]
  unsigned int v42; // [rsp+2Ch] [rbp-Ch]
  unsigned int v43; // [rsp+30h] [rbp-8h]
  int v44; // [rsp+34h] [rbp-4h]

  v40 = a3;
  v39 = a5;
  v44 = a6;
  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v7 )
  {
    v43 = a3[2] >> 1;
    MEMORY[0x18632A360](a1: v7 + 94160866, a2, a3: a6, a4, a5: v43, a6: v43);
    if ( v44 < 1 )
      goto LABEL_10;
    v14 = v39;
    v15 = v40;
    if ( v39 == v7 )
      goto LABEL_21;
    v16 = *v39 >> 3;
    v17 = v7[2 * v16 + 11] & (0x568u >> HIBYTE(v7[2 * v16 + 11]));
    v18 = (unsigned __int16)v7[2 * (unsigned int)v7[2 * v16 + 5] + 3 + v17];
    if ( (_DWORD)v18 != 1384 )
    {
LABEL_22:
      MEMORY[0x182770780](a1: v11, a2: v17, a3: v15, a4: v18, a5: v14, a6: (unsigned int)v44);
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_18501F640(a1: v32, a2: v33, a3: v30, a4: v31, a5: v34, a6: v35);
    }
    v43 = *((unsigned __int16 *)v40 + 6);
    v19 = *v39 >> 3;
    v20 = v7[2 * v19 + 11];
    v38 = &v7[2 * v7[2 * v19 + 5]];
    v21 = v20 & (0x568u >> SHIBYTE(v20));
    v42 = v20 & (0x568u >> SHIBYTE(v20));
    v22 = v38[v21 + 3];
    v37 = &v7[2 * v19];
    v23 = (__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD, _QWORD))(v6
                                                                              + *(_QWORD *)((char *)v37 + HIWORD(v22)));
    v24 = v23(a1: v38, a2: v21, a3: v39, a4: v23, a5: 0);
    if ( v43 != v24 )
    {
LABEL_7:
      if ( *(int *)(v8 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 0;
    }
    for ( i = 1; ; i = v43 + 1 )
    {
      v12 = v42;
      v10 = v38;
      v13 = v39;
      v9 = v40;
      if ( v44 <= i )
        break;
      v27 = *((unsigned __int16 *)v40 + i + 6);
      v28 = (__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, _DWORD *, _QWORD))(v6
                                                                               + *(_QWORD *)((char *)v37
                                                                                           + HIWORD(v38[v42 + 3])));
      v43 = i;
      v41 = v27;
      v29 = v28(a1: v28, a2: v42, a3: v39, a4: v38, a5: (unsigned int)i);
      if ( v41 != v29 )
        goto LABEL_7;
    }
LABEL_10:
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v11, a2: v12, a3: v9, a4: v10, a5: v13);
    return 1;
  }
  MEMORY[0x182771080]();
LABEL_21:
  MEMORY[0x182771080]();
  goto LABEL_22;
}
