// sub_1932A9668
// rva 0x132a9668  size 867  section .text  group text
// window base 0x1932a9668: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932A9668(_DWORD a1, _DWORD a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v7; // r10
  __int64 i; // r9
  _QWORD *v9; // rcx
  char v10; // cl
  __int64 result; // rax
  __int64 *v12; // rcx
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 **v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 **v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // r9
  __int64 **v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 **v33; // rcx
  __int64 *v34; // rax
  __int64 v35; // rcx

  v4 = *(_QWORD *)a3;
  v5 = *(_QWORD *)(a3 + 16);
  v7 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != 0 )
  {
    if ( v7 != 0 )
    {
      v9 = *(_QWORD **)v7;
      for ( i = *(_QWORD *)(a3 + 8); v9 != nullptr; v9 = (_QWORD *)*v9 )
        i = (__int64)v9;
    }
    else
    {
      i = *(_QWORD *)a3;
    }
  }
  else
  {
    i = *(_QWORD *)(a3 + 8);
  }
  if ( v5 != 0 )
  {
    if ( *(_QWORD *)v5 == a3 )
      *(_QWORD *)v5 = i;
    else
      *(_QWORD *)(v5 + 8) = i;
  }
  else
  {
    *a4 = i;
  }
  if ( v4 != 0 && v7 != 0 )
  {
    v10 = *(_BYTE *)(i + 32);
    *(_BYTE *)(i + 32) = *(_BYTE *)(a3 + 32);
    *(_QWORD *)i = v4;
    *(_QWORD *)(v4 + 16) = i;
    if ( i == v7 )
    {
      result = *(_QWORD *)(i + 8);
      *(_QWORD *)(i + 16) = v5;
      v5 = i;
    }
    else
    {
      v5 = *(_QWORD *)(i + 16);
      *(_QWORD *)(i + 16) = *(_QWORD *)(a3 + 16);
      result = *(_QWORD *)(i + 8);
      *(_QWORD *)v5 = result;
      *(_QWORD *)(i + 8) = v7;
      *(_QWORD *)(v7 + 16) = i;
    }
  }
  else
  {
    v10 = *(_BYTE *)(a3 + 32);
    result = i;
  }
  if ( result != 0 )
    *(_QWORD *)(result + 16) = v5;
  if ( v10 == 0 )
  {
    if ( result != 0 )
      goto LABEL_56;
    while ( result != *a4 )
    {
      v12 = *(__int64 **)v5;
      if ( result == *(_QWORD *)v5 )
      {
        v12 = *(__int64 **)(v5 + 8);
        if ( *((_BYTE *)v12 + 32) != 0 )
        {
          *((_BYTE *)v12 + 32) = 0;
          v13 = *(__int64 ***)(v5 + 16);
          v14 = *(__int64 **)(v5 + 8);
          *(_BYTE *)(v5 + 32) = 1;
          if ( v13 != nullptr )
          {
            if ( *v13 == (__int64 *)v5 )
              *v13 = v14;
            else
              v13[1] = v14;
          }
          else
          {
            *a4 = (__int64)v14;
          }
          v14[2] = (__int64)v13;
          *(_QWORD *)(v5 + 16) = v14;
          v15 = *v14;
          *(_QWORD *)(v5 + 8) = *v14;
          if ( v15 != 0 )
            *(_QWORD *)(v15 + 16) = v5;
          *v14 = v5;
          v12 = *(__int64 **)(v5 + 8);
        }
        if ( *v12 != 0 && *(_BYTE *)(*v12 + 32) != 0 || (v16 = v12[1]) != 0 && *(_BYTE *)(v16 + 32) != 0 )
        {
          v17 = v12[1];
          if ( v17 == 0 || *(_BYTE *)(v17 + 32) == 0 )
          {
            *(_BYTE *)(*v12 + 32) = 0;
            v18 = (__int64 *)v12[2];
            v19 = *v12;
            *((_BYTE *)v12 + 32) = 1;
            if ( v18 != nullptr )
            {
              if ( (__int64 *)*v18 == v12 )
                *v18 = v19;
              else
                v18[1] = v19;
            }
            else
            {
              *a4 = v19;
            }
            *(_QWORD *)(v19 + 16) = v18;
            v12[2] = v19;
            v25 = *(_QWORD *)(v19 + 8);
            *v12 = v25;
            if ( v25 != 0 )
              *(_QWORD *)(v25 + 16) = v12;
            *(_QWORD *)(v19 + 8) = v12;
            v12 = *(__int64 **)(v5 + 8);
          }
          *((_BYTE *)v12 + 32) = *(_BYTE *)(v5 + 32);
          *(_BYTE *)(v12[1] + 32) = 0;
          v26 = *(__int64 ***)(v5 + 16);
          v27 = *(__int64 **)(v5 + 8);
          *(_BYTE *)(v5 + 32) = 0;
          if ( v26 != nullptr )
          {
            if ( *v26 == (__int64 *)v5 )
              *v26 = v27;
            else
              v26[1] = v27;
          }
          else
          {
            *a4 = (__int64)v27;
          }
          v27[2] = (__int64)v26;
          *(_QWORD *)(v5 + 16) = v27;
          v28 = *v27;
          *(_QWORD *)(v5 + 8) = *v27;
          if ( v28 != 0 )
            *(_QWORD *)(v28 + 16) = v5;
          *v27 = v5;
          goto LABEL_90;
        }
      }
      else
      {
        if ( *((_BYTE *)v12 + 32) != 0 )
        {
          *((_BYTE *)v12 + 32) = 0;
          v20 = *(__int64 ***)(v5 + 16);
          v21 = *(__int64 **)v5;
          *(_BYTE *)(v5 + 32) = 1;
          if ( v20 != nullptr )
          {
            if ( *v20 == (__int64 *)v5 )
              *v20 = v21;
            else
              v20[1] = v21;
          }
          else
          {
            *a4 = (__int64)v21;
          }
          v21[2] = (__int64)v20;
          *(_QWORD *)(v5 + 16) = v21;
          v22 = v21[1];
          *(_QWORD *)v5 = v22;
          if ( v22 != 0 )
            *(_QWORD *)(v22 + 16) = v5;
          v21[1] = v5;
          v12 = *(__int64 **)v5;
        }
        v23 = *v12;
        if ( *v12 != 0 && *(_BYTE *)(v23 + 32) != 0 )
        {
          v29 = v12 + 1;
          goto LABEL_73;
        }
        v24 = v12[1];
        if ( v24 != 0 )
        {
          v23 = *v12;
          if ( *(_BYTE *)(v24 + 32) != 0 )
          {
            v29 = v12 + 1;
            if ( v23 == 0 )
              goto LABEL_74;
LABEL_73:
            if ( *(_BYTE *)(v23 + 32) == 0 )
            {
LABEL_74:
              *(_BYTE *)(*v29 + 32) = 0;
              v30 = (__int64 **)v12[2];
              v31 = (__int64 *)*v29;
              *((_BYTE *)v12 + 32) = 1;
              if ( v30 != nullptr )
              {
                if ( *v30 == v12 )
                  *v30 = v31;
                else
                  v30[1] = v31;
              }
              else
              {
                *a4 = (__int64)v31;
              }
              v31[2] = (__int64)v30;
              v12[2] = (__int64)v31;
              v32 = *v31;
              *v29 = *v31;
              if ( v32 != 0 )
                *(_QWORD *)(v32 + 16) = v12;
              *v31 = (__int64)v12;
              v12 = *(__int64 **)v5;
              v23 = **(_QWORD **)v5;
            }
            *((_BYTE *)v12 + 32) = *(_BYTE *)(v5 + 32);
            *(_BYTE *)(v23 + 32) = 0;
            v33 = *(__int64 ***)(v5 + 16);
            v34 = *(__int64 **)v5;
            *(_BYTE *)(v5 + 32) = 0;
            if ( v33 != nullptr )
            {
              if ( *v33 == (__int64 *)v5 )
                *v33 = v34;
              else
                v33[1] = v34;
            }
            else
            {
              *a4 = (__int64)v34;
            }
            v34[2] = (__int64)v33;
            *(_QWORD *)(v5 + 16) = v34;
            v35 = v34[1];
            *(_QWORD *)v5 = v35;
            if ( v35 != 0 )
              *(_QWORD *)(v35 + 16) = v5;
            v34[1] = v5;
LABEL_90:
            result = *a4;
            break;
          }
        }
      }
      *((_BYTE *)v12 + 32) = 1;
      result = v5;
      v5 = *(_QWORD *)(v5 + 16);
LABEL_56:
      if ( *(_BYTE *)(result + 32) != 0 )
        goto LABEL_92;
    }
    if ( result == 0 )
      return result;
LABEL_92:
    *(_BYTE *)(result + 32) = 0;
  }
  return result;
}
