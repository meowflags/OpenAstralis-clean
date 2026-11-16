// sub_182761740
// rva 0x02761740  size 582  section .text  group text
// window base 0x182761740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182761740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  float *v9; // rbx
  __int64 v10; // rbp
  __int64 result; // rax
  int v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_45;
  }
  v23 = a3;
  v22 = a5;
  v21 = a6;
  if ( *(_BYTE *)(a3 + 16) != 0 )
  {
LABEL_45:
    v18 = v6 + 373281248;
    if ( a6 == v6 )
      goto LABEL_49;
    v19 = v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12);
    goto LABEL_47;
  }
  if ( a6 == v6 )
  {
    while ( 1 )
    {
      v18 = sub_18275BEC0(a1, a2, a3, a4, a5: v6 + 373281248, a6: v6 + 373281248, a7: v20);
LABEL_49:
      v19 = v18;
LABEL_47:
      sub_18275BDA0(a1, a2, a3: v23, a4: v19, a5: v19, a6: v18, a7: v20);
    }
  }
  v8 = *(unsigned int *)(a3 + 20);
  v9 = *(float **)(a3 + 8);
  v10 = v6 + 8 * v8;
  result = *(_DWORD *)a6 >> 3;
  switch ( (_DWORD)result )
  {
    case 0x416FB5:
      result = (unsigned int)*(char *)(a6 + 4);
      v13 = (float)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(float *)((char *)v9 + v10) = v13;
      else
        *v9 = v13;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x416FCB:
      result = (unsigned int)*(__int16 *)(a6 + 4);
      v14 = (float)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(float *)((char *)v9 + v10) = v14;
      else
        *v9 = v14;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x416FE1:
      result = *(unsigned __int16 *)(a6 + 4);
      v15 = (float)(int)result;
      if ( (_DWORD)v8 != 0 )
        *(float *)((char *)v9 + v10) = v15;
      else
        *v9 = v15;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x4103C8:
      v16 = (float)*(int *)(a6 + 4);
      if ( (_DWORD)v8 != 0 )
        *(float *)((char *)v9 + v10) = v16;
      else
        *v9 = v16;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    case 0x410264:
      v17 = (float)*(__int64 *)(a6 + 8);
      if ( (_DWORD)v8 != 0 )
        *(float *)((char *)v9 + v10) = v17;
      else
        *v9 = v17;
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_18277F280(a1, a2, a3);
    default:
      break;
  }
  if ( (_DWORD)result != 4279946 )
  {
    sub_18275BEC0(
      a1,
      a2,
      a3,
      a4: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a5: v6 + 8LL * *(unsigned int *)(v6 + 8LL * (*(_DWORD *)a6 >> 3) + 12),
      a6: v6 + 373281248,
      a7: v20);
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
    return sub_1827619A0();
  }
  v12 = *(_DWORD *)(a6 + 4);
  if ( (_DWORD)v8 != 0 )
    *(_DWORD *)((char *)v9 + v10) = v12;
  else
    *(_DWORD *)v9 = v12;
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_18277F280(a1, a2, a3);
  return result;
}
